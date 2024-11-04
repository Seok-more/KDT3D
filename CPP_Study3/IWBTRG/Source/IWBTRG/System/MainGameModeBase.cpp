// Fill out your copyright notice in the Description page of Project Settings.


#include "System/MainGameModeBase.h"
#include "Actors/Pawn/Character/PlayerControllerBase.h"
#include "Actors/Pawn/Character/CharacterBase.h"
#include "System/MainGameState.h"
#include "System/MainHUD.h"

AMainGameModeBase::AMainGameModeBase()
{
	{
		PlayerControllerClass = APlayerControllerBase::StaticClass();
		//static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerClassFinder = (TEXT("'/Game/BP/Item/BPPC_Item.BPPC_Item_C'"));
		//if (PlayerControllerClassFinder.Succeeded())
		//{
		//	PlayerControllerClass = PlayerControllerClassFinder.Class;
		//}
	}
	{
		DefaultPawnClass = ACharacterBase::StaticClass();
	}
	{
		GameStateClass = AMainGameState::StaticClass();
	}
	{
		HUDClass = AMainHUD::StaticClass();
	}

}
