// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/WidgetBase.h"
#include "Components/TextBlock.h"
#include "ShotNumWidget.generated.h"

/**
 * 
 */
UCLASS()
class IWBTRG_API UShotNumWidget : public UWidgetBase
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);

	UFUNCTION()
	void OnDie();

	UFUNCTION()
	void OnHiddenUI();

protected:
	UPROPERTY(VisibleAnywhere, meta = (BindWidget))
	UTextBlock* ShotNum;

	UPROPERTY(VisibleAnywhere)
	int32 CurrentProjectileNum;
	
};
