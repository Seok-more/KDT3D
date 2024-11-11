// Fill out your copyright notice in the Description page of Project Settings.


#include "BTComposite_Random.h"

UBTComposite_Random::UBTComposite_Random()
{
	NodeName = "Random";
}

int32 UBTComposite_Random::GetNextChildHandler(FBehaviorTreeSearchData& SearchData, int32 PrevChild, EBTNodeResult::Type LastResult) const
{
    
    const int32 NumChildren = GetChildrenNum();
    if (NumChildren == 0)
    {
        return BTSpecialChild::ReturnToParent; 
    }

    const int32 RandomIndex = FMath::RandRange(0, NumChildren - 1);
    return RandomIndex;
}
