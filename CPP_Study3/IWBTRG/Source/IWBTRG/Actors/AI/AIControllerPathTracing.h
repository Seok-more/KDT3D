// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Components/SplineComponent.h"
#include "AIControllerPathTracing.generated.h"

/**
 * 
 */
UCLASS()
class IWBTRG_API AAIControllerPathTracing : public AAIController
{
	GENERATED_BODY()

public:
	void BeginPlay() override;
	void SetPatrolPath(TObjectPtr<USplineComponent> NewPatrolPath) { PatrolPath = NewPatrolPath; }

protected:
	UPROPERTY(EditAnywhere)
	TObjectPtr<USplineComponent> PatrolPath;
	
};
