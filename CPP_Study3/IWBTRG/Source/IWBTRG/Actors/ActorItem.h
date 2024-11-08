// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/ActorBase.h"
#include "ActorItem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUsed);

USTRUCT()
struct IWBTRG_API FActorItemTableRow : public FActorBaseTableRow
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Item")
	int32 Uses;


};

UCLASS()
class IWBTRG_API AActorItem : public AActorBase
{
	GENERATED_BODY()

public:


public:
	virtual void SetData(const FDataTableRowHandle& InDataTableRowHandle) override;

	virtual void Tick(float DeltaTime) override;

	virtual void UpdateData() override;

	virtual void Destroy() override;
	
public:

	virtual void OnColliderBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	virtual void OnColliderEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


public:
	UFUNCTION()
	virtual void Used();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile")
	int32 Uses;

protected:
	bool bOverlapped = false;
	

public:
	FOnUsed OnUsed;

};
