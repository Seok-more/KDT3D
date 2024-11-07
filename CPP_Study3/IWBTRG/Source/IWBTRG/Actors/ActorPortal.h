// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/ActorBase.h"
#include "System/GameInstanceBase.h"
#include "ActorPortal.generated.h"

/**
 * 
 */

USTRUCT()
struct IWBTRG_API FActorPortalTableRow : public FActorBaseTableRow
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Level")
	TSoftObjectPtr<UWorld> ToLevel;

};


UCLASS()
class IWBTRG_API AActorPortal : public AActorBase
{
	GENERATED_BODY()

public:
	AActorPortal(const FObjectInitializer& ObjectInitializer);

public:
	virtual void SetData(const FDataTableRowHandle& InDataTableRowHandle) override;


protected:
	virtual void OnMeshBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	virtual void OnColliderBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

protected:	// TriggerBox Overlapped
	virtual void OnActive_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	virtual void OnDeactive_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;

public:
	UPROPERTY(VisibleAnywhere)
	TSoftObjectPtr<UWorld> ToLevel;

	

};
