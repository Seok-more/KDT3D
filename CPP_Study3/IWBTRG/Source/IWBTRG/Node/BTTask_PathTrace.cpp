// Fill out your copyright notice in the Description page of Project Settings.


#include "Node/BTTask_PathTrace.h"

UBTTask_PathTrace::UBTTask_PathTrace()
{
	NodeName = "PathTrace";

}

EBTNodeResult::Type UBTTask_PathTrace::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	return EBTNodeResult::InProgress;
}
