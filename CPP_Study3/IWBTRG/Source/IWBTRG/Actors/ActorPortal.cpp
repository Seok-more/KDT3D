// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/ActorPortal.h"
#include "Actors/Pawn/Character/CharacterBase.h"
#include "Kismet/GameplayStatics.h"

void AActorPortal::SetData(const FDataTableRowHandle& InDataTableRowHandle)
{
	Super::SetData(InDataTableRowHandle);

	StaticMeshComponent->SetCollisionProfileName(TEXT("PawnTrigger"));
	SkeletalMeshComponent->SetCollisionProfileName(TEXT("PawnTrigger"));
	Collider->SetCollisionProfileName(TEXT("PawnTrigger"));
}

void AActorPortal::OnMeshBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

void AActorPortal::OnColliderBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UGameInstanceBase* GameInstanceBase = Cast<UGameInstanceBase>(GetGameInstance());

	if(GameInstanceBase)
	{
		{	// Save Info
			ACharacterBase* ControlledChara = Cast<ACharacterBase>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

			GameInstanceBase->PlayerRotatorToLevel = ControlledChara->GetActorTransform().Rotator();
			GameInstanceBase->FromLevelName = UGameplayStatics::GetCurrentLevelName(GetWorld());
			GameInstanceBase->ControllerRotatorToLevel = ControlledChara->GetControlRotation();
		}

		{	// OpenLevel
			if (ToLevel.IsValid() || ToLevel.LoadSynchronous())
			{
				UGameplayStatics::OpenLevel(GetWorld(), FName(ToLevel.GetAssetName()));
			}
		}

		{	// 여기가 애매한데 이동한 레벨이 있는 캐릭터의 로테이션값과, 카메라 로테이터 값을 바꿔야해서 여기서하면 안됨
			UE_LOG(LogTemp, Warning, TEXT("levelasdasd"));

		}
	}
}

void AActorPortal::OnActive_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

void AActorPortal::OnDeactive_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}
