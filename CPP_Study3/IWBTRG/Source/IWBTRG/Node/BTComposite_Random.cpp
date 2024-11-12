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

    int32 NextChildIdx = BTSpecialChild::ReturnToParent;

    if (PrevChild == BTSpecialChild::NotInitialized)
    {
        NextChildIdx = FMath::RandRange(0, NumChildren - 1);
      
    }
    
    else if (LastResult == EBTNodeResult::Succeeded)
    {
        // 여기서 랜덤을 탈출하는 경우의 확률을 조정할수는있는데
        NextChildIdx = FMath::RandRange(0, NumChildren);
        if (NextChildIdx == NumChildren)
        {
            return BTSpecialChild::ReturnToParent;
        }
    }

    return NextChildIdx;
}
