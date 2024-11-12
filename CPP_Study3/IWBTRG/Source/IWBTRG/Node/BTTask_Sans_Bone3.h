// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Node/BTTask_Sans_Bone2.h"
#include "BTTask_Sans_Bone3.generated.h"

/**
 * 
 */
UCLASS()
class IWBTRG_API UBTTask_Sans_Bone3 : public UBTTask_Sans_Bone2
{
	GENERATED_BODY()

public:
	UBTTask_Sans_Bone3();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

public:
	virtual void Fininsh() override;

protected:
	virtual void BoneMove(float DeltaSeconds) override;

protected:
	float Time = 0.0f;
	
};
