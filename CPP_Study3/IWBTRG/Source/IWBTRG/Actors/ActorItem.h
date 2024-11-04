// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/ActorBase.h"
#include "ActorItem.generated.h"

/**
 * 
 */


UCLASS()
class IWBTRG_API AActorItem : public AActorBase
{
	GENERATED_BODY()

public:


public:
	virtual void Tick(float DeltaTime) override;

	virtual void UpdateData() override;

	virtual void Destroy() override;
	
public:

	virtual void OnColliderBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	virtual void OnColliderEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

protected:
	bool bOverlapped = false;

public:


};
