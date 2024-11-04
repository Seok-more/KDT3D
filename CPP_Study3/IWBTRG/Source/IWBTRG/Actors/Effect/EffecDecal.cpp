// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Effect/EffecDecal.h"

AEffecDecal::AEffecDecal()
{
	DecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("Hit Decal"));
	DecalComponent->SetupAttachment(RootComponent);
}

void AEffecDecal::SetData(const FDataTableRowHandle& InDataTableRowHandle)
{
	Super::SetData(InDataTableRowHandle);

	DecalData = static_cast<FEffectDecalTableRow*>(Data);

	if (DecalData)
	{
		DecalComponent->SetMaterial(0, DecalData->DecalMaterial);
		DecalComponent->SetRelativeTransform(DecalData->DecalTransform);
	}

}
