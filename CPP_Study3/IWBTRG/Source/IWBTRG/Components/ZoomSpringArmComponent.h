// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SpringArmComponent.h"
#include "ZoomSpringArmComponent.generated.h"

/**
 * 
 */
UCLASS()
class IWBTRG_API UZoomSpringArmComponent : public USpringArmComponent
{
	GENERATED_BODY()

public:
	UZoomSpringArmComponent();

public:
	UFUNCTION(BlueprintCallable)
	void SetDesiredZoom(const float InValue);

	UFUNCTION(BlueprintCallable)
	void SetMinMaxTargetArmLength(const float MinLength, const float MaxLength);

protected:
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction);


public:
	float GetMinTargetArmLength() const { return MinTargetArmLength; }
	float GetMaxTargetArmLength() const { return MaxTargetArmLength; }

protected:
	void UpdateDesiredTargetArmLength(const float DeltaTime);

public:
	float DesiredTargetArmLength = TargetArmLength;
	
	float MinTargetArmLength = 100.f;
	float MaxTargetArmLength = 800.f;

	float WheelSpeed = 5.f;
};
