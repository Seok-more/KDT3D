// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetBase.h"

void UWidgetBase::NativeOnInitialized()
{
	Super::NativeOnInitialized();
}

void UWidgetBase::NativePreConstruct()
{
	Super::NativePreConstruct();
}

void UWidgetBase::NativeConstruct()
{
	Super::NativeConstruct();
	ensure(OwningPawn);
}
