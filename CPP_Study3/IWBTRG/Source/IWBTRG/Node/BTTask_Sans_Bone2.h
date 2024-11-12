// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Node/BTTask_Base.h"
#include "Actors/ActorBase.h"
#include "Actors/Pawn/PawnBossSans.h"
#include "BTTask_Sans_Bone2.generated.h"

/**
 * 
 */
UCLASS()
class IWBTRG_API UBTTask_Sans_Bone2 : public UBTTask_Base
{
	GENERATED_BODY()


public:
	UBTTask_Sans_Bone2();

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

public:
	UFUNCTION()
	virtual void Fininsh();

protected:
	virtual void BoneMove(float DeltaSeconds);

protected:
	float MoveSpeed = 50.f;
	FVector OriginLocation;

public:
	TArray<AActorEnemy*> BoneArray;
	TArray<AActorBase*> WarningArray;

protected:
	UBehaviorTreeComponent* BehaviorTreeComponent = nullptr;
	UBlackboardComponent* BlackboardComponent = nullptr;

	UGameInstanceBase* GameInstanceBase;
	
};
