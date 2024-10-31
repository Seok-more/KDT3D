// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_Projectile.generated.h"

/**
 * 
 */
UCLASS()
class IWBTRG_API UAnimNotify_Projectile : public UAnimNotify
{
	GENERATED_BODY()
	
public:
	UAnimNotify_Projectile();

public:
	FRotator GetPlayerProjectileRotation(const FVector& InProjectSpawnLocation, class UCameraComponent* InCameraComponent);

	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;


};
