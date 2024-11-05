// Fill out your copyright notice in the Description page of Project Settings.


#include "System/GameInstanceBase.h"
#include "Kismet/GamePlayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "SaveGameTemp.h"


void UGameInstanceBase::Init()
{
	Super::Init();

	LoadGame();
	TestToSave += 1;
	UE_LOG(LogTemp, Warning, TEXT("TestTOSave: %f"), TestToSave);

}

void UGameInstanceBase::FinishDestroy()
{
	SaveGame();
	Super::FinishDestroy();

}

void UGameInstanceBase::CreateSaveFile()
{
	// Create SaveGame Object and Save to the Default Slot
	USaveGameTemp* DataToSave = Cast<USaveGameTemp>(UGameplayStatics::CreateSaveGameObject(USaveGameTemp::StaticClass()));
	UGameplayStatics::SaveGameToSlot(DataToSave, "Slot1", 0);
}

void UGameInstanceBase::SaveGame()
{
	// Initialize Data to Save
	USaveGameTemp* DataToSave = Cast<USaveGameTemp>(UGameplayStatics::LoadGameFromSlot("Slot1", 0));

	// If there is a valid SaveGame Object to use for saving
	if (DataToSave)
	{
		DataToSave->PlayerTransform = PlayerTransformToSave;
		DataToSave->Test = TestToSave;
		UGameplayStatics::SaveGameToSlot(DataToSave, "Slot1", 0);

		// Should be PlayerStatus in here

	}
	else if (!UGameplayStatics::DoesSaveGameExist("Slot1", 0))
	{
		// Create a Default Save File
		CreateSaveFile();
	}
}


void UGameInstanceBase::LoadGame()
{
	// Cast Data to Load
	USaveGameTemp* DataToLoad = Cast<USaveGameTemp>(UGameplayStatics::LoadGameFromSlot("Slot1", 0));

	if (DataToLoad)
	{
		PlayerTransformToSave = DataToLoad->PlayerTransform;
		TestToSave = DataToLoad->Test;
	}
	else if (!UGameplayStatics::DoesSaveGameExist("Slot1", 0))
	{
		// Create a Default Save File
		CreateSaveFile();
	}

}