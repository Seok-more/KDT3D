// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/ActorEnemy.h"
#include "ActorEnemy.h"

void AActorEnemy::OnMeshHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	ACharacterBase* Chara = Cast<ACharacterBase>(OtherActor);
	if (Chara)
	{
		Chara->StatusComponent->OnDie.Broadcast();
	
	}
}

void AActorEnemy::OnMeshBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ACharacterBase* Chara = Cast<ACharacterBase>(OtherActor);
	if (Chara)
	{
		Chara->StatusComponent->OnDie.Broadcast();

	}
}

void AActorEnemy::OnColliderBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ACharacterBase* Chara = Cast<ACharacterBase>(OtherActor);
	if (Chara)
	{
		Chara->StatusComponent->OnDie.Broadcast();

	}
}
