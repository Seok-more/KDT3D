// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimInstanceBase.generated.h"

/**
 * 
 */
UCLASS()
class IWBTRG_API UAnimInstanceBase : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	void SetAimRotation(const FRotator& NewAimRotation) { AimRotation = NewAimRotation; }
	const FRotator& GetAimRotation() { return AimRotation; }

protected:

	UPROPERTY(BlueprintReadOnly)
	double Speed = 0.0;


	UPROPERTY()
	class UPawnMovementComponent* MovementComponent;

	UPROPERTY(BlueprintReadOnly)
	bool bShouldMove = false;

	UPROPERTY(BlueprintReadOnly)
	bool bIsfalling = false;

	UPROPERTY(BlueprintReadOnly)
	bool bIsCrouching = false;


	UPROPERTY(BlueprintReadOnly)
	FRotator AimRotation;
	
};
