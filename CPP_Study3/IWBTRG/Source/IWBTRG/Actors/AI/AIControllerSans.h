// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Components/StatusComponent.h"
#include "AIController.h"
#include "AIControllerSans.generated.h"

/**
 * 
 */
UCLASS()
class IWBTRG_API AAIControllerSans : public AAIController
{
	GENERATED_BODY()
	
public:
	void BeginPlay() override;
	virtual void OnPossess(APawn* InPawn) override;
	virtual void Tick(float DeltaTime) override;

public:
	void FindPlayerByPerception();

};
