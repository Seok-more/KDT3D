// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/ActorBase.h"
#include "ActorSave.generated.h"


/**
 * 
 */


UCLASS()
class IWBTRG_API AActorSave : public AActorBase
{
	GENERATED_BODY()

public:
	AActorSave(const FObjectInitializer& ObjectInitializer);


protected:
	virtual void OnMeshBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

	virtual void OnColliderBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


public:
	UPROPERTY()
	FTransform PlayerTransfrom;
	


};
