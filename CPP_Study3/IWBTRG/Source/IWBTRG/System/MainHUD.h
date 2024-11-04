// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Blueprint/UserWidget.h"
#include "MainHUD.generated.h"

/**
 * 
 */
UCLASS()
class IWBTRG_API AMainHUD : public AHUD
{
	GENERATED_BODY()

public:
	AMainHUD();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

public:
	UFUNCTION()
	virtual void OnPlayerDie();

	UFUNCTION()
	virtual void UISetting();

	UFUNCTION(BlueprintCallable)
	virtual void OpenCurrentLevel();

public:
	class UUserWidget* Widget = nullptr;
	class ACharacterBase* ControlledChara;
	class APlayerControllerBase* PlayerController;

};
