// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/ShotNumWidget.h"
#include "Components/StatusComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Actors/Pawn/Character/CharacterBase.h"
#include "Kismet/GameplayStatics.h"


void UShotNumWidget::NativeConstruct()
{
	Super::NativeConstruct();

	ACharacterBase* ControlledChara = Cast<ACharacterBase>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	{
		ControlledChara->StatusComponent->OnDie.AddDynamic(this, &ThisClass::OnDie);

		SetVisibility(ESlateVisibility::Visible);
	}

}

void UShotNumWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	ACharacterBase* ControlledChara = Cast<ACharacterBase>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	if (ControlledChara->Data->Projectile == ControlledChara->InitialProjectileData)
	{
		ShotNum->SetText(FText::FromString(TEXT("∞")));
	}
	else
	{
		CurrentProjectileNum = ControlledChara->StatusComponent->CurrentProjectileNum;
		ShotNum->SetText(FText::AsNumber(CurrentProjectileNum));
	}
	

}


void UShotNumWidget::OnDie()
{
	SetVisibility(ESlateVisibility::Hidden);
}

void UShotNumWidget::OnHiddenUI()
{
	SetVisibility(ESlateVisibility::Hidden);
}
