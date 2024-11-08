// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Particles/ParticleSystemComponent.h"
#include "Actors/Effect/EffectBase.h"
#include "EffectBase_UnPooled.generated.h"


UCLASS()
class IWBTRG_API AEffectBase_UnPooled : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEffectBase_UnPooled();

public:
	virtual void SetData(const FDataTableRowHandle& InDataTableRowHandle);


	virtual void Play();
	virtual void RePlay();
	virtual void UpdateData();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;



	virtual void PlaySound();
	virtual void PlayParticle();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere)
	USceneComponent* DefaultSceneRoot = nullptr;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* ParticleSystemComponent = nullptr;

protected: // Sound
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Effect|Sound")
	TObjectPtr<USoundBase> Sound;

	// Volume Multiplier
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Effect|Sound")
	float VolumeMultiplier = 1.f;

protected:
	bool bIsPlay = false;


protected:
	UPROPERTY(EditAnywhere, meta = (RowType = "/Script/IWBTRG.EffectBaseTableRow"))
	FDataTableRowHandle DataTableRowHandle;

	FEffectBaseTableRow* Data = nullptr;

	FDelegateHandle EffectBaseTableRowChangedHandle;

	FTimerHandle TimerHandle;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<AActor> OwnerActor;

};
