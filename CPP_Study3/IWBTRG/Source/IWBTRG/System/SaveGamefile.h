// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Components/StatusComponent.h"
#include "SaveGamefile.generated.h"


/**
 * 
 */

UCLASS()
class IWBTRG_API USaveGamefile : public USaveGame
{
	GENERATED_BODY()

public:
	USaveGamefile();

public:
	UPROPERTY()
	UStatusComponent* StatusComponent;

	UPROPERTY()
	FString LevelNameToSave;

};
