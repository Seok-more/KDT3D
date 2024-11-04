// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BTTask_Base.h"
#include "BTTask_PathTrace.generated.h"

/**
 * 
 */
UCLASS()
class IWBTRG_API UBTTask_PathTrace : public UBTTask_Base
{
	GENERATED_BODY()

public:
	UBTTask_PathTrace();

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

public:
	UFUNCTION()
	void OnResult(EPathFollowingResult::Type MovementResult);

protected:
	int32 CurrentPatrolIndex = 0;
	int32 SplinePoints = 0;

	class UBehaviorTreeComponent* BehaviorTreeComponent = nullptr;
	class UBlackboardComponent* BlackboardComponent = nullptr;
	class USplineComponent* SplineComponent = nullptr;

	UPROPERTY()
	class UAIAsyncTaskBlueprintProxy* Proxy;
};
