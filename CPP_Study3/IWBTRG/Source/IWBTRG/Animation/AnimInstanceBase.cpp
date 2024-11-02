// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/AnimInstanceBase.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UAnimInstanceBase::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	APawn* Pawn = TryGetPawnOwner();
	if (GIsEditor && FApp::IsGame() && !Pawn)
	{
		check(false);
		return;
	}
	else if (!Pawn) { return; }

	MovementComponent = Pawn->GetMovementComponent();
	check(MovementComponent);
}

void UAnimInstanceBase::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (!MovementComponent) { return; }

	Speed = UKismetMathLibrary::VSizeXY(MovementComponent->Velocity);

	bShouldMove = !FMath::IsNearlyZero(Speed);
	bIsfalling = MovementComponent->IsFalling();
	bIsCrouching = MovementComponent->IsCrouching();
}
