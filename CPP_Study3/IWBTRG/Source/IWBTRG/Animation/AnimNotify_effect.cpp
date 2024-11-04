// Fill out your copyright notice in the Description page of Project Settings.

#include "Animation/AnimNotify_effect.h"
#include "Actors/Pawn/Character/CharacterBase.h"
#include "Subsystem/ActorPoolSubsystem.h"

UAnimNotify_effect::UAnimNotify_effect()
{
#if WITH_EDITORONLY_DATA
	NotifyColor = FColor(255, 0, 0, 255);
#endif // WITH_EDITORONLY_DATA
}

void UAnimNotify_effect::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);

	if (DataTableRowHandle.IsNull()) { return; }
	Data = DataTableRowHandle.GetRow<FEffectBaseTableRow>(TEXT("Effect"));
	if (!Data) { ensure(false); return; }

	AActor* OwningActor = MeshComp->GetOwner();
	APawn* OwningPawn = Cast<APawn>(MeshComp->GetOwner());
	ACharacterBase* ControlledChara = Cast<ACharacterBase>(OwningPawn);

#if WITH_EDITOR
	if (GIsEditor && OwningActor && OwningActor->GetWorld() != GWorld) { return; } // 에디터 프리뷰
#endif

	FTransform NewTransform;

	const FTransform IndexTransform = ControlledChara->SkeletalMeshComponent->GetSocketTransform(SocketName::Index);
	NewTransform.SetLocation(IndexTransform.GetLocation());
	NewTransform.SetRotation(IndexTransform.GetRotation());

	const FTransform EffectTransform = NewTransform;
	MeshComp->GetWorld()->GetSubsystem<UActorPoolSubsystem>()->SpawnEffect(EffectTransform, DataTableRowHandle);
}
