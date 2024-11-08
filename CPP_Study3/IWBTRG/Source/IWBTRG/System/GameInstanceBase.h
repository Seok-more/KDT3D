// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Actors/ActorProjectile.h"
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
	virtual void Shutdown() override;

	virtual void FinishDestroy() override;

public:
	virtual void CreateSaveFile();

	virtual void SaveGame();

	virtual void LoadGame();

public:
	virtual void OnOpenLevelToLevel(UWorld* thisworld);


public: // Total Save
	UPROPERTY()
	FString LevelName;

	FOnTempSave OnTempSave;

public: // Level Change
	UPROPERTY()
	FRotator PlayerRotatorToLevel;
	
	UPROPERTY()
	FRotator ControllerRotatorToLevel;

	UPROPERTY()
	ULevel* FromLevel;

	UPROPERTY()
	FDataTableRowHandle PlayerProjectileDataToLevel;

	UPROPERTY()
	int32 PlayerProjectileNumToLevel;

public: // TempSave
	UPROPERTY()
	FTransform PlayerTransformToTempSave = FTransform::Identity;

	UPROPERTY()
	FString CurrentLevelNameToTempSave;

	UPROPERTY()
	FRotator ControllerRotatorToTempSave;

	UPROPERTY()
	FDataTableRowHandle PlayerProjectileDataToTempSave;

	UPROPERTY()
	int32 PlayerProjectileNumToTempSave;


public:
	bool bJustPortal = false;
	
};
