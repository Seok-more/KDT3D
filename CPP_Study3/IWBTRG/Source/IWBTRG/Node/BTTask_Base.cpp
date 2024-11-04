// Fill out your copyright notice in the Description page of Project Settings.


#include "Node/BTTask_Base.h"


UBTTask_Base::UBTTask_Base()
{


}

void UBTTask_Base::SetOwner(AActor* InActorOwner)
{
	ActorOwner = InActorOwner;
	AIOwner = Cast<AAIController>(InActorOwner);
}

