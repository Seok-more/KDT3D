// Fill out your copyright notice in the Description page of Project Settings.


#include "Subsystem/ActorPoolSubsystem.h"

void UActorPoolSubsystem::SpawnEffect(const FTransform& SpawnTransform, const FDataTableRowHandle& InDataTableRowHandle)
{
	AEffectBase* NewEffect = EffectPool.GetActorFromPool();
	NewEffect->SetData(InDataTableRowHandle);
	NewEffect->SetActorTransform(SpawnTransform);
	NewEffect->Play();
}

void UActorPoolSubsystem::SpawnHitEffectWithDecal(const FTransform& SpawnTransform, const FDataTableRowHandle& InDataTableRowHandle)
{
	AEffecDecal* NewEffect = DecalEffectPool.GetActorFromPool();
	NewEffect->SetData(InDataTableRowHandle);
	NewEffect->SetActorTransform(SpawnTransform);
	NewEffect->Play();

}

void UActorPoolSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	EffectPool.InitializePool(&InWorld, 10);
	DecalEffectPool.InitializePool(&InWorld, 20);
}

