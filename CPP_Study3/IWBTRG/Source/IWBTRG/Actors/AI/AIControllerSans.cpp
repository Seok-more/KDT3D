// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/AI/AIControllerSans.h"
#include "Perception/AISenseConfig_Sight.h"
#include "GameFramework/Character.h"


void AAIControllerSans::BeginPlay()
{
	if (!IsValid(BrainComponent))
	{
		UBehaviorTree* BehaviorTree = LoadObject<UBehaviorTree>(nullptr, TEXT("/Script/AIModule.BehaviorTree'/Game/AI/Boss_Sans/BT_Sans.BT_Sans'"));
		check(BehaviorTree);
		RunBehaviorTree(BehaviorTree);
	}
}

void AAIControllerSans::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	UE_LOG(LogTemp, Warning, TEXT("Possess in %s"), *InPawn->GetName());
}

void AAIControllerSans::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FindPlayerByPerception();
}

void AAIControllerSans::FindPlayerByPerception()
{
	APawn* OwningPawn = GetPawn();

	if (UAIPerceptionComponent* AIPerceptionComponent = OwningPawn->GetComponentByClass<UAIPerceptionComponent>())
	{
		TArray<AActor*> OutActors;
		AIPerceptionComponent->GetCurrentlyPerceivedActors(UAISenseConfig_Sight::StaticClass(), OutActors);

		bool bFound = false;
		for (AActor* It : OutActors)
		{
			if (ACharacter* DetectedPlayer = Cast<ACharacter>(It))
			{
				bFound = true;
				Blackboard->SetValueAsObject(TEXT("DetectedPlayer"), Cast<UObject>(DetectedPlayer));
				break;
			}
		}
		if (!bFound)
		{
			Blackboard->ClearValue(TEXT("DetectedPlayer"));
		}
	}
}
