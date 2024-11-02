// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Misc/Utils.h"
#include "Actors/Effect/EffectBase.h"
#include "AnimNotify_effect.generated.h"

class USoundBase;
class UParticleSystem;

UCLASS()
class IWBTRG_API UAnimNotify_effect : public UAnimNotify
{
	GENERATED_BODY()

public:
	UAnimNotify_effect();

public:
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;

	UPROPERTY(EditAnywhere, meta = (RowType = "/Script/IWBTRG.EffectBaseTableRow"))
	FDataTableRowHandle DataTableRowHandle;

	FEffectBaseTableRow* Data = nullptr;

	// SocketName to attach to
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotify")
	FName SocketName = SocketName::Index;
};
