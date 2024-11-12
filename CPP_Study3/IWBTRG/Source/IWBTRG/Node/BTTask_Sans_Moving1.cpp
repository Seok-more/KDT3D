// Fill out your copyright notice in the Description page of Project Settings.


#include "Node/BTTask_Sans_Moving1.h"
#include "System/GameInstanceBase.h"
#include "Kismet/GamePlayStatics.h"
#include "Actors/Pawn/PawnBossSans.h"
#include "Kismet/KismetSystemLibrary.h"

UBTTask_Sans_Moving1::UBTTask_Sans_Moving1()
{
	NodeName = "Moving";
	bCreateNodeInstance = true;
	bTickIntervals = true;
	bNotifyTick = true;

	{
		UWorld* World = GetWorld();
		TArray<AActor*> FoundActors;
		UGameplayStatics::GetAllActorsOfClass(World, APawnBossSans::StaticClass(), FoundActors);

		for (AActor* Actors : FoundActors)
		{
			APawnBossSans* Sans = Cast<APawnBossSans>(Actors);
			if (Sans)
			{
				OriginLocation = Sans->GetActorLocation();
			}
		}
	}


}

EBTNodeResult::Type UBTTask_Sans_Moving1::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	BehaviorTreeComponent = &OwnerComp;
	BlackboardComponent = OwnerComp.GetBlackboardComponent();


	UWorld* World = GetWorld();
	AAIController* AIController = OwnerComp.GetAIOwner();
	APawn* OwningPawn = AIController->GetPawn();
	OwningSans = Cast<APawnBossSans>(OwningPawn);
	GameInstanceBase = Cast<UGameInstanceBase>(OwnerComp.GetWorld()->GetGameInstance());

	FVector OwnerLocation = OwningSans->GetActorTransform().GetLocation();
	FTransform NewTransform;

	{
		Time = 0.0f;
		bMove = true;
	}

	UKismetSystemLibrary::K2_SetTimer(this, TEXT("Fininsh"), 3.f, false);

	return EBTNodeResult::InProgress;
}

void UBTTask_Sans_Moving1::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	SansMove(DeltaSeconds);
}

void UBTTask_Sans_Moving1::Fininsh()
{
	bMove = false;
	FinishLatentTask(*BehaviorTreeComponent, EBTNodeResult::Succeeded);
}

void UBTTask_Sans_Moving1::SansMove(float DeltaSeconds)
{
	if (OwningSans && bMove)
	{
		MoveSpeed = 50.f;
		Time += DeltaSeconds;
		float OffsetY = MoveSpeed * FMath::Sin(Time * 4.f);

		OwningSans->AddActorLocalOffset(FVector(0.0f, OffsetY, 0.0f));
	}
}
