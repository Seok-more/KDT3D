// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Components/StatusComponent.h"
#include "SaveGameTemp.generated.h"


/**
 * 
 */

UCLASS()
class IWBTRG_API USaveGameTemp : public USaveGame
{
	GENERATED_BODY()

public:
	USaveGameTemp();

public:
	UPROPERTY()
	UStatusComponent* StatusComponent;

	UPROPERTY()
	FTransform PlayerTransform;

	UPROPERTY()
	float Test;

	//UPROPERTY()
	// Current Level

};
