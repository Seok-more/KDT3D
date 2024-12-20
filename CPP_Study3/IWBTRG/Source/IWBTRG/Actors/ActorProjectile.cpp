// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/ActorProjectile.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Subsystem/ActorPoolSubsystem.h"
#include "Actors/Pawn/Character/CharacterBase.h"
#include "Actors/Pawn/PawnBase.h"



FProjectileTableRow::FProjectileTableRow()
{
}

#if WITH_EDITOR
void FProjectileTableRow::OnDataTableChanged(const UDataTable* InDataTable, const FName InRowName)
{
	Super::OnDataTableChanged(InDataTable, InRowName);

	bool bNotify = true;
	if (bNotify)
	{
		OnProjectileTableRowChanged.Broadcast();
	}
}
#endif
//-----------------------------------------------------------------------------------

AActorProjectile::AActorProjectile()
{
	{
		// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
		PrimaryActorTick.bCanEverTick = true;

		StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
		RootComponent = StaticMeshComponent;
		StaticMeshComponent->SetCollisionProfileName(CollisionProfileName::Projectile);
		StaticMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &ThisClass::OnMeshBeginOverlap);


		AdditionalStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AdditionalStaticMeshComponent"));
		AdditionalStaticMeshComponent->SetupAttachment(RootComponent);
		AdditionalStaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	
		

		// StaticMeshComponent->SetCollisionProfileName(CollisionProfileName::Projectile);
		// StaticMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &ThisClass::OnMeshBeginOverlap);
	}

	

}

void AActorProjectile::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	UpdateData();

	if (Data)
	{
#if WITH_EDITOR
		// Does it need release function?
		ProjectileTableRowChangedHandle = Data->OnProjectileTableRowChanged.AddUObject(this, &ThisClass::UpdateData);
#endif
		UpdateData();
	}

}

void AActorProjectile::SetData(const FDataTableRowHandle& InDataTableRowHandle)
{

	DataTableRowHandle = InDataTableRowHandle;
	if (DataTableRowHandle.IsNull()) { return; }
	Data = DataTableRowHandle.GetRow<FProjectileTableRow>(TEXT("Projectile"));
	if (!Data) { ensure(false); return; }

	{
		if(Data)
		{
			bIsFriendly = Data->bFriendly;
		}
	}

	{
		StaticMeshComponent->SetStaticMesh(Data->StaticMesh);
		StaticMeshComponent->SetRelativeScale3D(Data->Scale);

		if(Data->AdditionalStaticMesh)
		{
			AdditionalStaticMeshComponent->SetStaticMesh(Data->AdditionalStaticMesh);
			AdditionalStaticMeshComponent->SetRelativeTransform(Data->AdditionalTransform);
		}

		if (Data->bOnlyPawn)
		{
			StaticMeshComponent->SetCollisionProfileName(CollisionProfileName::PawnTrigger);
		}
		else
		{
			StaticMeshComponent->SetCollisionProfileName(CollisionProfileName::Projectile);
		}

		//StaticMeshComponent->MoveIgnoreActors.Empty();
		//StaticMeshComponent->MoveIgnoreActors.Add(GetOwner());
	
	}

	{
		if (Data)
		{
			ProjectileMovementComponent->InitialSpeed = Data->InitialSpeed;
			ProjectileMovementComponent->MaxSpeed = Data->MaxSpeed;
			ProjectileMovementComponent->ProjectileGravityScale = Data->ProjectileGravityScale;
			InitialLifeSpan = Data->InitialLifeSpan;
		}
	}

	{	// MID
		if (Data && Data->bMID)
		{
			for (int32 i = 0; i < StaticMeshComponent->GetNumMaterials(); ++i)
			{
				UMaterialInstanceDynamic* MID = StaticMeshComponent->CreateDynamicMaterialInstance(i);
				StaticMeshComponent->SetMaterial(i, MID);
			

				MID->SetVectorParameterValue(TEXT("BaseColor"), Data->MIDColor_temp); // temp
			}
		}
		else
		{
			for (int32 i = 0; i < StaticMeshComponent->GetNumMaterials(); ++i)
			{
				StaticMeshComponent->SetMaterial(i, Data->StaticMesh->GetMaterial(i));
			}
		}
	}


	{	// Shot Status;
		Damage = Data->Damage;
		FinalDamage = Damage; // + Something

		ShotDelay = Data->ShotDelay;
	}

}

void AActorProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!WithEffect)
	{
		WithEffect = AddEffect();
		if (Data)
		{
			//WithEffect->SetData(Data->WithEffectTableRowHandle);
		}
	}
}

void AActorProjectile::UpdateData()
{
	SetData(DataTableRowHandle);
}

void AActorProjectile::Destroy()
{
	Super::Destroy();

	
}

void AActorProjectile::OnMeshBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	FVector Location = GetActorLocation();
	if (!IsValid(this)) { return; }
	
	AActorBase* OtherActorBase = Cast<AActorBase>(OtherActor);
	APawnBase* OtherPawnBase = Cast<APawnBase>(OtherActor);
	ACharacterBase* Chara = Cast<ACharacterBase>(OtherActor);

	if((OtherActorBase && !OtherActorBase->IsFriendly()) || (OtherPawnBase && !OtherPawnBase->IsFriendly()))
	{
		if (!bFromSweep)
		{
			Destroy();
			//check(false);
			return;
		}

		FTransform NewTransform;
		NewTransform.SetLocation(SweepResult.ImpactPoint);
		FRotator Rotation = UKismetMathLibrary::Conv_VectorToRotator(SweepResult.ImpactNormal);
		NewTransform.SetRotation(Rotation.Quaternion());
		GetWorld()->GetSubsystem<UActorPoolSubsystem>()->SpawnHitEffectWithDecal(NewTransform, Data->HitEffectTableRowHandle);
		Destroy();

		UGameplayStatics::ApplyDamage(OtherActor, FinalDamage, GetInstigator()->GetController(), this, nullptr);
	}

	else if (Chara && !IsFriendly())
	{
		Chara->StatusComponent->OnDie.Broadcast();

		if (!bFromSweep)
		{
			Destroy();
			return;
		}
	}
	else
	{
		return;
	}
}
	

AEffectBase* AActorProjectile::AddEffect(AEffectBase* InTemplate)
{
	//UWorld* World = GetWorld();
	//FActorSpawnParameters ActorSpawnParameters;
	//ActorSpawnParameters.Owner = this;
	//ActorSpawnParameters.Template = InTemplate;
	//ActorSpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	//ActorSpawnParameters.TransformScaleMethod = ESpawnActorScaleMethod::OverrideRootScale;
	//
	//AEffectBase* EffectBase = World->SpawnActor<AEffectBase>(AEffectBase::StaticClass(), FTransform::Identity, ActorSpawnParameters);
	//
	//if (!InTemplate)
	//{
	//	EffectBase->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	//}
	//
	//return EffectBase;
	return nullptr;
}

