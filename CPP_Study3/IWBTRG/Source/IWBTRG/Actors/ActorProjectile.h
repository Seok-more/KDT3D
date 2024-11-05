// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StatusComponent.h"
#include "Actors/Effect/EffectBase.h"
#include "Actors/Effect/EffecDecal.h"
#include "ActorProjectile.generated.h"


DECLARE_MULTICAST_DELEGATE(FOnProjectileTableRowChanged)

USTRUCT()
struct IWBTRG_API FProjectileTableRow : public FTableRowBase
{
	GENERATED_BODY()

public:
	FProjectileTableRow();

public:
	UPROPERTY(EditAnywhere, Category = "Class")
	TSubclassOf<AActorProjectile> ActorClass;

	UPROPERTY(EditAnywhere, Category = "Mesh", meta = (EditCondition = "bStaticMesh"))
	UStaticMesh* StaticMesh = nullptr;

	UPROPERTY(EditAnywhere, Category = "Projectile")
	float InitialSpeed = 5000.0f;

	UPROPERTY(EditAnywhere, Category = "Projectile")
	float MaxSpeed = 5000.0f;

	UPROPERTY(EditAnywhere, Category = "Projectile")
	float ProjectileGravityScale = 0.0f;

	UPROPERTY(EditAnywhere, Category = "Projectile")
	float InitialLifeSpan = 5.f;

	UPROPERTY(EditAnywhere, Category = "Projectile")
	float Damage = 0.f;

public: // Transform
	UPROPERTY(EditAnywhere, Category = "Transform")
	FVector Scale = FVector::OneVector;

public:

	UPROPERTY(EditAnywhere, Category = "Effect", meta = (RowType = "/Script/IWBTRG.EffectBaseTableRow"))
	FDataTableRowHandle WithEffectTableRowHandle;

	UPROPERTY(EditAnywhere, Category = "Effect", meta = (RowType = "/Script/IWBTRG.EffectBaseTableRow"))
	FDataTableRowHandle HitEffectTableRowHandle;

public: // MID
	UPROPERTY(EditAnywhere, Category = "MID")
	bool bMID = false;

	UPROPERTY(EditAnywhere, Category = "MID")
	FLinearColor MIDColor_temp = FLinearColor(1.0, 1.0, 1.0, 1.0);

public: // Friendly
	UPROPERTY(EditAnywhere, Category = "Friendly")
	bool bFriendly = false;

	UPROPERTY(EditAnywhere, Category = "Friendly")
	bool bOnlyPawn = false;

public:

#if WITH_EDITOR

	virtual void OnDataTableChanged(const UDataTable* InDataTable, const FName InRowName) override;
#endif


public:
	FOnProjectileTableRowChanged OnProjectileTableRowChanged;


};

UCLASS()
class IWBTRG_API AActorProjectile : public AActor
{
	GENERATED_BODY()
	
public:
	AActorProjectile();

protected:
	virtual void OnConstruction(const FTransform& Transform) override;

public:
	virtual void SetData(const FDataTableRowHandle& InDataTableRowHandle);


public:
	virtual void Tick(float DeltaTime) override;
	virtual void UpdateData();
	virtual void Destroy();

	virtual bool IsFriendly() { return bIsFriendly; }
	virtual bool SetIsFriendly(bool Friendly) { return bIsFriendly = Friendly; }

public:
	UFUNCTION()
	virtual void OnMeshBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

protected:
	AEffectBase* AddEffect(AEffectBase* InTemplate = nullptr);

public:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStatusComponent> StatusComponent;

	UPROPERTY(VisibleAnywhere)
	float Damage;

	UPROPERTY(VisibleAnywhere)
	float FinalDamage;
	
public:
	UPROPERTY(VisibleAnywhere)
	AEffectBase* WithEffect;

protected:
	bool bIsFriendly = false;

public:
	UPROPERTY(VisibleAnywhere)
	UProjectileMovementComponent* ProjectileMovementComponent;


protected:
	UPROPERTY(EditAnywhere, meta = (RowType = "/Script/IWBTRG.FProjectileTableRow"))
	FDataTableRowHandle DataTableRowHandle;

	FProjectileTableRow* Data = nullptr;


protected:
	FDelegateHandle ProjectileTableRowChangedHandle;



};
