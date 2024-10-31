// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "MainGameState.generated.h"

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE(FOnGameClear, AMainGameState, OnGameClear);
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE(FOnGameOver, AMainGameState, OnGameOver);


UCLASS()
class IWBTRG_API AMainGameState : public AGameStateBase
{
	GENERATED_BODY()


public:


protected:
	UFUNCTION()
	void OnLevelTransition();


public:
	UPROPERTY(BlueprintAssignable)
	FOnGameClear OnGameClear;

	UPROPERTY(BlueprintAssignable)
	FOnGameClear OnGameOver;

};
