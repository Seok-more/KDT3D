// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameInstanceBase.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTempSave);
/**
 * 
 */
UCLASS()
class IWBTRG_API UGameInstanceBase : public UGameInstance
{
	GENERATED_BODY()

public:
	virtual void Init() override;

	virtual void FinishDestroy() override;

public:
	virtual void CreateSaveFile();

	virtual void SaveGame();

	virtual void LoadGame();


public:
	UPROPERTY()
	FTransform PlayerTransformToSave;

	UPROPERTY()
	float TestToSave;

	FOnTempSave OnTempSave;

public: // Level Change
	UPROPERTY()
	FString FromLevelName;

	UPROPERTY()
	FRotator PlayerRotatorToLevel;
	
	UPROPERTY()
	FRotator ControllerRotatorToLevel;

public: // TempSave
	UPROPERTY()
	FTransform PlayerTransformToTempSave;

	UPROPERTY()
	FString CurrentLevelNameToTempSave;

	UPROPERTY()
	FRotator ControllerRotatorToTempSave;


	
};
