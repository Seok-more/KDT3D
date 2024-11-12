// Fill out your copyright notice in the Description page of Project Settings.


#include "Node/BTTask_Sans_Bone2.h"
#include "Actors/ActorBase.h"
#include "Actors/ActorEnemy.h"
#include "TimerManager.h"
#include "System/GameInstanceBase.h"
#include "Kismet/GamePlayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"

UBTTask_Sans_Bone2::UBTTask_Sans_Bone2()
{
	NodeName = "Bone2";
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

EBTNodeResult::Type UBTTask_Sans_Bone2::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	BehaviorTreeComponent = &OwnerComp;
	BlackboardComponent = OwnerComp.GetBlackboardComponent();


	UWorld* World = GetWorld();
	AAIController* AIController = OwnerComp.GetAIOwner();
	APawn* OwningPawn = AIController->GetPawn();
	APawnBossSans* OwningSans = Cast<APawnBossSans>(OwningPawn);
	GameInstanceBase = Cast<UGameInstanceBase>(OwnerComp.GetWorld()->GetGameInstance());

	FVector OwnerLocation = OwningSans->GetActorTransform().GetLocation();
	FTransform NewTransform;

	if (OwningSans && !OwningSans->SansData->Bone.IsNull() && !OwningSans->SansData->Warning.IsNull())
	{
		if (GameInstanceBase->Noob)
		{
			AActorBase* Warning = World->SpawnActorDeferred<AActorBase>
				(AActorBase::StaticClass(), OwningSans->GetActorTransform(), OwningSans, OwningSans, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
			
			Warning->SetData(OwningSans->SansData->Warning);
			
			FVector Location = OwningSans->WarningData->Location;
			Location.X = OwningSans->WarningData->Location.X;
			Location.Y = OwningSans->WarningData->Location.Y;
			Location.Z = OwningSans->WarningData->Location.Z;
			
			FVector NewLocation = FVector((OriginLocation.X + Location.X) - OwnerLocation.X,
											(OriginLocation.Y + Location.Y) - OwnerLocation.Y,
											(OriginLocation.Z + Location.Z) - 500);
			
			FVector Scale = OwningSans->WarningData->Scale;
			Scale.X = OwningSans->WarningData->Scale.X;
			Scale.Y = OwningSans->WarningData->Scale.Y;
			Scale.Z = OwningSans->WarningData->Scale.Z;
			
			FVector NewScale = FVector((Scale.X) * 30,
										(Scale.Y * 30),
										(Scale.Z)* 1.5);
			
			
			NewTransform.SetLocation(NewLocation);
			NewTransform.SetRotation(OwningSans->WarningData->Rotation.Quaternion());
			NewTransform.SetScale3D(NewScale);
			
			Warning->FinishSpawning(NewTransform);
			WarningArray.Add(Warning);
		}

		for (int32 j = 0; j < 1; ++j)
		{
			for (int32 i = 0; i < 20; ++i)
			{
				
				//----------------------------------------------------

				AActorEnemy* Bone = World->SpawnActorDeferred<AActorEnemy>
					(AActorEnemy::StaticClass(), OwningSans->GetActorTransform(), OwningSans, OwningSans, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

				Bone->SetData(OwningSans->SansData->Bone);

				FVector Location = OwningSans->BoneData->Location;
				Location.X = OwningSans->BoneData->Location.X;
				Location.Y = OwningSans->BoneData->Location.Y;
				Location.Z = OwningSans->BoneData->Location.Z;

				FVector NewLocation = FVector((OwnerLocation.X + Location.X) + j * 150,
					(OwnerLocation.Y + Location.Y) - 1430 + i * 150,
					(OwnerLocation.Z + Location.Z) - 750  + j * 50);

				NewTransform.SetLocation(NewLocation);
				NewTransform.SetRotation(OwningSans->BoneData->Rotation.Quaternion());
				NewTransform.SetScale3D(OwningSans->BoneData->Scale);

				Bone->FinishSpawning(NewTransform);
				BoneArray.Add(Bone);
			}
		}
	}

	UKismetSystemLibrary::K2_SetTimer(this, TEXT("Fininsh"), 3.f, false);

	return EBTNodeResult::InProgress;
}

void UBTTask_Sans_Bone2::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	if (BoneArray.Num() > 0)
	{
		for (AActorEnemy* Bone : BoneArray)
		{
			BoneMove(DeltaSeconds);
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

void UBTTask_Sans_Bone2::Fininsh()
{
	if (GameInstanceBase->Noob)
	{
		while (BoneArray.Num() > 0)
		{
			AActorEnemy* Bone = BoneArray.Pop();
			if (Bone)
			{
				Bone->Destroy();
			}
		}

		while (WarningArray.Num() > 0)
		{
			AActorBase* Warning = WarningArray.Pop();
			if (Warning)
			{
				Warning->Destroy();
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

void UBTTask_Sans_Bone2::BoneMove(float DeltaSeconds)
{
	for (AActorEnemy* Bone : BoneArray)
	{
		Bone->AddActorLocalOffset(FVector(-MoveSpeed * DeltaSeconds, 0.0f, 0.0f));

		
	}
}
