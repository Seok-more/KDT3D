// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/StatusComponent.h"
#include "Actors/Pawn/Character/CharacterBase.h"
#include "Actors/Pawn/Character/PlayerControllerBase.h"

// Sets default values for this component's properties
UStatusComponent::UStatusComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UStatusComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

	ControlledChara = Cast<ACharacterBase>(GetOwner());
	if(ControlledChara)
	{
		PlayerController = Cast<APlayerControllerBase>(ControlledChara->GetController());
	}
	
	
}


// Called every frame
void UStatusComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	OnStaminaChanged.Broadcast(CurrentStamina, MaxStamina);

	if (ControlledChara)
	{
		{	// Stamina
			if (bIsAimming && !bExhausted)
			{
				IsAimming();
			}

			else if (bExhausted)
			{
				GotExhausted();
			}

			else
			{
				IsNormal();
			}

			CurrentStamina += 0.03f;
			CurrentStamina = FMath::Clamp(CurrentStamina, 0.f, MaxStamina);

		}
	}
}

void UStatusComponent::IsNormal()
{
	GetWorld()->GetWorldSettings()->SetTimeDilation(1.1f);
	PlayerController->GetSpringArm()->SetDesiredZoom(300.f);
	ControlledChara->Movement->RotationRate.Yaw = ControlledChara->Data->RotationRate.Yaw;
	ControlledChara->Movement->MaxWalkSpeed = ControlledChara->Data->MovementMaxSpeed;
	ControlledChara->Movement->MaxWalkSpeedCrouched = 200.0f;
	bIsAimming = false;
	bExhausted = false;


}

float UStatusComponent::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	if (bDie) { return 0.f; }
	if (FMath::IsNearlyZero(Damage)) { return 0.0; }

	float NewDamage = Damage;
	// NewDamage -= Armor
	NewDamage = FMath::Clamp(NewDamage, 0.f, NewDamage);

	CurrentHP -= NewDamage;
	CurrentHP = FMath::Clamp(CurrentHP, 0.f, CurrentHP);

	LastInstigator = EventInstigator;
	OnHPChanged.Broadcast(CurrentHP, MaxHP);

	if (CurrentHP == 0.f)
	{
		bDie = true;
		OnDie.Broadcast();
	}


	return NewDamage;
}

void UStatusComponent::IsAimming()
{
	if (bExhausted) { return; }

	bIsAimming = true;

	GetWorld()->GetWorldSettings()->SetTimeDilation(0.3f);

	CurrentStamina -= 0.1f;
	CurrentStamina = FMath::Clamp(CurrentStamina, 0.f, CurrentStamina);
	OnStaminaChanged.Broadcast(CurrentStamina, MaxStamina);

	if (CurrentStamina == 0.f)
	{
		bExhausted = true;
	}
}

void UStatusComponent::GotExhausted()
{
	{
		GetWorld()->GetWorldSettings()->SetTimeDilation(1.0f);
		PlayerController->GetSpringArm()->SetDesiredZoom(300.f);

		ControlledChara->Movement->RotationRate.Yaw = ControlledChara->Data->RotationRate.Yaw / 2.f;
		ControlledChara->Movement->MaxWalkSpeed = ControlledChara->Data->MovementMaxSpeed / 5.f;
		ControlledChara->Movement->MaxWalkSpeedCrouched = 40.0f;
	}

	if (CurrentStamina == MaxStamina)
	{
		bExhausted = false;
	}
}

void UStatusComponent::GotPoisoned()
{

}


