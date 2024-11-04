// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/ActorItem.h"


void AActorItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Activate Effect needed
	if (bOverlapped)
	{
		UE_LOG(LogTemp, Log, TEXT("CharacterOverlapped"));
	}
	
}

void AActorItem::UpdateData()
{
	Super::UpdateData();

	if (Data)
	{
		Data->bMeshCollision = false;
		Data->bMID = true;
		UBoxComponent* BoxComponent = Cast<UBoxComponent>(Collider);
		FVector CurrentExtent = BoxComponent->GetUnscaledBoxExtent();
		FVector ScaledExtent = CurrentExtent * 1.1f;
		BoxComponent->SetBoxExtent(ScaledExtent);
	}

	{
		StaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		SkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		Collider->SetCollisionProfileName(CollisionProfileName::PawnTrigger);
	}
	
}

void AActorItem::Destroy()
{
	Super::Destroy();
	UE_LOG(LogTemp, Warning, TEXT("De"));
}

void AActorItem::OnColliderBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnColliderBeginOverlap(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	// Main UI -> Press E to pick create

	bOverlapped = true;



}

void AActorItem::OnColliderEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Super::OnColliderEndOverlap(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex);
	// Main UI -> Press E to pick remove

	bOverlapped = false;
}
