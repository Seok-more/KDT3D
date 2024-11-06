// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/AdCharacterMovementComponent.h"

bool UAdCharacterMovementComponent::ResolvePenetrationImpl(const FVector& Adjustment, const FHitResult& Hit, const FQuat& NewRotation)
{
    Super::ResolvePenetrationImpl(Adjustment, Hit, NewRotation);

    return bJustTeleported;
}
