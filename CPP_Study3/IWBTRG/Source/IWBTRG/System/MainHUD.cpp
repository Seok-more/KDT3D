// Fill out your copyright notice in the Description page of Project Settings.


#include "System/MainHUD.h"
#include "UI/WidgetBase.h"
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
	Super::BeginPlay();

	{
		ControlledChara = Cast<ACharacterBase>(GetOwningPawn());
		PlayerController = Cast<APlayerControllerBase>(ControlledChara->GetController());
		InitialLocation = ControlledChara->GetActorLocation();
	}

	{
		UClass* WidgetClassMain = LoadClass<UUserWidget>(nullptr,
			TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UI/UI_Misc.UI_Misc_C'"));
		check(WidgetClassMain);
		WidgetMain = CreateWidget<UUserWidget>(GetWorld(), WidgetClassMain);
		WidgetMain->AddToViewport();
	}

	{
		UClass* WidgetClassStamina = LoadClass<UWidgetBase>(nullptr,
			TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UI/UI_StaminaBar.UI_StaminaBar_C'"));
		check(WidgetClassStamina);
		WidgetStamina = CreateWidget<UWidgetBase>(GetWorld(), WidgetClassStamina);
		WidgetStamina->SetOwningPawn(GetOwningPawn());
		WidgetStamina->AddToViewport();

	}
	{
		UClass* WidgetClassShotNum = LoadClass<UWidgetBase>(nullptr,
			TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UI/UI_ShotNum.UI_ShotNum_C'"));
		check(WidgetClassShotNum);
		WidgetShotNum = CreateWidget<UWidgetBase>(GetWorld(), WidgetClassShotNum);
		WidgetShotNum->SetOwningPawn(GetOwningPawn());
		WidgetShotNum->AddToViewport();

	}


	{
		APawn* Pawn = GetOwningPawn();
		UStatusComponent* StatusComponent = Pawn->GetComponentByClass<UStatusComponent>();
		check(StatusComponent);

		StatusComponent->OnDie.AddDynamic(this, &ThisClass::OnPlayerDie);
	}
	


	//------------------------------------------------------------------------------------

	{	// R 캐릭터 위치시키기
		UGameInstanceBase* GameInstanceBase = Cast<UGameInstanceBase>(GetGameInstance());
		if (!GameInstanceBase->PlayerTransformToTempSave.Equals(FTransform::Identity))
		{
			ControlledChara->SetActorTransform(GameInstanceBase->PlayerTransformToTempSave);
			PlayerController->SetControlRotation(GameInstanceBase->ControllerRotatorToTempSave);
			ControlledChara->Data->Projectile = GameInstanceBase->PlayerProjectileDataToTempSave;
			ControlledChara->StatusComponent->CurrentProjectileNum = GameInstanceBase->PlayerProjectileNumToTempSave;
	
		}
	}
}

void AMainHUD::Tick(float DeltaSeconds)
{

}

void AMainHUD::OnPlayerDie()
{
	{	// UI 
		UWidget* CrossWidget = WidgetMain->GetWidgetFromName(TEXT("Cross"));
		if (CrossWidget)
		{
			UImage* ImageWidget = Cast<UImage>(CrossWidget);
			if (ImageWidget)
			{
				ImageWidget->SetVisibility(ESlateVisibility::Hidden);
			}
		}

		UWidget* Widget_1 = WidgetMain->GetWidgetFromName(TEXT("YouDie"));
		if (Widget_1)
		{
			UTextBlock* TextBlock = Cast<UTextBlock>(Widget_1);
			if (TextBlock)
			{
				TextBlock->SetVisibility(ESlateVisibility::Visible);
			}
		}

		UWidget* Widget_2 = WidgetMain->GetWidgetFromName(TEXT("PressR"));
		if (Widget_2)
		{
			UTextBlock* TextBlock = Cast<UTextBlock>(Widget_2);
			if (TextBlock)
			{
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
		WidgetMain->SetIsFocusable(true);

		FInputModeUIOnly InputMode;
		InputMode.SetWidgetToFocus(WidgetMain->TakeWidget());  // 포커스할 위젯 설정
		InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
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

	WidgetMain->SetIsFocusable(false);

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
