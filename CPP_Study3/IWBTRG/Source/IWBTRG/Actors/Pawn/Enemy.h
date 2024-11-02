// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/Pawn/PawnBase.h"
#include "Enemy.generated.h"

/**
 * 
 */
UCLASS()
class IWBTRG_API AEnemy : public APawnBase
{
	GENERATED_BODY()
	
public:
	AEnemy(const FObjectInitializer& ObjectInitializer);

protected:
	virtual void SetData(const FDataTableRowHandle& InDataTableRowHandle) override;

};
