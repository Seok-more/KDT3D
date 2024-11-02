// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/AnimNotify_Projectile.h"
#include "Actors/ActorBase.h"
#include "Actors/Pawn/Character/CharacterBase.h"
#include "Camera/CameraComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Misc/Utils.h"
#include "Subsystem/ActorPoolSubsystem.h"

UAnimNotify_Projectile::UAnimNotify_Projectile()
{
#if WITH_EDITORONLY_DATA
	NotifyColor = FColor(90, 90, 200, 255);
#endif 
}

FRotator UAnimNotify_Projectile::GetPlayerProjectileRotation(const FVector& InProjectSpawnLocation, UCameraComponent* InCameraComponent)
{
	const FVector CameraForwardVector = InCameraComponent->GetForwardVector();
	const FVector DestinationLocation = InCameraComponent->GetComponentLocation() + CameraForwardVector * 5000.0;

	TArray<AActor*> IgnoreActors; IgnoreActors.Add(InCameraComponent->GetOwner());
	FHitResult HitResult;

	const ETraceTypeQuery TraceTypeQuery = UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_GameTraceChannel4);
	const bool bHit = UKismetSystemLibrary::LineTraceSingle(InCameraComponent->GetWorld(),
		InCameraComponent->GetComponentLocation(), DestinationLocation, TraceTypeQuery,
		false, IgnoreActors, EDrawDebugTrace::None, HitResult, true);

	FRotator Rotator;
	if (bHit)
	{
		Rotator = UKismetMathLibrary::FindLookAtRotation(InProjectSpawnLocation, HitResult.ImpactPoint);
	}
	else
	{
		Rotator = UKismetMathLibrary::FindLookAtRotation(InProjectSpawnLocation, DestinationLocation);
	}
	return Rotator;
}

void UAnimNotify_Projectile::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);
#if WITH_EDITOR
	if (GIsEditor && MeshComp->GetWorld() != GWorld) { return; }
#endif

	APawn* OwningPawn = Cast<APawn>(MeshComp->GetOwner());
	check(OwningPawn);

	ACharacterBase* ControlledChara = Cast<ACharacterBase>(OwningPawn);

	UWorld* World = OwningPawn->GetWorld();

	if(!ControlledChara->ProjectileData)
	{
		ensureMsgf(false, TEXT("Projectile is empty"));
		return;

	}
	
	AActorProjectile* Projectile = World->SpawnActorDeferred<AActorProjectile>(ControlledChara->ProjectileData->ActorClass,
		FTransform::Identity, OwningPawn, OwningPawn, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
	Projectile->SetData(ControlledChara->Data->Projectile);

	FTransform NewTransform;

	const FVector IndexLocation = ControlledChara->SkeletalMeshComponent->GetSocketLocation(SocketName::Index);
	NewTransform.SetLocation(IndexLocation);

	FRotator ProjectileRotator = FRotator::ZeroRotator;
	bool bIsPlayer = false;
	if (UCameraComponent* CameraComponent = OwningPawn->GetComponentByClass<UCameraComponent>())
	{
		bIsPlayer = true;
		ProjectileRotator = GetPlayerProjectileRotation(IndexLocation, CameraComponent);
	}

	else
	{
		// 구현 필요
		check(false);
	}

	NewTransform.SetRotation(ProjectileRotator.Quaternion());
	Projectile->FinishSpawning(NewTransform);

	
	


}
