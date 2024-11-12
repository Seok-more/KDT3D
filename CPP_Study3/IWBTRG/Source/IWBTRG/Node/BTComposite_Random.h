// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "BTComposite_Random.generated.h"

/**
 * 
 */
UCLASS()
class IWBTRG_API UBTComposite_Random : public UBTCompositeNode
{
	GENERATED_BODY()
	
public:
	UBTComposite_Random();

public:

	virtual void InitializeMemory(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTMemoryInit::Type InitType) const override
	{
		InitializeNodeMemory<FBTCompositeMemory>(NodeMemory, InitType);
	}
	virtual void CleanupMemory(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTMemoryClear::Type CleanupType) const override
	{
		CleanupNodeMemory<FBTCompositeMemory>(NodeMemory, CleanupType);
	}

protected:
	virtual int32 GetNextChildHandler(FBehaviorTreeSearchData& SearchData, int32 PrevChild, EBTNodeResult::Type LastResult) const override;


};
