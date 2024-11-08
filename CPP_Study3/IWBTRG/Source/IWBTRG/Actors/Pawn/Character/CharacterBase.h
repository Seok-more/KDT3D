// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/ActorItem.h"
#include "Actors/ActorSave.h"
#include "GameFramework/Character.h"
#include "Components/ZoomSpringArmComponent.h"
#include "Actors/ActorProjectile.h"
#include "Components/StatusComponent.h"
#include "Camera/CameraComponent.h"
#include "Misc/Utils.h"
#include "Animation/AnimInstanceBase.h"
#include "../PawnBase.h"
#include "MotionWarpingComponent.h"
#include "System/GameInstanceBase.h"
#include "CharacterBase.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnCharacterBaseTableRowChanged)

USTRUCT()
struct IWBTRG_API FCharacterBaseTableRow : public FPawnBaseTableRow
{
	GENERATED_BODY()
public:
	FCharacterBaseTableRow();

public:
	UPROPERTY(EditAnywhere, Category = "Collision|CapsuleComponent")
	float CapsuleHeightHalf = 90.f;

public:
	

public:
	UPROPERTY(EditAnywhere, Category = "Movement|MovementComponent")
	FRotator RotationRate = FRotator(0.0, 720.0, 0.0);
	UPROPERTY(EditAnywhere, Category = "Movement|ovementComponent")
	bool bOrientRotationToMovement = true;
	UPROPERTY(EditAnywhere, Category = "Movement|MovementComponent")
	bool bCanCrouch = true;


public: // IMC
	UPROPERTY(EditAnywhere, Category = "Input")
	TArray<UInputMappingContext*> IMCs;

public:

#if WITH_EDITOR
	virtual void OnDataTableChanged(const UDataTable* InDataTable, const FName InRowName) override;
#endif


public:
	FOnCharacterBaseTableRowChanged OnCharacterBaseTableRowChanged;

};

//--------------------------------------------------------------

UCLASS()
class IWBTRG_API ACharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	//ACharacterBase();
	ACharacterBase(const FObjectInitializer& ObjectInitializer);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;
	virtual void SetData(const FDataTableRowHandle& InDataTableRowHandle);
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void UpdateData();
	virtual void Destroy();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void OnStartCrouch(float HeightAdjust, float ScaledHeightAdjust) override;
	virtual void OnEndCrouch(float HeightAdjust, float ScaledHeightAdjust) override;

public:
	virtual void FindOverlappedItem();
	virtual float RayTest();

protected:

	UFUNCTION()
	virtual void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);


public:
	UFUNCTION()
	virtual void OnDie();

	UFUNCTION()
	virtual void OnTempSave();


public:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStatusComponent> StatusComponent;



public:
	TObjectPtr<USkeletalMeshComponent> SkeletalMeshComponent = GetMesh();

	TObjectPtr<UCharacterMovementComponent> Movement = GetCharacterMovement();

	FProjectileTableRow* ProjectileData;
	FDataTableRowHandle InitialProjectileData;

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TObjectPtr<UZoomSpringArmComponent> SpringArm;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TObjectPtr<UCameraComponent> Camera;

	FCharacterBaseTableRow* Data = nullptr;

	TArray<AActor*> OverlappedItems;

protected:
	bool bHasMID = false;
	bool bIsFriendly = true;

protected:
	UPROPERTY(EditAnywhere, meta = (RowType = "/Script/IWBTRG.CharacterBaseTableRow"))
	FDataTableRowHandle DataTableRowHandle;


	FDelegateHandle CharacterBaseTableRowChangedHandle;
	

};
