// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/ActorMovable.h"



AActorMovable::AActorMovable(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	{
		SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
		SplineComponent->SetupAttachment(RootComponent);
	}
	{
		MovementTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("MovementTimeline"));
	}
	{

	}
}

void AActorMovable::BeginPlay()
{
	Super::BeginPlay();

	check(MovementCurve);

	if (bAutomatic)
	{
		if (MovementCurve)
		{
			FOnTimelineFloat ProgressFunction;
			ProgressFunction.BindUFunction(this, FName("MoveAlongSplineComponent"));
			MovementTimeline->AddInterpFloat(MovementCurve, ProgressFunction);
			MovementTimeline->SetLooping(bLoop);
			MovementTimeline->SetPlayRate(Speed);
			MovementTimeline->PlayFromStart();
		}
	}
	else
	{
		return;
	}
}

void AActorMovable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (MovementTimeline)
	{
		MovementTimeline->TickComponent(DeltaTime, ELevelTick::LEVELTICK_TimeOnly, nullptr);
	}
}

void AActorMovable::MoveAlongSplineComponent(float Alpha)
{
	if (SplineComponent)
	{
		FVector NewLocation = SplineComponent->GetLocationAtTime(Alpha, ESplineCoordinateSpace::World, true);
		SetActorLocation(NewLocation);
	}
}

void AActorMovable::OnActive_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!bAutomatic)
	{
		if (MovementCurve && !IsPaused)
		{
			FOnTimelineFloat ProgressFunction;
			ProgressFunction.BindUFunction(this, FName("MoveAlongSplineComponent"));
			MovementTimeline->AddInterpFloat(MovementCurve, ProgressFunction);
			MovementTimeline->SetLooping(bLoop);
			MovementTimeline->SetPlayRate(Speed);
			MovementTimeline->PlayFromStart();
		}
		else if (MovementCurve && IsPaused)
		{
			MovementTimeline->Play();
			IsPaused = false;
		}
	}
}

void AActorMovable::OnDeactive_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (!bAutomatic)
	{
		if (MovementCurve && MovementTimeline->IsPlaying())
		{
			float CurrentPosition = MovementTimeline->GetPlaybackPosition();
			MovementTimeline->Stop();
			IsPaused = true;
		}
	}
}
