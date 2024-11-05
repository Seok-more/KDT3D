// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Pawn/Enemy.h"

AEnemy::AEnemy(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	{
		AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	}

	{
		AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComponent"));
		AISenseConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("AISenseConfig_Sight"));
		AISenseConfig->DetectionByAffiliation.bDetectNeutrals = true;
		
		AIPerceptionComponent->ConfigureSense(*AISenseConfig);
	}
}

void AEnemy::SetData(const FDataTableRowHandle& InDataTableRowHandle)
{
	Super::SetData(InDataTableRowHandle);

	{
		if (Data->PawnClass = AEnemy::StaticClass())
		{
			Data->bFriendly = false;
		}
	}

	// Error
	if (Data && Data->AIControllerClass)
	{
		AIControllerClass = Data->AIControllerClass;
	}
}
