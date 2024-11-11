// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSprite.h"
#include "Actors/Pawn/Enemy.h"
#include "Actors/ActorBase.h"
#include "PaperSpriteComponent.h"
#include "PawnBossSans.generated.h"


USTRUCT()
struct IWBTRG_API FPawnBoss_SansTableRow : public FPawnBaseTableRow
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Sprite")
	UPaperSprite* MainSprite;

	UPROPERTY(EditAnywhere, Category = "Sprite")
	UPaperSprite* BlastSprite;

public:
	UPROPERTY(EditAnywhere, Category = "Bone", meta = (RowType = "/Script/IWBTRG.ActorBaseTableRow"))
	FDataTableRowHandle Bone;

public:

	UPROPERTY(EditAnywhere, Category = "Effect", meta = (RowType = "/Script/IWBTRG.EffectBaseTableRow"))
	FDataTableRowHandle BlastEffect;

	UPROPERTY(EditAnywhere, Category = "Effect", meta = (RowType = "/Script/IWBTRG.EffectBaseTableRow"))
	FDataTableRowHandle BoomEffect;

public:
	UPROPERTY(EditAnywhere, Category = "Status")
	float MaxHP = 100.f;

};


UCLASS()
class IWBTRG_API APawnBossSans : public AEnemy
{
	GENERATED_BODY()
	
public:
	APawnBossSans(const FObjectInitializer& ObjectInitializer);


public:
	virtual void BeginPlay() override;
	virtual void SetData(const FDataTableRowHandle& InDataTableRowHandle);


	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

protected:
	virtual void OnDie() override;

public:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UPaperSpriteComponent> MainSpriteComponent;

public:
	FActorBaseTableRow* BoneData = nullptr;


public:
	FPawnBoss_SansTableRow* SansData;

};
