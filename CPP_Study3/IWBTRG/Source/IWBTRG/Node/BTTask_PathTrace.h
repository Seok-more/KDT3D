// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_PathTrace.generated.h"

/**
 * 
 */
UCLASS()
class IWBTRG_API UBTTask_PathTrace : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTask_PathTrace();

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
