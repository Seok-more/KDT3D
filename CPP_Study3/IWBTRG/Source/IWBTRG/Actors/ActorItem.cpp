// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/ActorItem.h"




void AActorItem::SetData(const FDataTableRowHandle& InDataTableRowHandle)
{
	Super::SetData(InDataTableRowHandle);

	{
		FActorItemTableRow* ItemData = static_cast<FActorItemTableRow*>(Data);
		if (ItemData)
		{
			Uses = ItemData->Uses;
		}
	}
}

void AActorItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Activate Effect needed
	if (bOverlapped)
	{
		UE_LOG(LogTemp, Log, TEXT("CharacterOverlapped"));
	}

	{	// Floating
		FRotator NewRotation = GetActorRotation();
		NewRotation.Yaw += 100.0f * DeltaTime;
		SetActorRotation(NewRotation);

		FVector NewLocation = GetActorLocation();
		float RunningTime = GetWorld()->GetTimeSeconds();
		float AddHeight = FMath::Sin(RunningTime * 2.0f) * 0.5f;
		NewLocation.Z += AddHeight;
		SetActorLocation(NewLocation);
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
		Collider->SetCollisionProfileName(CollisionProfileName::PlayerTrigger);
	}
	
}

void AActorItem::Destroy()
{
	Super::Destroy();
}

void AActorItem::OnColliderBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnColliderBeginOverlap(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

	OnUsed.AddDynamic(this, &ThisClass::Used);

	bOverlapped = true;
}

void AActorItem::OnColliderEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Super::OnColliderEndOverlap(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex);
	
	bOverlapped = false;
	OnUsed.RemoveDynamic(this, &ThisClass::Used);

}

void AActorItem::Used()
{
	UE_LOG(LogTemp, Warning, TEXT("Use %s"), *this->GetName());
}
