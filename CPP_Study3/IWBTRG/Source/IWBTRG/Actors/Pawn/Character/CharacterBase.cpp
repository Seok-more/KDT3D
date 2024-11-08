// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterBase.h"
#include "Components/AdCharacterMovementComponent.h"
#include "Components/ZoomSpringArmComponent.h"
#include "Actors/Effect/EffectBase_UnPooled.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/SkinnedAssetCommon.h"


FCharacterBaseTableRow::FCharacterBaseTableRow()
	:FPawnBaseTableRow()
{
}

#if WITH_EDITOR
void FCharacterBaseTableRow::OnDataTableChanged(const UDataTable* InDataTable, const FName InRowName)
{
	Super::OnDataTableChanged(InDataTable, InRowName);

	bool bNotify = true;
	if (bNotify)
	{
		OnCharacterBaseTableRowChanged.Broadcast();
	}
}
#endif
// ------------------------------------------------------------------------------

ACharacterBase::ACharacterBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer.SetDefaultSubobjectClass<UAdCharacterMovementComponent>(Super::CharacterMovementComponentName))
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	{
		SpringArm = CreateDefaultSubobject<UZoomSpringArmComponent>(TEXT("SpringArm"));
		Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	}
	
	{
		SpringArm->SetupAttachment(GetMesh());
		SpringArm->ProbeSize = 5.0;
		SpringArm->bUsePawnControlRotation = true;
		SpringArm->bInheritRoll = false;
		SpringArm->SetMinMaxTargetArmLength(100.f, SpringArm->GetMaxTargetArmLength());
		Camera->SetupAttachment(SpringArm);
	
		bUseControllerRotationYaw = false;
	
		const FRotator Rotation = FRotator(0., 90.0, 0.);
		const FVector Translation = FVector(0., 0., 90.0);
		FTransform SpringArmTransform = FTransform(Rotation, Translation, FVector::OneVector);
		SpringArm->SetRelativeTransform(SpringArmTransform);

		Camera->SetRelativeLocation(FVector(0.f, -50.f, 70.f));
	}
	
	{	// Basic Setting
		UCharacterMovementComponent* CharacterMovementComponent = GetCharacterMovement();

		// 캐릭터 난간 임계점 작을수록 잘떨어짐(기본40)
		CharacterMovementComponent->PerchRadiusThreshold = 35.0f;

		JumpMaxCount = 2; // UE_LOG(LogTemp, Warning, TEXT("Current Jump Count: %d"), CurrentJumpCount);
		CharacterMovementComponent->AirControl = 0.4f;
		CharacterMovementComponent->AirControlBoostMultiplier = 1.3f;
		CharacterMovementComponent->AirControlBoostVelocityThreshold = 800.0f;  // 일정 속도 이상에서만 공중 제어가 강화됨

	}	

	{
		GetCapsuleComponent()->SetCollisionProfileName(CollisionProfileName::Player);
		GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	{
		GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &ThisClass::OnBeginOverlap);
		GetCapsuleComponent()->OnComponentHit.AddDynamic(this, &ThisClass::OnHit);
	}

	{
		StatusComponent = CreateDefaultSubobject<UStatusComponent>(TEXT("StatusComponent"));
	}
	{
		//MotionWarpComponent = CreateDefaultSubobject<UMotionWarpingComponent>(TEXT("MotionWarpComponent"));
	}

	{
		StatusComponent->OnDie.AddDynamic(this, &ThisClass::OnDie);
	}
}

// Called when the game starts or when spawned
void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();

	// PlayerController의 Data확인용
	UpdateData();


	{	// GameInstanceBase 바인딩
		UGameInstanceBase* GameInstanceBase = Cast<UGameInstanceBase>(GetGameInstance());
		if (GameInstanceBase)
		{
			GameInstanceBase->OnTempSave.AddDynamic(this, &ThisClass::OnTempSave);
		}
	}

	{	// Projectle Data 저장
		InitialProjectileData = Data->Projectile;
	}
	
}

void ACharacterBase::OnConstruction(const FTransform& Transform)
{
	UpdateData();

	if (Data)
	{
#if WITH_EDITOR
		CharacterBaseTableRowChangedHandle = Data->OnCharacterBaseTableRowChanged.AddUObject(this, &ThisClass::UpdateData);
#endif
		UpdateData();
	}


}

void ACharacterBase::SetData(const FDataTableRowHandle& InDataTableRowHandle)
{
	DataTableRowHandle = InDataTableRowHandle;
	if (DataTableRowHandle.IsNull()) { return; }
	Data = DataTableRowHandle.GetRow<FCharacterBaseTableRow>(TEXT("Character"));
	if (!Data) { ensure(false); return; }

	{	// Movement
		Movement->RotationRate = Data->RotationRate;
		Movement->bOrientRotationToMovement = Data->bOrientRotationToMovement;
		Movement->GetNavAgentPropertiesRef().bCanCrouch = Data->bCanCrouch;
		Movement->MaxWalkSpeed = Data->MovementMaxSpeed;

	}

	{	// Projectile
		ProjectileData = Data->Projectile.GetRow<FProjectileTableRow>(TEXT("Projectile"));
	}

	{	// Crouched Height
		const float NewCapsuleHalfHeight = Data->CapsuleHeightHalf * 0.5f;
		Movement->SetCrouchedHalfHeight(NewCapsuleHalfHeight);
	}

	{	// Capsule
		UCapsuleComponent* Capsule = GetCapsuleComponent();
		if (!FMath::IsNearlyEqual(Capsule->GetUnscaledCapsuleHalfHeight(), Data->CapsuleHeightHalf))
		{
			Capsule->SetCapsuleHalfHeight(Data->CapsuleHeightHalf, false);
		}
	}

	{	// Mesh	
		SkeletalMeshComponent->SetSkeletalMesh(Data->SkeletalMesh);
		SkeletalMeshComponent->SetRelativeTransform(Data->Transform);
	}
	{	// Animation
		SkeletalMeshComponent->SetAnimClass(Data->AnimClass);
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
				SkeletalMeshComponent->SetMaterial(i, Material);
				bHasMID = false;
			}
		}
	}

}

void ACharacterBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	Data->Projectile = InitialProjectileData;
}

// Called every frame
void ACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	{	// 아이템 겹침 체크
		FindOverlappedItem();
	}

	{	// Collision doesn't work when character stops bug -> fix_temp
		// 언리얼 캡슐 콜리젼은 가만히 있을때는 바운더리가 아닌, 중심에서만 콜리젼 체크를 한다는데 뭔
		FHitResult OutHit;
		GetCharacterMovement()->SafeMoveUpdatedComponent(FVector(0.f, 0.f, 0.01f), GetActorRotation(), true, OutHit);
		GetCharacterMovement()->SafeMoveUpdatedComponent(FVector(0.f, 0.f, -0.01f), GetActorRotation(), true, OutHit);
	}

	{	// 위아래 압사
		{
			float CapsuleHeight = GetCapsuleComponent()->GetScaledCapsuleHalfHeight() * 2;
			if (CapsuleHeight > RayTest())
			{
				StatusComponent->OnDie.Broadcast();
			}
		}
	}

}

void ACharacterBase::UpdateData()
{
	SetData(DataTableRowHandle);
}

void ACharacterBase::Destroy()
{

}

// Called to bind functionality to input
void ACharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACharacterBase::OnStartCrouch(float HeightAdjust, float ScaledHeightAdjust)
{
	RecalculateBaseEyeHeight();

	FVector& MeshRelativeLocation = GetMesh()->GetRelativeLocation_DirectMutable();
	
	MeshRelativeLocation.Z = Data->Transform.GetLocation().Z + HeightAdjust;
	BaseTranslationOffset.Z = MeshRelativeLocation.Z;
	

	K2_OnStartCrouch(HeightAdjust, ScaledHeightAdjust);
}

void ACharacterBase::OnEndCrouch(float HeightAdjust, float ScaledHeightAdjust)
{
	RecalculateBaseEyeHeight();

	FVector& MeshRelativeLocation = GetMesh()->GetRelativeLocation_DirectMutable();
	
	MeshRelativeLocation.Z = Data->Transform.GetLocation().Z;
	BaseTranslationOffset.Z = MeshRelativeLocation.Z;
	
	K2_OnEndCrouch(HeightAdjust, ScaledHeightAdjust);

	// UnCrouch할때 아주아주 미세하게 콜리젼이 위로 올라가는거 앎?
}

void ACharacterBase::FindOverlappedItem()
{
	TArray<AActor*> Temp;
	GetCapsuleComponent()->GetOverlappingActors(Temp, AActorItem::StaticClass());

	if (Temp != OverlappedItems)
	{
		OverlappedItems = MoveTemp(Temp);
	}
}

float ACharacterBase::RayTest()
{
	// 측면 압사 구현하고싶으면 레이를 측면으로 8방향정도 쏘고, 캡슐의 반지름하고 비교해도되고 뭐

	UCapsuleComponent* CapsuleComp = GetCapsuleComponent();
	FVector CapsuleCenter = CapsuleComp->GetComponentLocation();
	float CapsuleHalfHeight = CapsuleComp->GetScaledCapsuleHalfHeight();

	FVector TraceStartUp = CapsuleCenter; 
	FVector TraceEndUp = CapsuleCenter + FVector(0.f, 0.f, CapsuleHalfHeight + 1000.f); 

	FVector TraceStartDown = CapsuleCenter; 
	FVector TraceEndDown = CapsuleCenter - FVector(0.f, 0.f, CapsuleHalfHeight + 1000.f); 

	FHitResult HitResultUp;
	FHitResult HitResultDown;

	FCollisionQueryParams CollisionParamsUp;
	CollisionParamsUp.AddIgnoredActor(this); 

	bool bHitUp = GetWorld()->LineTraceSingleByChannel(HitResultUp, TraceStartUp, TraceEndUp, ECC_Visibility, CollisionParamsUp);

	FCollisionQueryParams CollisionParamsDown;
	CollisionParamsDown.AddIgnoredActor(this); 

	bool bHitDown = GetWorld()->LineTraceSingleByChannel(HitResultDown, TraceStartDown, TraceEndDown, ECC_Visibility, CollisionParamsDown);

	float UpRayLength = 0.f;
	float DownRayLength = 0.f;

	if (bHitUp)
	{
		UpRayLength = (HitResultUp.ImpactPoint - TraceStartUp).Size();
	}
	else
	{
		UpRayLength = (TraceEndUp - TraceStartUp).Size(); 
	}

	if (bHitDown)
	{
		DownRayLength = (HitResultDown.ImpactPoint - TraceStartDown).Size();
	}
	else
	{
		DownRayLength = (TraceEndDown - TraceStartDown).Size(); 
	}

	float TotalRayLength = UpRayLength + DownRayLength;

	//DrawDebugLine(GetWorld(), TraceStartUp, TraceEndUp, FColor::Green, false, 1.f, 0, 1.f); 
	//DrawDebugLine(GetWorld(), TraceStartDown, TraceEndDown, FColor::Red, false, 1.f, 0, 1.f); 

	return TotalRayLength;
}

void ACharacterBase::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AActorBase* OtherActorBase = Cast<AActorBase>(OtherActor);
	APawnBase* OtherPawnBase = Cast<APawnBase>(OtherActor);

	// 여기 여러개 겹치긴해
	if (OtherPawnBase && !OtherPawnBase->IsFriendly())
	{
		StatusComponent->OnDie.Broadcast();
	}


}

void ACharacterBase::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	AActorBase* OtherActorBase = Cast<AActorBase>(OtherActor);
	APawnBase* OtherPawnBase = Cast<APawnBase>(OtherActor);

	if (OtherPawnBase && !OtherPawnBase->IsFriendly())
	{
		StatusComponent->OnDie.Broadcast();
	}

}

void ACharacterBase::OnDie()
{
	UE_LOG(LogTemp, Warning, TEXT("Die"));

	GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_None);
	SkeletalMeshComponent->SetVisibility(false);

	Destroy();
}



void ACharacterBase::OnTempSave()
{
	UGameInstanceBase* GameInstanceBase = Cast<UGameInstanceBase>(GetGameInstance());
	GameInstanceBase->PlayerTransformToTempSave = GetActorTransform();
	GameInstanceBase->CurrentLevelNameToTempSave = UGameplayStatics::GetCurrentLevelName(GetWorld());
	GameInstanceBase->ControllerRotatorToTempSave = GetControlRotation();
	GameInstanceBase->PlayerProjectileDataToTempSave = Data->Projectile;
	GameInstanceBase->PlayerProjectileNumToTempSave = StatusComponent->CurrentProjectileNum;
}



