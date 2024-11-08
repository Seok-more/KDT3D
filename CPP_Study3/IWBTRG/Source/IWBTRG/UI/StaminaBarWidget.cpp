// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/StaminaBarWidget.h"
#include "Components/StatusComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Actors/Pawn/Character/CharacterBase.h"
#include "Kismet/GameplayStatics.h"


void UStaminaBarWidget::NativeConstruct()
{
	Super::NativeConstruct();

	ACharacterBase* ControlledChara = Cast<ACharacterBase>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	ControlledChara->StatusComponent->OnStaminaChanged.AddDynamic(this, &ThisClass::OnStaminaChanged);
	ControlledChara->StatusComponent->OnDie.AddDynamic(this, &ThisClass::OnDie);

	SetVisibility(ESlateVisibility::Visible);
}

void UStaminaBarWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	const float Percent = StaminaBar->GetPercent();
	const float EffectPercent = StaminaBarEffect->GetPercent();
	if (!FMath::IsNearlyEqual(EffectPercent, Percent))
	{
		const float NewEffectPercent = FMath::Lerp(EffectPercent, Percent, InDeltaTime * 4.f);
		StaminaBarEffect->SetPercent(NewEffectPercent);
	}
}

void UStaminaBarWidget::OnStaminaChanged(float CurrentStamina, float MaxStamina)
{
	if (FMath::IsNearlyZero(MaxStamina))
	{
		ensureMsgf(false, TEXT("MaxStamina is Zero"));
		return;
	}

	const float Percent = CurrentStamina / MaxStamina;
	StaminaBar->SetPercent(Percent);
}

void UStaminaBarWidget::OnDie()
{
	SetVisibility(ESlateVisibility::Hidden);
}

void UStaminaBarWidget::OnHiddenUI()
{
	SetVisibility(ESlateVisibility::Hidden);
}
