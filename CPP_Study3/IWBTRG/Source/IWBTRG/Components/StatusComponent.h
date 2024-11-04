// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatusComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHPChanged, float, CurrentHP, float, MaxHP);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDie);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class IWBTRG_API UStatusComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStatusComponent();

public:
	bool CanMove() const { return bCanMove; }
	bool IsAimming() const { return bIsAimming; }
	bool IsDie() const { return bDie; }

public:
	bool SetIsAimming(bool Is) { return bIsAimming = Is; }

public:
	float GetHP() const { return CurrentHP; }

	AController* GetLastInstigator() const { return LastInstigator; }
 

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);

protected:
	UPROPERTY(BlueprintReadWrite)
	float MaxHP = 4.f;

	UPROPERTY(BlueprintReadWrite)
	float CurrentHP = MaxHP;

	UPROPERTY(BlueprintReadWrite)
	bool bIsAimming;

	UPROPERTY(BlueprintReadWrite)
	bool bCanMove = true;

	UPROPERTY(BlueprintReadWrite)
	bool bDie = false;

public:
	AController* LastInstigator = nullptr;

	FOnHPChanged OnHPChanged;
	FOnDie OnDie;
		
};
