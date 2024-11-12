// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Node/BTTask_Sans_Gravity1.h"
#include "BTTask_Sans_Gravity2.generated.h"

/**
 * 
 */
UCLASS()
class IWBTRG_API UBTTask_Sans_Gravity2 : public UBTTask_Sans_Gravity1
{
	GENERATED_BODY()

public:
	UBTTask_Sans_Gravity2();

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
