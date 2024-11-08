// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/ActorItem.h"
#include "ActorItem_Projectile.generated.h"

/**
 * 
 */
UCLASS()
class IWBTRG_API AActorItem_Projectile : public AActorItem
{
	GENERATED_BODY()

public:
	virtual void Used() override;
	
public:

};
