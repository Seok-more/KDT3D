// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Pawn/PawnBossSans.h"
#include "Actors/AI/AIControllerSans.h"
#include "Kismet/KismetSystemLibrary.h"

APawnBossSans::APawnBossSans(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	{
		MainSpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("MainSpriteComponent"));
		MainSpriteComponent->SetupAttachment(RootComponent);
	}
}

void APawnBossSans::BeginPlay()
{
	Super::BeginPlay();
}

void APawnBossSans::SetData(const FDataTableRowHandle& InDataTableRowHandle)
{
	Super::SetData(InDataTableRowHandle);

	SkeletalMeshComponent->SetVisibility(false);

	SansData = static_cast<FPawnBoss_SansTableRow*>(Data);
	if(SansData)
	{
		{	// Status
			StatusComponent->SetMaxHP(SansData->MaxHP);
			StatusComponent->SetCurrentHP();
		}

		{	// Sprite
			UPaperSprite* MainSprite = GetSpritesFromName(SansData->Sprites, TEXT("SP_Sans_MainSprite"));
			MainSpriteComponent->SetSprite(MainSprite);
		}

		{	// StuffData
			BoneData = SansData->Bone.GetRow<FActorBaseTableRow>(TEXT("Bone"));
			WarningData = SansData->Warning.GetRow<FActorBaseTableRow>(TEXT("Warning"));
		}


	}
}

UPaperSprite* APawnBossSans::GetSpritesFromName(TArray<UPaperSprite*> Sprites, const FName& InName)
{
	for (UPaperSprite* Sprite : Sprites)
	{
		if (Sprite == nullptr)
		{
			continue;
		}

		if (Sprite->GetFName() == InName)
		{
			return Sprite;
		}
		
	}
	return nullptr;
}

float APawnBossSans::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	if (StatusComponent->IsDie()) { return 0.f; }

	float DamageResult = StatusComponent->TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);

	if (FMath::IsNearlyZero(DamageResult))
	{
		return 0.0;
	}


	if (StatusComponent->IsDie())
	{
		if (Controller)
		{
			Controller->Destroy();
		}

		SetActorEnableCollision(false);

		// Temporary Code, Time shoul be checked
		//UKismetSystemLibrary::K2_SetTimer(this, TEXT("OnDie"), 3.f, false);
		OnDie();
	}

	return 0.0f;
}

void APawnBossSans::OnDie()
{
	UE_LOG(LogTemp, Error, TEXT("Sans Die"));

	AAIControllerSans* AIControllerSans = Cast<AAIControllerSans>(GetController());

	if (AIControllerSans)
	{
		AIControllerSans->Destroy();
	}

	Destroy();
}
