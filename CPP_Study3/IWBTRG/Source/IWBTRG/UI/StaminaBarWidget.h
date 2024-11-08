// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/WidgetBase.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "StaminaBarWidget.generated.h"

/**
 * 
 */
UCLASS()
class IWBTRG_API UStaminaBarWidget : public UWidgetBase
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);

	UFUNCTION()
	void OnStaminaChanged(float CurrentStamina, float MaxStamina);

	UFUNCTION()
	void OnDie();

	UFUNCTION()
	void OnHiddenUI();

protected:
	UPROPERTY(VisibleAnywhere, meta = (BindWidget))
	UProgressBar* StaminaBar;

	UPROPERTY(VisibleAnywhere, meta = (BindWidget))
	UProgressBar* StaminaBarEffect;


};
