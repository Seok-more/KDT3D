// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "Misc/ActorPool.h"
#include "Actors/Effect/EffectBase.h"
#include "Actors/Effect/EffecDecal.h"
#include "ActorPoolSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class IWBTRG_API UActorPoolSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	void SpawnEffect(const FTransform& SpawnTransform, const FDataTableRowHandle& InDataTableRowHandle);
	void SpawnHitEffectWithDecal(const FTransform& SpawnTransform, const FDataTableRowHandle& InDataTableRowHandle);

protected:
	virtual void OnWorldBeginPlay(UWorld& InWorld) override;

protected:
	FCircularActorPool<AEffectBase> EffectPool;
	FCircularActorPool<AEffecDecal> DecalEffectPool;

};
