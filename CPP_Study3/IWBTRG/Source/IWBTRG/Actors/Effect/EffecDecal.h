// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/Effect/EffectBase.h"
#include "Components/DecalComponent.h"
#include "EffecDecal.generated.h"

USTRUCT()
struct IWBTRG_API FEffectDecalTableRow : public FEffectBaseTableRow
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Decal")
	FTransform DecalTransform;
	UPROPERTY(EditAnywhere, Category = "Decal")
	UMaterial* DecalMaterial;
};

UCLASS()
class IWBTRG_API AEffecDecal : public AEffectBase
{
	GENERATED_BODY()

public:
	AEffecDecal();

public:
	virtual void SetData(const FDataTableRowHandle& InDataTableRowHandle) override;

protected:
	UPROPERTY(VisibleAnywhere)
	UDecalComponent* DecalComponent;

protected:
	FEffectDecalTableRow* DecalData;
};