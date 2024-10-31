// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WidgetBase.h"
#include "Components/ProgressBar.h"
#include "HPBarWidget.generated.h"

/**
 * 
 */
UCLASS()
class IWBTRG_API UHPBarWidget : public UWidgetBase
{
	GENERATED_BODY()
	
protected:
	virtual void NativeOnInitialized();
	virtual void NativePreConstruct();
	virtual void NativeConstruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);

protected:
	UFUNCTION()
	void OnHPChanged(float CurrentHP, float MaxHP);

	UFUNCTION()
	void OnDie();

	UFUNCTION()
	void OnHiddenUI();


protected:
	UPROPERTY(VisibleAnywhere, meta = (BindWidget))
	UProgressBar* HPBar;

	UPROPERTY(VisibleAnywhere, meta = (BindWidget))
	UProgressBar* HPBarEffect;

};
