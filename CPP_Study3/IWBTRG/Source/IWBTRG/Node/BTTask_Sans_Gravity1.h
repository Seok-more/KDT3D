// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Node/BTTask_Base.h"
#include "System/GameInstanceBase.h"
#include "BTTask_Sans_Gravity1.generated.h"

/**
 * 
 */
UCLASS()
class IWBTRG_API UBTTask_Sans_Gravity1 : public UBTTask_Base
{
	GENERATED_BODY()

public:
	UBTTask_Sans_Gravity1();

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

public:
	UFUNCTION()
	virtual void Fininsh();

protected:
	UBehaviorTreeComponent* BehaviorTreeComponent = nullptr;
	UBlackboardComponent* BlackboardComponent = nullptr;
	UGameInstanceBase* GameInstanceBase;
};
