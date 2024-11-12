// Fill out your copyright notice in the Description page of Project Settings.


#include "Node/BTTask_Sans_Gravity1.h"
#include "Actors/ActorBase.h"
#include "Actors/ActorEnemy.h"
#include "TimerManager.h"
#include "Actors/Pawn/PawnBossSans.h"
#include "System/GameInstanceBase.h"
#include "Kismet/GamePlayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"

UBTTask_Sans_Gravity1::UBTTask_Sans_Gravity1()
{
	NodeName = "Gravity1";
	bCreateNodeInstance = true;
	bTickIntervals = true;
	bNotifyTick = true;
}

EBTNodeResult::Type UBTTask_Sans_Gravity1::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	BehaviorTreeComponent = &OwnerComp;
	BlackboardComponent = OwnerComp.GetBlackboardComponent();


	UWorld* World = GetWorld();
	AAIController* AIController = OwnerComp.GetAIOwner();
	APawn* OwningPawn = AIController->GetPawn();
	APawnBossSans* OwningSans = Cast<APawnBossSans>(OwningPawn);
	GameInstanceBase = Cast<UGameInstanceBase>(OwnerComp.GetWorld()->GetGameInstance());
	ACharacterBase* ControlledChara = Cast<ACharacterBase>(UGameplayStatics::GetPlayerCharacter(this, 0));


	{
		FVector JumpVelocity = FVector(0.0f, 0.0f, 350.0f); 
		ControlledChara->LaunchCharacter(JumpVelocity, false, true);

		// 카메라를 흔들어야할까?

	}


	UKismetSystemLibrary::K2_SetTimer(this, TEXT("Fininsh"), 1.f, false);
	return EBTNodeResult::InProgress;
}

void UBTTask_Sans_Gravity1::Fininsh()
{
	FinishLatentTask(*BehaviorTreeComponent, EBTNodeResult::Succeeded);
}
