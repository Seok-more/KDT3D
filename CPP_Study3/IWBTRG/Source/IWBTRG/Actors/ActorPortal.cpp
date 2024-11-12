// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/ActorPortal.h"
#include "Actors/Pawn/Character/CharacterBase.h"
#include "Kismet/GameplayStatics.h"

AActorPortal::AActorPortal(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
}

void AActorPortal::SetData(const FDataTableRowHandle& InDataTableRowHandle)
{
	Super::SetData(InDataTableRowHandle);

	{
		StaticMeshComponent->SetCollisionProfileName(TEXT("PlayerTrigger"));
		Collider->SetCollisionProfileName(TEXT("PlayerTrigger"));
	}

	{
		FActorPortalTableRow* PortalData = static_cast<FActorPortalTableRow*>(Data);
		if (PortalData)
		{
			// ToLevel 세팅 예외처리 없음
			ToLevel = PortalData->ToLevel;
		}
	}
}

void AActorPortal::OnMeshBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UGameInstanceBase* GameInstanceBase = Cast<UGameInstanceBase>(GetGameInstance());
	GameInstanceBase->bJustPortal = true;

	if (GameInstanceBase)
	{
		{	// Save Info
			ACharacterBase* ControlledChara = Cast<ACharacterBase>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

			GameInstanceBase->PlayerRotatorToLevel = ControlledChara->GetActorTransform().Rotator();
			GameInstanceBase->ControllerRotatorToLevel = ControlledChara->GetControlRotation();
			GameInstanceBase->PlayerProjectileDataToLevel = ControlledChara->Data->Projectile;
			GameInstanceBase->PlayerProjectileNumToLevel = ControlledChara->StatusComponent->CurrentProjectileNum;


			GameInstanceBase->FromLevel = GetWorld()->GetCurrentLevel();
		}

		{	// OpenLevel
			{
				UGameplayStatics::OpenLevel(GetWorld(), FName(ToLevel.GetAssetName()));
			}

		}
	}
}

void AActorPortal::OnColliderBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UGameInstanceBase* GameInstanceBase = Cast<UGameInstanceBase>(GetGameInstance());

	if(GameInstanceBase)
	{
		{	// Save Info
			ACharacterBase* ControlledChara = Cast<ACharacterBase>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

			GameInstanceBase->PlayerRotatorToLevel = ControlledChara->GetActorTransform().Rotator();
			GameInstanceBase->ControllerRotatorToLevel = ControlledChara->GetControlRotation();

			GameInstanceBase->FromLevel = GetWorld()->GetCurrentLevel();
		}

		{	// OpenLevel
			{
				UGameplayStatics::OpenLevel(GetWorld(), FName(ToLevel.GetAssetName()));
			}

		}
	}
}

void AActorPortal::OnActive_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

void AActorPortal::OnDeactive_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}
