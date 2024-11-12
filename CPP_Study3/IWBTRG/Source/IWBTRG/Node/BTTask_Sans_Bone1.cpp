// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Sans_Bone1.h"
#include "Actors/ActorBase.h"
#include "Actors/ActorEnemy.h"
#include "TimerManager.h"
#include "System/GameInstanceBase.h"
#include "Kismet/GamePlayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"

UBTTask_Sans_Bone1::UBTTask_Sans_Bone1()
{
	NodeName = "Bone1";
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

EBTNodeResult::Type UBTTask_Sans_Bone1::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	BehaviorTreeComponent = &OwnerComp;
	BlackboardComponent = OwnerComp.GetBlackboardComponent();


	UWorld* World = GetWorld();
	AAIController* AIController = OwnerComp.GetAIOwner();
	APawn* OwningPawn = AIController->GetPawn();
	APawnBossSans* OwningSans = Cast<APawnBossSans>(OwningPawn);
	UGameInstanceBase* GameInstanceBase = Cast<UGameInstanceBase>(OwnerComp.GetWorld()->GetGameInstance());

	FVector OwnerLocation = OwningSans->GetActorTransform().GetLocation();
	FTransform NewTransform;

	if (OwningSans && !OwningSans->SansData->Bone.IsNull() && !OwningSans->SansData->Warning.IsNull())
	{
		for(int32 i = 0; i < 15; ++i)
		{
			if(GameInstanceBase->Noob)
			{
				AActorBase* Warning = World->SpawnActorDeferred<AActorBase>
					(AActorBase::StaticClass(), OwningSans->GetActorTransform(), OwningSans, OwningSans, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

				Warning->SetData(OwningSans->SansData->Warning);

				FVector Location = OwningSans->WarningData->Location;
				Location.X = OwningSans->WarningData->Location.X;
				Location.Y = OwningSans->WarningData->Location.Y;
				Location.Z = OwningSans->WarningData->Location.Z;

				FVector NewLocation = FVector((OriginLocation.X + Location.X) - OwnerLocation.X,
											  (OriginLocation.Y + Location.Y) + i * 220 - 1430,
											  (OriginLocation.Z + Location.Z) - 500);

				FVector Scale = OwningSans->WarningData->Scale;
				Scale.X = OwningSans->WarningData->Scale.X;
				Scale.Y = OwningSans->WarningData->Scale.Y;
				Scale.Z = OwningSans->WarningData->Scale.Z;

				FVector NewScale = FVector((Scale.X) * 30,
										   (Scale.Y),
										   (Scale.Z) * 0.02f);


				NewTransform.SetLocation(NewLocation);
				NewTransform.SetRotation(OwningSans->WarningData->Rotation.Quaternion());
				NewTransform.SetScale3D(NewScale);

				Warning->FinishSpawning(NewTransform);
				WarningArray.Add(Warning);
			}

			//----------------------------------------------------

			AActorEnemy* Bone = World->SpawnActorDeferred<AActorEnemy>
				(AActorEnemy::StaticClass(), OwningSans->GetActorTransform(), OwningSans, OwningSans, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

			Bone->SetData(OwningSans->SansData->Bone);

			FVector Location = OwningSans->BoneData->Location;
			Location.X = OwningSans->BoneData->Location.X;
			Location.Y = OwningSans->BoneData->Location.Y;
			Location.Z = OwningSans->BoneData->Location.Z;

			FVector NewLocation = FVector((OwnerLocation.X + Location.X), 
										  (OwnerLocation.Y+ Location.Y) + i * 220 - 1430,
										  (OwnerLocation.Z+ Location.Z) - 500);
			
			NewTransform.SetLocation(NewLocation);
			NewTransform.SetRotation(OwningSans->BoneData->Rotation.Quaternion());
			NewTransform.SetScale3D(OwningSans->BoneData->Scale);

			Bone->FinishSpawning(NewTransform);
			BoneArray.Add(Bone);
		}
	}

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

	if (WarningArray.Num() > 0)
	{
		for (AActorBase* Warning : WarningArray)
		{
			if (Warning->HasMID())
			{
				UMaterialInstanceDynamic* MaterialInstance = Warning->GetMID();

				if (MaterialInstance)
				{
					float OpacityValue;
					MaterialInstance->GetScalarParameterValue(FName("Opacity"), OpacityValue);

					OpacityValue -= 0.5f * DeltaSeconds;

					if (OpacityValue < 0.0f)
					{
						OpacityValue = 0.0f;
					}

					MaterialInstance->SetScalarParameterValue(FName("Opacity"), OpacityValue);
				}
			}
		}
	}
}

void UBTTask_Sans_Bone1::OnResult(EPathFollowingResult::Type MovementResult)
{

}

void UBTTask_Sans_Bone1::Fininsh()
{
	if(WarningArray.Num() > 0)
	{
		while (BoneArray.Num() > 0 && WarningArray.Num() > 0)
		{
			AActorBase* Warning = WarningArray.Pop();
			if (Warning)
			{
				Warning->Destroy();
			}

			AActorEnemy* Bone = BoneArray.Pop();
			if (Bone)
			{
				Bone->Destroy();
			}
		}
	}
	else
	{
		while (BoneArray.Num() > 0)
		{
			AActorEnemy* Bone = BoneArray.Pop();
			if (Bone)
			{
				Bone->Destroy();
			}
		}
	}

	FinishLatentTask(*BehaviorTreeComponent, EBTNodeResult::Succeeded);
}



void UBTTask_Sans_Bone1::BoneMove()
{
	for (AActorEnemy* Bone : BoneArray)
	{
		Bone->AddActorLocalOffset(FVector(-MoveSpeed, 0.0f, 0.0f));
	}
	
}



