// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/ActorBase.h"
#include "System/GameInstanceBase.h"
#include "ActorPortal.generated.h"

/**
 * 
 */
UCLASS()
class IWBTRG_API AActorPortal : public AActorBase
{
	GENERATED_BODY()


public:
	virtual void SetData(const FDataTableRowHandle& InDataTableRowHandle) override;


protected:
	virtual void OnMeshBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	virtual void OnColliderBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

protected:	// TriggerBox Overlapped
	virtual void OnActive_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	virtual void OnDeactive_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Selection")
	TSoftObjectPtr<UWorld> ToLevel;




};
