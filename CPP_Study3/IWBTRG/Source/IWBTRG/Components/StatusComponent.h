// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatusComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHPChanged, float, CurrentHP, float, MaxHP);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStaminaChanged, float, CurrentStamina, float, MaxStamina);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShotChanged, int32, CurrentProjectileNum);
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
	bool bIsPoisoned() const { return bPoisoned; }

public:
	bool SetIsAimming(bool Is) { return bIsAimming = Is; }
	float SetMaxHP(float Max) { return MaxHP = Max; }
	float SetCurrentHP() { return CurrentHP = MaxHP; }

public:
	float GetHP() const { return CurrentHP; }
	float GetStamina() const{ return CurrentStamina; }
	


	AController* GetLastInstigator() const { return LastInstigator; }
 

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	virtual void IsNormal();

	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
	
	virtual void IsAimming();

	virtual void GotExhausted();

	virtual void GotPoisoned();

protected:
	UPROPERTY(VisibleAnywhere ,BlueprintReadWrite)
	float MaxHP = 4.f;

	UPROPERTY(BlueprintReadWrite)
	float CurrentHP = MaxHP;

	UPROPERTY(BlueprintReadWrite)
	float MaxStamina = 5.f;

	UPROPERTY(BlueprintReadWrite)
	float CurrentStamina = MaxStamina;

protected:
	UPROPERTY(BlueprintReadWrite)
	bool bIsAimming;

	UPROPERTY(BlueprintReadWrite)
	bool bCanMove = true;

	UPROPERTY(BlueprintReadWrite)
	bool bDie = false;

	UPROPERTY(BlueprintReadWrite)
	bool bExhausted = false;

	UPROPERTY(BlueprintReadWrite)
	bool bPoisoned = false;

public:
	UPROPERTY(BlueprintReadWrite)
	int32 CurrentProjectileNum;

	UPROPERTY()
	FTransform CurrentTransform;

public:
	AController* LastInstigator = nullptr;

	FOnHPChanged OnHPChanged;
	FOnDie OnDie;
	FOnStaminaChanged OnStaminaChanged;
	FOnShotChanged OnShotChanged;

private:
	class ACharacterBase* ControlledChara;
	class APlayerControllerBase* PlayerController;
};
