// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Sans_Bone1.h"
#include "Actors/ActorBase.h"
#include "Actors/ActorEnemy.h"
#include "TimerManager.h"
#include "Kismet/KismetSystemLibrary.h"

UBTTask_Sans_Bone1::UBTTask_Sans_Bone1()
{
	NodeName = "Bone1";
	bCreateNodeInstance = true;
	bTickIntervals = true;
	bNotifyTick = true;


}

EBTNodeResult::Type UBTTask_Sans_Bone1::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	BehaviorTreeComponent = &OwnerComp;
	BlackboardComponent = OwnerComp.GetBlackboardComponent();


	UWorld* World = GetWorld();
	AAIController* AIController = OwnerComp.GetAIOwner();
	APawn* OwningPawn = AIController->GetPawn();
	APawnBossSans* OwningSans = Cast<APawnBossSans>(OwningPawn);

	if (OwningSans && !OwningSans->SansData->Bone.IsNull())
	{
		for(int32 i = 0; i < 10; ++i)
		{
			AActorEnemy* Bone = World->SpawnActorDeferred<AActorEnemy>
				(AActorEnemy::StaticClass(), OwningSans->GetActorTransform(), OwningSans, OwningSans, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

			Bone->SetData(OwningSans->SansData->Bone);

			FVector OwnerLocation = OwningSans->GetActorTransform().GetLocation();
			FTransform NewTransform;

			FVector Location = OwningSans->BoneData->Location;
			Location.X = OwningSans->BoneData->Location.X;
			Location.Y = OwningSans->BoneData->Location.Y;
			Location.Z = OwningSans->BoneData->Location.Z;

			FVector NewLocation = FVector(OwnerLocation.X + Location.X, OwnerLocation.Y+ Location.Y + i*200, OwnerLocation.Z+ Location.Z);
			
			NewTransform.SetLocation(NewLocation);
			NewTransform.SetRotation(OwningSans->BoneData->Rotation.Quaternion());
			NewTransform.SetScale3D(OwningSans->BoneData->Scale);

			Bone->FinishSpawning(NewTransform);

			//Bone->StaticMeshComponent->SetCollisionProfileName(TEXT("OverlapAll"));
			//Bone->SkeletalMeshComponent->SetCollisionProfileName(TEXT("OverlapAll"));

			BoneArray.Add(Bone);
		}

	}

	// Temporary Code, Should be developped
	UKismetSystemLibrary::K2_SetTimer(this, TEXT("Fininsh"), 3.f, false);

	return EBTNodeResult::InProgress;
}

void UBTTask_Sans_Bone1::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{

	if (BoneArray.Num() > 0)
	{
		for (AActorEnemy* Bone : BoneArray)
		{
			BoneMove();
		}
	}
	
}

void UBTTask_Sans_Bone1::OnResult(EPathFollowingResult::Type MovementResult)
{

}

void UBTTask_Sans_Bone1::Fininsh()
{

	
	for (int32 i = 0; i < BoneArray.Num(); ++i)
	{
		AActorEnemy* Bone = BoneArray.Pop();
		if (Bone)
		{
			Bone->Destroy();
		}
	}

	
	FinishLatentTask(*BehaviorTreeComponent, EBTNodeResult::Succeeded);
}



void UBTTask_Sans_Bone1::BoneMove()
{
	for (AActorEnemy* Bone : BoneArray)
	{
		Bone->AddActorLocalOffset(FVector(-MoveSpeed * 0.1f, 0.0f, 0.0f));
	}
	
}



