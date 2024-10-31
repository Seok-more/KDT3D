// Fill out your copyright notice in the Description page of Project Settings.


#include "System/MainHUD.h"

AMainHUD::AMainHUD()
{
}

void AMainHUD::BeginPlay()
{
	UClass* WidgetClass = LoadClass<UUserWidget>(nullptr,
		TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/Misc/UI_Misc.UI_Misc_C'"));
	check(WidgetClass);
	Widget = CreateWidget<UUserWidget>(GetWorld(), WidgetClass);
	Widget->AddToViewport();
}

void AMainHUD::Tick(float DeltaSeconds)
{
}
