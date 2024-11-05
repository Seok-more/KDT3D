// Fill out your copyright notice in the Description page of Project Settings.


#include "System/MainHUD.h"
#include "Components/StatusComponent.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Actors/Pawn/Character/PlayerControllerBase.h"
#include "Actors/Pawn/Character/CharacterBase.h"
#include "Kismet/GameplayStatics.h"
#include "System/GameInstanceBase.h"

AMainHUD::AMainHUD()
{
}

void AMainHUD::BeginPlay()
{
	ControlledChara = Cast<ACharacterBase>(GetOwningPawn());
	PlayerController = Cast<APlayerControllerBase>(ControlledChara->GetController());


	UClass* WidgetClass = LoadClass<UUserWidget>(nullptr,
		TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UI/UI_Misc.UI_Misc_C'"));
	check(WidgetClass);
	Widget = CreateWidget<UUserWidget>(GetWorld(), WidgetClass);
	Widget->AddToViewport();

	{
		APawn* Pawn = GetOwningPawn();
		UStatusComponent* StatusComponent = Pawn->GetComponentByClass<UStatusComponent>();
		check(StatusComponent);

		StatusComponent->OnDie.AddDynamic(this, &ThisClass::OnPlayerDie);
	}

	{
		UGameInstanceBase* GameInstanceBase = Cast<UGameInstanceBase>(GetGameInstance());
		if (!GameInstanceBase->PlayerTransformToTempSave.Equals(FTransform::Identity))
		{
			ControlledChara->SetActorTransform(GameInstanceBase->PlayerTransformToTempSave);
			PlayerController->SetControlRotation(GameInstanceBase->ControllerRotatorToTempSave);
		}

		

	}
}

void AMainHUD::Tick(float DeltaSeconds)
{

}

void AMainHUD::OnPlayerDie()
{
	{	// UI 
		UWidget* CrossWidget = Widget->GetWidgetFromName(TEXT("Cross"));

		if (CrossWidget)
		{
			UImage* ImageWidget = Cast<UImage>(CrossWidget);
			if (ImageWidget)
			{
				// Visibility 설정
				ImageWidget->SetVisibility(ESlateVisibility::Hidden);
			}
		}

		UWidget* Widget_1 = Widget->GetWidgetFromName(TEXT("YouDie"));

		if (Widget_1)
		{
			UTextBlock* TextBlock = Cast<UTextBlock>(Widget_1);
			if (TextBlock)
			{
				// Visibility 설정
				TextBlock->SetVisibility(ESlateVisibility::Visible);
			}
		}

		UWidget* Widget_2 = Widget->GetWidgetFromName(TEXT("PressR"));

		if (Widget_2)
		{
			UTextBlock* TextBlock = Cast<UTextBlock>(Widget_2);
			if (TextBlock)
			{
				// Visibility 설정
				TextBlock->SetVisibility(ESlateVisibility::Visible);
			}
		}
	}

	{
		UISetting();
	}
}

void AMainHUD::UISetting()
{
	

	{	// UI 기능
		Widget->SetIsFocusable(true);

		FInputModeUIOnly InputMode;
		InputMode.SetWidgetToFocus(Widget->TakeWidget());  // 포커스할 위젯 설정
		InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);  // 마우스 잠금 설정
		PlayerController->SetInputMode(InputMode);

		// 마우스 커서 표시
		PlayerController->bShowMouseCursor = true;

	}
}

void AMainHUD::OpenCurrentLevelFromUI()
{
	UGameInstanceBase* GameInstanceBase = Cast<UGameInstanceBase>(GetGameInstance());

	if (GameInstanceBase && !GameInstanceBase->CurrentLevelNameToTempSave.IsEmpty())
	{
		UGameplayStatics::OpenLevel(GetWorld(), FName(GameInstanceBase->CurrentLevelNameToTempSave));
	}
	else
	{
		FString CurrentLevelName = UGameplayStatics::GetCurrentLevelName(GetWorld());
		UGameplayStatics::OpenLevel(GetWorld(), FName(CurrentLevelName));
	}

	Widget->SetIsFocusable(false);

	FInputModeGameOnly InputMode;  // 게임 입력 전용 모드
	PlayerController->SetInputMode(InputMode);

	// 마우스 커서 숨기기
	PlayerController->bShowMouseCursor = false;
	


}

void AMainHUD::OpenCurrentLevelFromReset()
{
	UGameInstanceBase* GameInstanceBase = Cast<UGameInstanceBase>(GetGameInstance());

	if (GameInstanceBase && !GameInstanceBase->CurrentLevelNameToTempSave.IsEmpty())
	{
		UGameplayStatics::OpenLevel(GetWorld(), FName(GameInstanceBase->CurrentLevelNameToTempSave));
	}
	else
	{
		FString CurrentLevelName = UGameplayStatics::GetCurrentLevelName(GetWorld());
		UGameplayStatics::OpenLevel(GetWorld(), FName(CurrentLevelName));
	}

}
