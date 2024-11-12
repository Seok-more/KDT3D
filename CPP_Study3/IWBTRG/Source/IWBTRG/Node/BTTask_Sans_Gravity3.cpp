// Fill out your copyright notice in the Description page of Project Settings.


#include "Node/BTTask_Sans_Gravity3.h"
#include "BTTask_Sans_Gravity3.h"

UBTTask_Sans_Gravity3::UBTTask_Sans_Gravity3()
{
	NodeName = "Gravity3";
}

EBTNodeResult::Type UBTTask_Sans_Gravity3::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
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
		float Random = (FMath::RandBool() ? 1.0f : -1.0f);

		FVector JumpVelocity = FVector(Random * 500.0f, 0.0f, 200.0f);
		ControlledChara->LaunchCharacter(JumpVelocity, false, true);

		// 카메라를 흔들어야할까?

	}

	UKismetSystemLibrary::K2_SetTimer(this, TEXT("Fininsh"), 1.f, false);
	return EBTNodeResult::InProgress;
}
