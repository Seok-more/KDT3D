// Fill out your copyright notice in the Description page of Project Settings.


#include "Node/BTTask_Sans_Bone3.h"
#include "Actors/ActorBase.h"
#include "Actors/ActorEnemy.h"
#include "TimerManager.h"
#include "Kismet/GamePlayStatics.h"
#include "System/GameInstanceBase.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"

UBTTask_Sans_Bone3::UBTTask_Sans_Bone3()
{
    NodeName = "Bone3";
}

EBTNodeResult::Type UBTTask_Sans_Bone3::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
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

			ACharacterBase* ControlledChara = Cast<ACharacterBase>(UGameplayStatics::GetPlayerCharacter(this, 0));

			FVector NewLocation = ControlledChara->GetActorLocation();
			NewLocation.X += 3;
			NewLocation.Z = 5;

			FVector Scale = OwningSans->WarningData->Scale;
			Scale.X = OwningSans->WarningData->Scale.X;
			Scale.Y = OwningSans->WarningData->Scale.Y;
			Scale.Z = OwningSans->WarningData->Scale.Z;

			FVector NewScale = FVector((Scale.X) * 0.3,
										(Scale.Y) * 0.3,
										(Scale.Z) * 0.7);


			NewTransform.SetLocation(NewLocation);
			NewTransform.SetRotation(OwningSans->WarningData->Rotation.Quaternion());
			NewTransform.SetScale3D(NewScale);

			Warning->FinishSpawning(NewTransform);
			WarningArray.Add(Warning);
		}

		for (int32 j = 0; j < 1; ++j)
		{
			for (int32 i = 0; i < 1; ++i)
			{

				//----------------------------------------------------

				AActorEnemy* Bone = World->SpawnActorDeferred<AActorEnemy>
					(AActorEnemy::StaticClass(), OwningSans->GetActorTransform(), OwningSans, OwningSans, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

				Bone->SetData(OwningSans->SansData->Bone);

				FVector Location = OwningSans->BoneData->Location;
				Location.X = OwningSans->BoneData->Location.X;
				Location.Y = OwningSans->BoneData->Location.Y;
				Location.Z = OwningSans->BoneData->Location.Z;

				ACharacterBase* ControlledChara = Cast<ACharacterBase>(UGameplayStatics::GetPlayerCharacter(this, 0));


				FVector NewLocation = ControlledChara->GetActorLocation();
				NewLocation.X += 3;
				NewLocation.Z -= 600.f;

				FVector Scale = OwningSans->BoneData->Scale;
				Scale.X = OwningSans->BoneData->Scale.X;
				Scale.Y = OwningSans->BoneData->Scale.Y;
				Scale.Z = OwningSans->BoneData->Scale.Z;

				FVector NewScale = FVector((Scale.X) * 0.3,
											(Scale.Y) * 0.3,
											(Scale.Z));

				NewTransform.SetLocation(NewLocation);
				NewTransform.SetRotation(OwningSans->BoneData->Rotation.Quaternion());
				NewTransform.SetScale3D(NewScale);

				Bone->FinishSpawning(NewTransform);
				BoneArray.Add(Bone);
				Time = 0.0f;
			}
		}
	}

	UKismetSystemLibrary::K2_SetTimer(this, TEXT("Fininsh"), 2.f, false);

	return EBTNodeResult::InProgress;
}

void UBTTask_Sans_Bone3::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
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

void UBTTask_Sans_Bone3::Fininsh()
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

void UBTTask_Sans_Bone3::BoneMove(float DeltaSeconds)
{
	for (AActorEnemy* Bone : BoneArray)
	{

		MoveSpeed = 4.8f;
		Time += DeltaSeconds;
		float OffsetZ = MoveSpeed * FMath::Sin(Time * 2.6f);

		Bone->AddActorLocalOffset(FVector(0.0f, 0.0f, OffsetZ));
	}
}
