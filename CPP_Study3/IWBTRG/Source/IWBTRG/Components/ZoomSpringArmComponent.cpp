// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/ZoomSpringArmComponent.h"

UZoomSpringArmComponent::UZoomSpringArmComponent()
{
	TargetArmLength = 300.f;
}

void UZoomSpringArmComponent::SetDesiredZoom(const float InValue)
{
	DesiredTargetArmLength = FMath::Clamp(InValue, MinTargetArmLength, MaxTargetArmLength);
}

void UZoomSpringArmComponent::SetMinMaxTargetArmLength(const float MinLength, const float MaxLength)
{
	if (MaxLength < MinLength)
	{
		checkf(false, TEXT("MaxTargetArmLength(%f) < MinTargetArmLength(%f)"), MaxTargetArmLength, MinTargetArmLength);
		return;
	}

	MinTargetArmLength = MinLength;
	MaxTargetArmLength = MaxLength;

	TargetArmLength = FMath::Clamp(TargetArmLength, MinTargetArmLength, MaxTargetArmLength);
	DesiredTargetArmLength = TargetArmLength;
}

void UZoomSpringArmComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	UpdateDesiredTargetArmLength(DeltaTime);
}

void UZoomSpringArmComponent::UpdateDesiredTargetArmLength(const float DeltaTime)
{
	// Desired에 Target이 도달하면 return
	if (FMath::IsNearlyEqual(TargetArmLength, DesiredTargetArmLength))
	{
		return;
	}

	const float DeltaSpeed = FMath::Clamp(DeltaTime * WheelSpeed, 0.f, 1.f);
	TargetArmLength = FMath::Lerp(TargetArmLength, DesiredTargetArmLength, DeltaSpeed);
	TargetArmLength = FMath::Clamp(TargetArmLength, MinTargetArmLength, MaxTargetArmLength);
}
