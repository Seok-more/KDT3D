// Fill out your copyright notice in the Description page of Project Settings.


#include "PawnBase.h"
#include "Engine/SkinnedAssetCommon.h"
#include "Kismet/KismetSystemLibrary.h"
#include "UI/WidgetBase.h"
#include "Misc/Utils.h"
#include "Actors/AI/AIControllerPathTracing.h"


FPawnBaseTableRow::FPawnBaseTableRow()
	:PawnClass(APawnBase::StaticClass())

{
}

#if WITH_EDITOR
void FPawnBaseTableRow::OnDataTableChanged(const UDataTable* InDataTable, const FName InRowName)
{
	Super::OnDataTableChanged(InDataTable, InRowName);

	bool bNotify = true;
	if (bNotify)
	{
		OnPawnBaseTableRowChanged.Broadcast();
	}

}
#endif
//-----------------------------------------------------------------------------

// Sets default values
APawnBase::APawnBase(const FObjectInitializer& ObjectInitializer)
	// : Super(ObjectInitializer.SetDefaultSubobjectClass<USphereComponent>(TEXT("CollisionComponent")))
	: Super(ObjectInitializer)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	{
		DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
		RootComponent = DefaultSceneRoot;
	}

	{	
		SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
		SkeletalMeshComponent->SetupAttachment(RootComponent);
	}
	{	// Movement
		MovementComponent = CreateDefaultSubobject<UAdvancedFloatingPawnMovement>(TEXT("MovementComponent"));
	}
	{
		StatusComponent = CreateDefaultSubobject<UStatusComponent>(TEXT("StatusComponent"));
	}
	{
		// HPWidget
		ConstructorHelpers::FClassFinder<UUserWidget> WidgetClass(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UI/UI_HPBar.UI_HPBar_C'"));
		HPWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("HPWidgetComponent"));
		HPWidgetComponent->SetupAttachment(RootComponent);
		HPWidgetComponent->SetRelativeLocation(FVector(0., 0., 130.0));
		HPWidgetComponent->SetDrawSize(FVector2D(256.3, 17.0));
		HPWidgetComponent->SetWidgetSpace(EWidgetSpace::Screen);
		HPWidgetComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		HPWidgetComponent->SetWidgetClass(WidgetClass.Class);
	}
}

// Called when the game starts or when spawned
void APawnBase::BeginPlay()
{
	Super::BeginPlay();

	UpdateData();
	UWidgetBase* Widget = Cast<UWidgetBase>(HPWidgetComponent->GetWidget());
	check(Widget);

	Widget->SetOwningPawn(this);


}

void APawnBase::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	UpdateData();

	if (Data)
	{
#if WITH_EDITOR
		// Does it need release function?
		PawnBaseTableRowChangedHandle = Data->OnPawnBaseTableRowChanged.AddUObject(this, &ThisClass::UpdateData);
#endif
		UpdateData();
	}

	SetActorTransform(Transform);

}

void APawnBase::SetData(const FDataTableRowHandle& InDataTableRowHandle)
{
	DataTableRowHandle = InDataTableRowHandle;
	if (DataTableRowHandle.IsNull()) { return; }
	Data = DataTableRowHandle.GetRow<FPawnBaseTableRow>(TEXT("Pawn"));
	if (!Data) { ensure(false); return; }

	{	// Class Check
		if (Data->PawnClass != GetClass())
		{
			ensureMsgf(false, TEXT("Class is not equal to DataTable"));
		} 
	}

	{	// Mesh
		SkeletalMeshComponent->SetSkeletalMesh(Data->SkeletalMesh);
		SkeletalMeshComponent->SetRelativeTransform(Data->Transform);
		SkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	{	// Animation

		SkeletalMeshComponent->SetAnimClass(Data->AnimClass);

	}

	{	// CollisionComponent
		if (!IsValid(CollisionComponent) || CollisionComponent->GetClass() != Data->CollisionClass)
		{
			EObjectFlags SubobjectFlags = GetMaskedFlags(RF_PropagateToSubObjects) | RF_DefaultSubObject;
			
			FName UniqueName = MakeUniqueObjectName(this, UShapeComponent::StaticClass(), TEXT("CollisionComponent"));
			
			if (!CollisionComponent)
			{
				CollisionComponent = NewObject<UShapeComponent>(this, Data->CollisionClass, UniqueName, SubobjectFlags);
			}
			else
			{
				CollisionComponent->DestroyComponent();
				CollisionComponent = NewObject<UShapeComponent>(this, Data->CollisionClass, UniqueName, SubobjectFlags);
			}
			
			CollisionComponent = NewObject<UShapeComponent>(this, Data->CollisionClass, UniqueName, SubobjectFlags);
			
			CollisionComponent->RegisterComponent();
			CollisionComponent->SetCollisionProfileName(CollisionProfileName::Enemy);
			CollisionComponent->SetCanEverAffectNavigation(false);
			SetRootComponent(CollisionComponent);
			DefaultSceneRoot->SetRelativeTransform(FTransform::Identity);
			DefaultSceneRoot->AttachToComponent(CollisionComponent, FAttachmentTransformRules::KeepRelativeTransform);
		}

		if (USphereComponent* SphereComponent = Cast<USphereComponent>(CollisionComponent))
		{
			SphereComponent->SetSphereRadius(Data->CollisionSphereRadius);
		}
		else if (UBoxComponent* BoxComponent = Cast<UBoxComponent>(CollisionComponent))
		{
			BoxComponent->SetBoxExtent(Data->CollisionBoxExtent);
		}
		else if (UCapsuleComponent* CapsuleComponent = Cast<UCapsuleComponent>(CollisionComponent))
		{
			CapsuleComponent->SetCapsuleSize(Data->CollisionCapsuleRadius, Data->CollisionCapsuleHalfHeight);
		}
	}

	{	// Movement
		MovementComponent->MaxSpeed = Data->MovementMaxSpeed;
	}

	 
	{	// MID
		if (Data && Data->bMID)
		{
			for (int32 i = 0; i < SkeletalMeshComponent->GetNumMaterials(); ++i)
			{
				UMaterialInstanceDynamic* MID = SkeletalMeshComponent->CreateDynamicMaterialInstance(i);
				SkeletalMeshComponent->SetMaterial(i, MID);
				bHasMID = true;

				MID->SetVectorParameterValue(TEXT("BaseColor"), Data->MIDColor_temp); // temp
			}
			
		}
		else if (!Data->bMID && Data->SkeletalMesh)
		{
			TArray<FSkeletalMaterial> Materials = Data->SkeletalMesh->GetMaterials();

			for (int32 i = 0; i < Materials.Num(); ++i)
			{
				UMaterialInterface* Material = Materials[i].MaterialInterface;
				bHasMID = false;

				SkeletalMeshComponent->SetMaterial(i, Material);
			}
		}
	}

	{	
	}
}

void APawnBase::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (PatrolPathRef)
	{
		if (AAIControllerPathTracing* PathFollow = Cast<AAIControllerPathTracing>(Controller))
		{
			PathFollow->SetPatrolPath(PatrolPathRef->GetPath());
		}
	}


}

void APawnBase::PostDuplicate(EDuplicateMode::Type DuplicateMode)
{
	Super::PostDuplicate(DuplicateMode);

	if (DuplicateMode == EDuplicateMode::Normal)
	{
		FTransform Backup = GetActorTransform();
		CollisionComponent->DestroyComponent();
		SetData(DataTableRowHandle);
		SetActorTransform(Backup);
	}
}

void APawnBase::PostLoad()
{
	Super::PostLoad();
}

void APawnBase::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}


// Called every frame
void APawnBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APawnBase::UpdateData()
{
	SetData(DataTableRowHandle);
}

void APawnBase::Destroy()
{
	Super::Destroy();
}

void APawnBase::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

float APawnBase::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	if (StatusComponent->IsDie()) {return 0.f;}
	
	float DamageResult = StatusComponent->TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);

	if (FMath::IsNearlyZero(DamageResult)) 
	{ return 0.0; }

	if (Controller)
	{
		Controller->StopMovement();
	}


	if (StatusComponent->IsDie() && !Data->DieMontage.IsEmpty())
	{
		if (Controller)
		{
			Controller->Destroy();
		}

		SetActorEnableCollision(false);

		const int64 Index = FMath::RandRange(0, Data->DieMontage.Num() - 1);
		CurrentDieMontage = Data->DieMontage[Index];

		UAnimInstance* AnimInstance = SkeletalMeshComponent->GetAnimInstance();
		AnimInstance->Montage_Play(CurrentDieMontage);
		
		// Temporary Code, Should be developped
		UKismetSystemLibrary::K2_SetTimer(this, TEXT("OnDie"), CurrentDieMontage->GetPlayLength()-0.3f, false);
	}

	else if (Data && !Data->HittedMontage.IsEmpty())
	{
		int64 HitReactIndex = FMath::RandRange(0, Data->HittedMontage.Num()-1);
		UAnimInstance* AnimInstance = SkeletalMeshComponent->GetAnimInstance();
		AnimInstance->Montage_Play(Data->HittedMontage[HitReactIndex]);

	}
	return 0.0f;
}

void APawnBase::OnDie()
{
	UAnimInstance* AnimInstance = SkeletalMeshComponent->GetAnimInstance();
	AnimInstance->Montage_Pause(CurrentDieMontage);
	Destroy();
}

