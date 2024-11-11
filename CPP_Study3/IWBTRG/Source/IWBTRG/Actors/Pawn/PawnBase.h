// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/AdvancedFloatingPawnMovement.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/StatusComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SplineComponent.h"
#include "Components/WidgetComponent.h"
#include "Actors/AI/PatrolPath.h"
#include "AIController.h"
#include "PawnBase.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnPawnBaseTableRowChanged)

USTRUCT()
struct IWBTRG_API FPawnBaseTableRow : public FTableRowBase
{
	GENERATED_BODY()

public:
	FPawnBaseTableRow();

public: // Class
	UPROPERTY(EditAnywhere, Category = "Class")
	TSubclassOf<APawnBase> PawnClass;

public: // Mesh
	UPROPERTY(EditAnywhere, Category = "Mesh")
	USkeletalMesh* SkeletalMesh = nullptr;

	UPROPERTY(EditAnywhere, Category = "Mesh")
	FTransform Transform = FTransform::Identity;

public: // Animation
	UPROPERTY(EditAnywhere, Category = "Animation")
	TSubclassOf<UAnimInstance> AnimClass = nullptr;

	UPROPERTY(EditAnywhere, Category = "Animation")
	UAnimMontage* ShotMontage;

	UPROPERTY(EditAnywhere, Category = "Animation")
	UAnimMontage* AttackMontage;

	UPROPERTY(EditAnywhere, Category = "Animation")
	TArray<UAnimMontage*> HittedMontage;

	UPROPERTY(EditAnywhere, Category = "Animation")
	TArray<UAnimMontage*> DieMontage;

	UPROPERTY(EditAnywhere, Category = "Projectile", meta = (RowType = "/Script/IWBTRG.ProjectileTableRow"))
	FDataTableRowHandle Projectile;


public: // Collision
	UPROPERTY(EditAnywhere, Category = "Collision")
	TSubclassOf<UShapeComponent> CollisionClass = USphereComponent::StaticClass();
	
	UPROPERTY(EditAnywhere, Category = "Collision")
	float CollisionSphereRadius = 32.f;
	
	UPROPERTY(EditAnywhere, Category = "Collision")
	FVector CollisionBoxExtent = FVector(32.0, 32.0, 32.0);
	
	UPROPERTY(EditAnywhere, Category = "Collision")
	float CollisionCapsuleRadius = 22.f;
	
	UPROPERTY(EditAnywhere, Category = "Collision")
	float CollisionCapsuleHalfHeight = 44.f;


public: // Movement
	// No function
	UPROPERTY(EditAnywhere, Category = "Movement")
	float MovementMaxSpeed = 400.f;

public: // MID
	UPROPERTY(EditAnywhere, Category = "MID")
	bool bMID = false;

	UPROPERTY(EditAnywhere, Category = "MID")
	FLinearColor MIDColor_temp = FLinearColor(1.0, 1.0, 1.0, 1.0);

public: // Friendly
	UPROPERTY(EditAnywhere, Category = "Friendly")
	bool bFriendly = false;


public:	// AI
	UPROPERTY(EditAnywhere, Category = "AI")
	TSubclassOf<AAIController> AIControllerClass;;


public:


#if WITH_EDITOR


	virtual void OnDataTableChanged(const UDataTable* InDataTable, const FName InRowName) override;
#endif

public:
	FOnPawnBaseTableRowChanged OnPawnBaseTableRowChanged;

};

// ----------------------------------------------------------

UCLASS()
class IWBTRG_API APawnBase : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APawnBase(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;
	virtual void SetData(const FDataTableRowHandle& InDataTableRowHandle);

	virtual void PostInitializeComponents() override;

	virtual void PostDuplicate(EDuplicateMode::Type DuplicateMode) override;
	virtual void PostLoad() override;
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void UpdateData();
	virtual void Destroy();

	
	virtual bool IsFriendly() {return bIsFriendly;}



protected:
	virtual void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

protected:
	UFUNCTION()
	virtual void OnDie();

public:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USceneComponent> DefaultSceneRoot;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USkeletalMeshComponent> SkeletalMeshComponent;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UShapeComponent> CollisionComponent;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UFloatingPawnMovement> MovementComponent;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStatusComponent> StatusComponent;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UWidgetComponent> HPWidgetComponent;

	UPROPERTY(EditAnywhere)
	TObjectPtr<APatrolPath> PatrolPathRef;



protected:
	bool bHasMID = false;
	bool bIsFriendly = false;

public:
	UPROPERTY(EditAnywhere, meta = (RowType = "/Script/IWBTRG.PawnBaseTableRow"))
	FDataTableRowHandle DataTableRowHandle;

	FPawnBaseTableRow* Data = nullptr;
protected:
	FDelegateHandle PawnBaseTableRowChangedHandle;

	UAnimMontage* CurrentDieMontage;
};
