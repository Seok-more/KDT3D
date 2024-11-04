// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterBase.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/ZoomSpringArmComponent.h"
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

// Sets default values
ACharacterBase::ACharacterBase()
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
	}
	
	{	// Basic Setting
		UCharacterMovementComponent* CharacterMovementComponent = GetCharacterMovement();

		JumpMaxCount = 2; // UE_LOG(LogTemp, Warning, TEXT("Current Jump Count: %d"), CurrentJumpCount);
		CharacterMovementComponent->AirControl = 0.2f;
		CharacterMovementComponent->AirControlBoostMultiplier = 1.3f;
		CharacterMovementComponent->AirControlBoostVelocityThreshold = 800.0f;  // 일정 속도 이상에서만 공중 제어가 강화됨

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

	{	// Class Check -> CharacterBase is not child of PawnBase
		//if (Data->PawnClass != GetClass())
		//{
		//	ensureMsgf(false, TEXT("Class is not equal to DataTable"));
		//}
	}



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

// Called every frame
void ACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FindOverlappedItem();
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

void ACharacterBase::OnDie()
{
	UE_LOG(LogTemp, Warning, TEXT("Die"));
}


