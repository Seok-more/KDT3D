// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Node/BTTask_Base.h"
#include "Actors/ActorBase.h"
#include "Actors/Pawn/PawnBossSans.h"
#include "BTTask_Sans_Bone1.generated.h"

/**
 * 
 */
UCLASS()
class IWBTRG_API UBTTask_Sans_Bone1 : public UBTTask_Base
{
	GENERATED_BODY()

public:
	UBTTask_Sans_Bone1();

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	
protected:


public:
	UFUNCTION()
	void OnResult(EPathFollowingResult::Type MovementResult);

	UFUNCTION()
	void Fininsh();

protected:
	void BoneMove();

protected:
	float MoveSpeed = 0.8f;

	FVector OriginLocation;

public:
	TArray<AActorEnemy*> BoneArray;
	TArray<AActorBase*> WarningArray;

protected:
	FTimerHandle MoveTimerHandle;
	UBehaviorTreeComponent* BehaviorTreeComponent = nullptr;
	UBlackboardComponent* BlackboardComponent = nullptr;
	
};
