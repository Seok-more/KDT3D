// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Misc/Utils.h"
#include "Actors/ActorProjectile.h"
#include "Components/StaticMeshComponent.h"
#include "Components/StatusComponent.h"
#include "Components/BoxComponent.h"
#include "Trigger/TriggerBoxBase.h"
#include "Materials/MaterialInterface.h"
#include "Effect/EffectBase.h"
#include "ActorBase.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnActorBaseTableRowChanged)

USTRUCT()
struct IWBTRG_API FActorBaseTableRow : public FTableRowBase
{
	GENERATED_BODY()
	
public:
	FActorBaseTableRow();

public: // Class
	UPROPERTY(EditAnywhere, Category = "Class")
	TSubclassOf<AActorBase> ActorClass;


public: // Mesh
	UPROPERTY()
	bool bStaticMesh = true;

	UPROPERTY(EditAnywhere, Category = "Mesh", meta = (EditCondition = "bStaticMesh"))
	UStaticMesh* StaticMesh = nullptr;

	UPROPERTY()
	bool bSkeletalMesh = false;

	UPROPERTY(EditAnywhere, Category = "Mesh", meta = (EditCondition = "bSkeletalMesh"))
	USkeletalMesh* SkeletalMesh = nullptr;

	UPROPERTY(EditAnywhere, Category = "Mesh")
	bool bMeshCollision = false;

public: // Transform
	UPROPERTY(EditAnywhere, Category = "Transform")
	FVector Scale = FVector::OneVector;

	UPROPERTY(EditAnywhere, Category = "Transform")
	FRotator Rotation = FRotator(0.0f, 0.0f, 0.0f);

	UPROPERTY(EditAnywhere, Category = "Transform")
	FVector Location = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, Category = "Transform")
	bool bWorldLocation = false;

public: // MID
	UPROPERTY(EditAnywhere, Category = "MID")
	bool bMID = false;

	UPROPERTY(EditAnywhere, Category = "MID")
	FLinearColor MIDColor_temp = FLinearColor(1.0, 1.0, 1.0, 1.0);
	
public: // Friendly
	UPROPERTY(EditAnywhere, Category = "Friendly")
	bool bFriendly = false;


public: // Projectile
	UPROPERTY(EditAnywhere, Category = "Projectile", meta = (RowType = "/Script/IWBTRG.ProjectileTableRow"))
	FDataTableRowHandle Projectile;

public:

#if WITH_EDITOR
	
	virtual void OnDataTableChanged(const UDataTable* InDataTable, const FName InRowName) override;
#endif

public:
	FOnActorBaseTableRowChanged OnActorBaseTableRowChanged;

};


UCLASS()
class IWBTRG_API AActorBase : public AActor, public ITriggerInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActorBase(const FObjectInitializer& ObjectInitializer);
	~AActorBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;


public:
	virtual void SetData(const FDataTableRowHandle& InDataTableRowHandle);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void UpdateData();
	virtual void Destroy();

	virtual bool IsFriendly() { return bIsFriendly; }

protected:
	UFUNCTION()
	virtual void OnMeshHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
	virtual void OnMeshBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	virtual void OnMeshEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	virtual void OnColliderBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	virtual void OnColliderEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	virtual void OnColliderHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);




protected:	// TriggerBox Overlapped
	virtual void OnActive_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	virtual void OnDeactive_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;

protected:
#if WITH_EDITOR
	virtual void PreEditChange(FProperty* PropertyAboutToChange) override;
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

	TArray<AEffectBase*> PrevEffects;
	TArray<ATriggerBoxBase*> PrevTriggerBoxes;
#endif

protected:

	AEffectBase* AddEffect(AEffectBase* InTemplate = nullptr);
	ATriggerBoxBase* AddTriggerBox(ATriggerBoxBase* InTemplate = nullptr);

	
protected:	
	UPROPERTY(VisibleAnywhere)
	USceneComponent* DefaultSceneRoot;

	UPROPERTY(VisibleAnywhere)
	UShapeComponent* Collider;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* SkeletalMeshComponent;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStatusComponent> StatusComponent;

public:
	FProjectileTableRow* ProjectileData;


protected:
	bool bHasMID = false;

	bool bIsProjectile = false;

	bool bIsFriendly = false;

protected:
	UPROPERTY(EditAnywhere)
	TArray<AEffectBase*> Effects;

	UPROPERTY(EditAnywhere)
	TArray<ATriggerBoxBase*> TriggerBoxes;



protected:
	UPROPERTY(EditAnywhere, meta = (RowType = "/Script/IWBTRG.ActorBaseTableRow"))
	FDataTableRowHandle DataTableRowHandle;

	FActorBaseTableRow* Data = nullptr;
	

protected:
	FDelegateHandle ActorBaseTableRowChangedHandle;
	

};
