// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Trigger/TriggerBoxBase.h"
#include "Components/BoxComponent.h"
#include "Misc/Utils.h" 



ATriggerBoxBase::ATriggerBoxBase()
{
	{
		UShapeComponent* ShapeComponent = GetCollisionComponent();
		ShapeComponent->OnComponentBeginOverlap.AddDynamic(this, &ThisClass::OnActivate);
		ShapeComponent->OnComponentEndOverlap.AddDynamic(this, &ThisClass::OnDeactivate);
	}
	{
		GetCollisionComponent()->SetCollisionProfileName(CollisionProfileName::PawnTrigger);
	}
	


}

void ATriggerBoxBase::BeginPlay()
{
	Super::BeginPlay();

}

void ATriggerBoxBase::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	OwnerActor = GetOwner();

}
void ATriggerBoxBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



void ATriggerBoxBase::OnActivate(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!OwnerActor) { return; }

	ITriggerInterface::Execute_OnActive(OwnerActor, OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
}

void ATriggerBoxBase::OnDeactivate(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (!OwnerActor) { return; }

	ITriggerInterface::Execute_OnDeactive(OwnerActor, OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);
}



