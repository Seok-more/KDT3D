// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/ActorItem_Projectile.h"
#include "Kismet/GameplayStatics.h"
#include "Actors/Pawn/Character/CharacterBase.h"

void AActorItem_Projectile::Used()
{
	Super::Used();

	ACharacterBase* ControlledChara = Cast<ACharacterBase>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	ControlledChara->Data->Projectile = Data->Projectile;
	ControlledChara->StatusComponent->CurrentProjectileNum = Uses;

	ControlledChara->StatusComponent->OnShotChanged.Broadcast(Uses);
	
	// 함번 갱신
	ControlledChara->ProjectileData = ControlledChara-> Data->Projectile.GetRow<FProjectileTableRow>(TEXT("Projectile"));


}
