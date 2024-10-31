// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Particles/ParticleSystemComponent.h"
#include "Actors/PooledActor.h"
#include "EffectBase.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnEffectBaseTableRowChanged)

USTRUCT()
struct IWBTRG_API FEffectBaseTableRow : public FTableRowBase
{
	GENERATED_BODY()

public:
	FEffectBaseTableRow();

public: // Class
	UPROPERTY(EditAnywhere, Category = "Class")
	TSubclassOf<AEffectBase> EffectClass;

	//UPROPERTY(EditAnywhere, Category = "Effect")
	//bool bHasCollision = false;

	UPROPERTY(EditAnywhere, Category = "Effect")
	float LifeSpan = 0.0f;

	UPROPERTY(EditAnywhere, Category = "Effect")
	bool bIsLooped = false;

	UPROPERTY(EditAnywhere, Category = "Effect", Meta = (EditCondition = "bIsLooped"))
	float LoopTime = 0.0f; // 1 count per N sec;

	


public:
	UPROPERTY(EditAnywhere, Category = "Sound")
	TObjectPtr<USoundBase> Sound;
	UPROPERTY(EditAnywhere, Category = "Sound")
	float VolumeMultiplier = 1.f;
	UPROPERTY(EditAnywhere, Category = "Sound")
	bool bIsFollowing = false;

public:
	UPROPERTY(EditAnywhere, Category = "Particle")
	TObjectPtr<UParticleSystem> Particle;

	UPROPERTY(EditAnywhere, Category = "Particle")
	FTransform ParticleTransform = FTransform::Identity;

	


public:

#if WITH_EDITOR

	virtual void OnPostDataImport(const UDataTable* InDataTable, const FName InRowName, TArray<FString>& OutCollectedImportProblems) override;
	virtual void OnDataTableChanged(const UDataTable* InDataTable, const FName InRowName) override;
#endif

public:
	FOnEffectBaseTableRowChanged OnEffectBaseTableRowChanged;

};


UCLASS()
class IWBTRG_API AEffectBase : public APooledActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEffectBase();

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
