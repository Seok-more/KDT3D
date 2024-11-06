// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/ActorBase.h"
#include "Components/SplineComponent.h"
#include "Curves/CurveFloat.h"
#include "Components/TimelineComponent.h"
#include "ActorMovable.generated.h"


UCLASS()
class IWBTRG_API AActorMovable : public AActorBase
{
	GENERATED_BODY()

public:
	AActorMovable(const FObjectInitializer& ObjectInitializer);
	
public:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION()
	void MoveAlongSplineComponent(float Alpha);

public:
	UPROPERTY(EditAnywhere, Category = "Movement" )
	USplineComponent* SplineComponent;

	UPROPERTY(EditAnywhere, Category = "Movement")
	UTimelineComponent* MovementTimeline;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	UCurveFloat* MovementCurve;

	UPROPERTY(EditAnywhere, Category = "Movement")
	bool bAutomatic = true;

	UPROPERTY(EditAnywhere, Category = "Movement")
	bool bLoop = true;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float Speed = 1.0f;

protected:
	bool IsPaused = false;


protected:	// TriggerBox Overlapped
	virtual void OnActive_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	virtual void OnDeactive_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;

	
};
