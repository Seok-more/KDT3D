// Fill out your copyright notice in the Description page of Project Settings.


#include "System/GameInstanceBase.h"
#include "Kismet/GamePlayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Actors/Pawn/Character/CharacterBase.h"
#include "Actors/Pawn/Character/PlayerControllerBase.h"
#include "System/MainHUD.h"
#include "SaveGamefile.h"


void UGameInstanceBase::Init()
{
	Super::Init();

	LoadGame();
	{
		UE_LOG(LogTemp, Warning, TEXT("JSM Save LevelName: %s"), *LevelName);
	}

	{
		GetWorld()->GetWorldSettings()->SetTimeDilation(1.1f);
	}


	{
		// 레벨이 전환되고 모든 세팅이 완료된 후
		FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &UGameInstanceBase::OnOpenLevelToLevel);
	}

}

void UGameInstanceBase::Shutdown()
{	// 게임이 꺼지기 직전임
	SaveGame();
	Super::Shutdown();
	
}

void UGameInstanceBase::FinishDestroy()
{	// 게임이 꺼진 직후임
	Super::FinishDestroy();
	{
		FCoreUObjectDelegates::PostLoadMapWithWorld.RemoveAll(this);
	}

}

void UGameInstanceBase::CreateSaveFile()
{
	// Create SaveGame Object and Save to the Default Slot
	USaveGamefile* DataToSave = Cast<USaveGamefile>(UGameplayStatics::CreateSaveGameObject(USaveGamefile::StaticClass()));
	UGameplayStatics::SaveGameToSlot(DataToSave, "Slot1", 0);
}

void UGameInstanceBase::SaveGame()
{
	// Initialize Data to Save
	USaveGamefile* DataToSave = Cast<USaveGamefile>(UGameplayStatics::LoadGameFromSlot("Slot1", 0));

	// If there is a valid SaveGame Object to use for saving
	if (DataToSave)
	{
		LevelName = UGameplayStatics::GetCurrentLevelName(GetWorld());
		DataToSave->LevelNameToSave = LevelName;
		UGameplayStatics::SaveGameToSlot(DataToSave, "Slot1", 0);

		// Should be PlayerStatus in here

	}
	else if (!UGameplayStatics::DoesSaveGameExist("Slot1", 0))
	{
		// Create a Default Save File
		CreateSaveFile();
	}

	UE_LOG(LogTemp, Error, TEXT("JSM SaveGame"));
}


void UGameInstanceBase::LoadGame()
{
	// Cast Data to Load
	USaveGamefile* DataToLoad = Cast<USaveGamefile>(UGameplayStatics::LoadGameFromSlot("Slot1", 0));

	if (DataToLoad)
	{
		LevelName = DataToLoad->LevelNameToSave;
		UGameplayStatics::OpenLevel(GetWorld(), FName(LevelName));
	}
	else if (!UGameplayStatics::DoesSaveGameExist("Slot1", 0))
	{
		// Create a Default Save File
		CreateSaveFile();
	}

	UE_LOG(LogTemp, Error, TEXT("JSM LoadGame"));

}

void UGameInstanceBase::OnOpenLevelToLevel(UWorld* thisworld)
{
	ACharacterBase* ControlledChara = Cast<ACharacterBase>(UGameplayStatics::GetPlayerCharacter(this, 0));
	APlayerControllerBase* PlayerController = Cast<APlayerControllerBase>(ControlledChara->GetController());
	AMainHUD* MainHUD = Cast<AMainHUD>(PlayerController->GetHUD());

	if (ControlledChara && bJustPortal)
	{
		// 여기서 캐릭터 스테이터스 옮김
		ControlledChara->SetActorRotation(PlayerRotatorToLevel);
		PlayerController->SetControlRotation(ControllerRotatorToLevel);
		ControlledChara->SetActorLocation(MainHUD->InitialLocation);

		ControlledChara->Data->Projectile = PlayerProjectileDataToLevel;
		ControlledChara->StatusComponent->CurrentProjectileNum = PlayerProjectileNumToLevel;
	}
	
	bJustPortal = false;
}


