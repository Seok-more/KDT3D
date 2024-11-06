// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/ActorSave.h"
#include "Actors/Pawn/Character/CharacterBase.h"
#include "Kismet/GameplayStatics.h"
#include "System/GameInstanceBase.h"
#include "Misc/Utils.h"

AActorSave::AActorSave(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	
}

void AActorSave::OnMeshBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AActorProjectile* OtherProjectile = Cast<AActorProjectile>(OtherActor);

	if (OtherProjectile && OtherProjectile->IsFriendly())
	{
		UGameInstanceBase* GameInstanceBase = Cast<UGameInstanceBase>(GetGameInstance());
		GameInstanceBase->OnTempSave.Broadcast();

		{
			// Shooting Progress
			UWorld* World = GetWorld();

			ACharacterBase* ControlledChara = Cast<ACharacterBase>(UGameplayStatics::GetPlayerCharacter(World, 0));

			FVector StartLocation = GetActorLocation();
			FVector TargetLocation = ControlledChara->GetActorLocation();

			FVector Direction = (TargetLocation - StartLocation).GetSafeNormal();

			if (ProjectileData)
			{
				AActorProjectile* Projectile = World->SpawnActorDeferred<AActorProjectile>(ProjectileData->ActorClass,
					FTransform::Identity, ControlledChara, ControlledChara, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

				Projectile->SetData(Data->Projectile);

				FTransform NewTransform;
				NewTransform.SetLocation(SweepResult.ImpactPoint);
				NewTransform.SetRotation(Direction.Rotation().Quaternion());
				Projectile->FinishSpawning(NewTransform);
			}
		}
	}
}

void AActorSave::OnColliderBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AActorProjectile* OtherProjectile = Cast<AActorProjectile>(OtherActor);

	if (OtherProjectile && OtherProjectile->IsFriendly())
	{
		UGameInstanceBase* GameInstanceBase = Cast<UGameInstanceBase>(GetGameInstance());
		GameInstanceBase->OnTempSave.Broadcast();

		{
			// Shooting Progress
			UWorld* World = GetWorld();
			
			ACharacterBase* ControlledChara = Cast<ACharacterBase>(UGameplayStatics::GetPlayerCharacter(World, 0));
			
			FVector StartLocation = GetActorLocation();
			FVector TargetLocation = ControlledChara->GetActorLocation();
			
			FVector Direction = (TargetLocation - StartLocation).GetSafeNormal();
			
			if (ProjectileData)
			{
				AActorProjectile* Projectile = World->SpawnActorDeferred<AActorProjectile>(ProjectileData->ActorClass,
					FTransform::Identity, ControlledChara, ControlledChara, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

				Projectile->SetData(Data->Projectile);

				FTransform NewTransform;
				NewTransform.SetLocation(SweepResult.ImpactPoint);
				NewTransform.SetRotation(Direction.Rotation().Quaternion());
				Projectile->FinishSpawning(NewTransform);
			}
		}
	}
}
