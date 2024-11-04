// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/AI/AIControllerPathTracing.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"

void AAIControllerPathTracing::BeginPlay()
{
	Super::BeginPlay();

	if (!IsValid(PatrolPath))
	{
		checkf(false, TEXT("PatrolPath is not valid"));
		return;
	}

	if (!IsValid(BrainComponent))
	{
		UBehaviorTree* BehaviorTree = LoadObject<UBehaviorTree>(nullptr, TEXT("Script/AIModule.BehaviorTree'/Game/AI/PathTracing/BT_PathTracing.BT_PathTracing'"));
		check(BehaviorTree);
		RunBehaviorTree(BehaviorTree);
	}
	

	Blackboard->SetValueAsObject(TEXT("SplineComponent"), PatrolPath);

}
