// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AdCharacterMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class IWBTRG_API UAdCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()

protected:
	virtual bool ResolvePenetrationImpl(const FVector& Adjustment, const FHitResult& Hit, const FQuat& NewRotation) override;

public:
	UPROPERTY(VisibleAnyWhere)
	bool bPushed = false;
	
};
