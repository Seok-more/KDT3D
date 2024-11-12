// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/GamePlayStatics.h"
#include "System/GameInstanceBase.h"
#include "Node/BTTask_Base.h"
#include "BTTask_Sans_Moving1.generated.h"

/**
 * 
 */
UCLASS()
class IWBTRG_API UBTTask_Sans_Moving1 : public UBTTask_Base
{
	GENERATED_BODY()

public:
	UBTTask_Sans_Moving1();

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	
public:
	UFUNCTION()
	virtual void Fininsh();

protected:
	virtual void SansMove(float DeltaSeconds);

protected:
	float MoveSpeed = 10.f;
	FVector OriginLocation;
	class APawnBossSans* OwningSans;
	float Time = 0.0f;
	bool bMove = false;

protected:
	UBehaviorTreeComponent* BehaviorTreeComponent = nullptr;
	UBlackboardComponent* BlackboardComponent = nullptr;

	UGameInstanceBase* GameInstanceBase;
};
