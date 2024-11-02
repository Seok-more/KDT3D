// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Pawn/Enemy.h"

AEnemy::AEnemy(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

void AEnemy::SetData(const FDataTableRowHandle& InDataTableRowHandle)
{
	Super::SetData(InDataTableRowHandle);

	AIControllerClass = Data->AIControllerClass;
}
