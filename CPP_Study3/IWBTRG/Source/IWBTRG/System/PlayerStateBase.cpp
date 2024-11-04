// Fill out your copyright notice in the Description page of Project Settings.


#include "System/PlayerStateBase.h"
#include "SaveGameTemp.h"
#include "Kismet/GameplayStatics.h"
#include "Actors/Pawn/Character/CharacterBase.h"


APlayerStateBase::APlayerStateBase()
{

}

void APlayerStateBase::InitPlayerData()
{
	auto SaveGameTemp = Cast<USaveGameTemp>(UGameplayStatics::LoadGameFromSlot(SaveSlotName, 0));
	if (nullptr == SaveGameTemp)
	{
		SaveGameTemp = GetMutableDefault<USaveGameTemp>();
	}
	
	ACharacterBase* CharacterBase = Cast<ACharacterBase>(GetWorld()->GetFirstPlayerController()->GetCharacter());
	CharacterBase->SetActorTransform(SaveGameTemp->PlayerTransform);



}


void APlayerStateBase::SavePlayerData()
{
	ACharacterBase* CharacterBase = Cast<ACharacterBase>(GetWorld()->GetFirstPlayerController()->GetCharacter());
	USaveGameTemp* NewPlayerData = NewObject<USaveGameTemp>();
	NewPlayerData->PlayerTransform = CharacterBase->GetActorTransform();
}
