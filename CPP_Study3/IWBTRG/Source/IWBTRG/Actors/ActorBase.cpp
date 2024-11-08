// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorBase.h"
#include "Engine/SkinnedAssetCommon.h"
#include "Components/SphereComponent.h"


FActorBaseTableRow::FActorBaseTableRow()
{

}

#if WITH_EDITOR
void FActorBaseTableRow::OnDataTableChanged(const UDataTable* InDataTable, const FName InRowName)
{
	Super::OnDataTableChanged(InDataTable, InRowName);

	bool bNotify = true;
	if (bNotify)
	{
		OnActorBaseTableRowChanged.Broadcast();
	}

}
#endif

//------------------------------------------------------------------------------------------------------------------------------------------------------


// Sets default values
AActorBase::AActorBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UBoxComponent>(TEXT("Collider")))
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	{
		DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
		RootComponent = DefaultSceneRoot;
	
	}

	{	
		StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
		StaticMeshComponent->SetupAttachment(RootComponent);
	
		SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
		SkeletalMeshComponent->SetupAttachment(RootComponent);
	}

	{
		StaticMeshComponent->OnComponentHit.AddDynamic(this, &ThisClass::OnMeshHit);
		SkeletalMeshComponent->OnComponentHit.AddDynamic(this, &ThisClass::OnMeshHit);

		StaticMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &ThisClass::OnMeshBeginOverlap);
		SkeletalMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &ThisClass::OnMeshBeginOverlap);

		StaticMeshComponent->OnComponentEndOverlap.AddDynamic(this, &ThisClass::OnMeshEndOverlap);
		SkeletalMeshComponent->OnComponentEndOverlap.AddDynamic(this, &ThisClass::OnMeshEndOverlap);
	}

	{
		Collider = CreateDefaultSubobject<UShapeComponent>(TEXT("Collider"));
		Collider->SetupAttachment(RootComponent);

		Collider->OnComponentHit.AddDynamic(this, &ThisClass::OnColliderHit);
		Collider->OnComponentBeginOverlap.AddDynamic(this, &ThisClass::OnColliderBeginOverlap);
		Collider->OnComponentEndOverlap.AddDynamic(this, &ThisClass::OnColliderEndOverlap);

	}


	{
		StatusComponent = CreateDefaultSubobject<UStatusComponent>(TEXT("StatusComponent"));
	}

		

}

AActorBase::~AActorBase()
{
	
}


// Called when the game starts or when spawned
void AActorBase::BeginPlay()
{
	Super::BeginPlay();

	UpdateData();
	
}

void AActorBase::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	UpdateData();

	// Data->OnActorBaseTableRowChanged.Remove(ActorBaseTableRowChangedHandle);

	if (Data)
	{
#if WITH_EDITOR
		// Does it need release function?
		ActorBaseTableRowChangedHandle = Data->OnActorBaseTableRowChanged.AddUObject(this, &ThisClass::UpdateData);
#endif
		UpdateData();
	}


}


void AActorBase::UpdateData()
{
	SetData(DataTableRowHandle);
}

// Called every frame
void AActorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AActorBase::SetData(const FDataTableRowHandle& InDataTableRowHandle)
{
	DataTableRowHandle = InDataTableRowHandle;
	if (DataTableRowHandle.IsNull()) { return; }
	Data = DataTableRowHandle.GetRow<FActorBaseTableRow>(TEXT("Actor"));
	if (!Data) { ensure(false); return; }

	{	// Class Check
		if (Data->ActorClass != GetClass())
		{
			ensureMsgf(false, TEXT("Class is not equal to DataTable"));
		}

		// IsFriendly
		if (Data)
		{
			bIsFriendly = Data->bFriendly;
		}

	}

	{	// Mesh
		if (Data->bStaticMesh)
		{
			StaticMeshComponent->SetStaticMesh(Data->StaticMesh);
			SkeletalMeshComponent->SetSkeletalMesh(nullptr);
		}
		else
		{
			StaticMeshComponent->SetStaticMesh(nullptr);
		}


		if (Data->bSkeletalMesh)
		{
			SkeletalMeshComponent->SetSkeletalMesh(Data->SkeletalMesh);
			StaticMeshComponent->SetStaticMesh(nullptr);
		}
		else
		{
			SkeletalMeshComponent->SetSkeletalMesh(nullptr);
		}

		{
			StaticMeshComponent->SetRelativeScale3D(Data->Scale);
			StaticMeshComponent->SetRelativeRotation(Data->Rotation);
			

			SkeletalMeshComponent->SetRelativeScale3D(Data->Scale);
			SkeletalMeshComponent->SetRelativeRotation(Data->Rotation);
			
			// Collision
			if (Data->bMeshCollision)
			{
				//StaticMeshComponent->SetCollisionProfileName(CollisionProfileName::PawnBlock);
				//SkeletalMeshComponent->SetCollisionProfileName(CollisionProfileName::PawnBlock);

				StaticMeshComponent->SetCollisionProfileName(TEXT("BlockAll"));
				SkeletalMeshComponent->SetCollisionProfileName(TEXT("BlockAll"));
			}
			else
			{
				StaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				SkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			}

			// WorldLocation
			if (Data->bWorldLocation)
			{
				StaticMeshComponent->SetWorldLocation(Data->Location);
				SkeletalMeshComponent->SetWorldLocation(Data->Location);
			}
			else
			{
				StaticMeshComponent->SetRelativeLocation(Data->Location);
				SkeletalMeshComponent->SetRelativeLocation(Data->Location);
			}
		}
	}

	{	// Collider
		
		if (!Data->bMeshCollision)
		{
			Collider->SetVisibility(true);
			UBoxComponent* BoxComponent = Cast<UBoxComponent>(Collider);

			if (Data->bStaticMesh)
			{
				FBoxSphereBounds BoxSphereBounds = Data->StaticMesh->GetBounds();
				const FVector Scale3D = StaticMeshComponent->GetRelativeScale3D();
				const FVector NewBoxExtent = BoxSphereBounds.BoxExtent * Scale3D;
				BoxComponent->InitBoxExtent(NewBoxExtent);

				const FVector NewLocation = BoxSphereBounds.Origin;
				Collider->SetRelativeLocation(NewLocation);
			}

			else if (Data->bSkeletalMesh)
			{
				FBoxSphereBounds BoxSphereBounds = Data->SkeletalMesh->GetBounds();
				const FVector Scale3D = SkeletalMeshComponent->GetRelativeScale3D();
				const FVector NewBoxExtent = BoxSphereBounds.BoxExtent * Scale3D;
				BoxComponent->InitBoxExtent(NewBoxExtent);

				const FVector NewLocation = BoxSphereBounds.Origin;
				Collider->SetRelativeLocation(NewLocation);
			}

			//BoxComponent->SetCollisionProfileName(CollisionProfileName::PawnTrigger);
			BoxComponent->SetCollisionProfileName(TEXT("BlockAll"));
		}

		else
		{
			Collider->SetVisibility(false);
			Collider->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		}

		

	}



	{	// MID
		if (Data && Data->bMID)
		{
			if (!Data->bSkeletalMesh && !Data->bStaticMesh)
			{
				Data->bMID = false;
			}

			if (Data->bStaticMesh)
			{
				for (int32 i = 0; i < StaticMeshComponent->GetNumMaterials(); ++i)
				{
					UMaterialInstanceDynamic* MID = StaticMeshComponent->CreateDynamicMaterialInstance(i);
					StaticMeshComponent->SetMaterial(i, MID);
					bHasMID = true;

					MID->SetVectorParameterValue(TEXT("BaseColor"), Data->MIDColor_temp); // temp
				}
			}
			
			else if (Data->bSkeletalMesh)
			{
				for (int32 i = 0; i < SkeletalMeshComponent->GetNumMaterials(); ++i)
				{
					UMaterialInstanceDynamic* MID = SkeletalMeshComponent->CreateDynamicMaterialInstance(i);
					SkeletalMeshComponent->SetMaterial(i, MID);
					bHasMID = true;

					MID->SetVectorParameterValue(TEXT("BaseColor"), Data->MIDColor_temp); // temp
				}
			}
		}
		else
		{
			if (Data->bStaticMesh)
			{
				for (int32 i = 0; i < StaticMeshComponent->GetNumMaterials(); ++i)
				{				
					StaticMeshComponent->SetMaterial(i, Data->StaticMesh->GetMaterial(i));
					bHasMID = false;
				}
			}

			else if (Data->bSkeletalMesh && Data->SkeletalMesh)
			{
				
				TArray<FSkeletalMaterial> Materials = Data->SkeletalMesh->GetMaterials();

				for (int32 i = 0; i < Materials.Num(); ++i)
				{
					UMaterialInterface* Material = Materials[i].MaterialInterface;
					SkeletalMeshComponent->SetMaterial(i, Material);
					bHasMID = false;

				}
			}
		}
	
	}

	{	// Projectile
		ProjectileData = Data->Projectile.GetRow<FProjectileTableRow>(TEXT("Projectile"));
	}
}

void AActorBase::Destroy()
{
	Super::Destroy();

}

void AActorBase::OnMeshHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Mesh Hit with actor: %s"), *OtherActor->GetName());

		// 충돌 위치
		//UE_LOG(LogTemp, Warning, TEXT("Hit location: %s"), *Hit.ImpactPoint.ToString());
	}
}

void AActorBase::OnMeshBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Mesh Begin MeshOverlap with actor: %s"), *OtherActor->GetName());
	}
}

void AActorBase::OnMeshEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Mesh End MeshOverlap with actor: %s"), *OtherActor->GetName());
	}
}

void AActorBase::OnColliderBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Collider Begin ColliderOverlap with actor: %s"), *OtherActor->GetName());
	}
}

void AActorBase::OnColliderEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Collider End ColliderOverlap with actor: %s"), *OtherActor->GetName());
	}
}

void AActorBase::OnColliderHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Collider Hit with actor: %s"), *OtherActor->GetName());
	}
}



void AActorBase::OnActive_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("OnActive"));
}

void AActorBase::OnDeactive_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	UE_LOG(LogTemp, Warning, TEXT("OnDeactive"));
}


#if WITH_EDITOR

void AActorBase::PreEditChange(FProperty* PropertyAboutToChange)
{
	Super::PreEditChange(PropertyAboutToChange);
	const FString PropertyName = PropertyAboutToChange->GetName();

	if (PropertyName == GET_MEMBER_NAME_CHECKED(ThisClass, Effects))
	{
		PrevEffects = Effects;
	}

	else if (PropertyName == GET_MEMBER_NAME_CHECKED(ThisClass, TriggerBoxes))
	{
		PrevTriggerBoxes = TriggerBoxes;
	}
}

void AActorBase::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	const FString PropertyName = PropertyChangedEvent.Property->GetName();

	if (PropertyName == GET_MEMBER_NAME_CHECKED(ThisClass, Effects))
	{
		const int32 Index = PropertyChangedEvent.GetArrayIndex(PropertyName);
		switch (PropertyChangedEvent.ChangeType)
		{
		case EPropertyChangeType::ArrayAdd:
		{
			Effects[Index] = AddEffect();
			break;
		}
		case EPropertyChangeType::ArrayRemove:
		{
			if (PrevEffects[Index])
			{
				AEffectBase_UnPooled* EffectBase = PrevEffects[Index];
				EffectBase->Destroy();
			}
			break;
		}
		case EPropertyChangeType::Duplicate:
		{
			if (PrevEffects[Index])
			{
				Effects[Index] = AddEffect(PrevEffects[Index]);
			}
			break;
		}
		case EPropertyChangeType::ArrayClear:
		{
			for (AEffectBase_UnPooled* EffectBase : PrevEffects)
			{
				if (EffectBase)
				{
					EffectBase->Destroy();
				}
			}
			break;
		}
		default:
			check(false);
			break;
		}
		PrevEffects.Empty();
	}


	else if (PropertyName == GET_MEMBER_NAME_CHECKED(ThisClass, TriggerBoxes))
	{
		const int32 Index = PropertyChangedEvent.GetArrayIndex(PropertyName);
		switch (PropertyChangedEvent.ChangeType)
		{
		case EPropertyChangeType::ArrayAdd:
		{
			TriggerBoxes[Index] = AddTriggerBox();
			break;
		}
		case EPropertyChangeType::ArrayRemove:
		{
			if (PrevTriggerBoxes[Index])
			{
				ATriggerBoxBase* TriggerBoxBase = PrevTriggerBoxes[Index];
				TriggerBoxBase->Destroy();
			}
			break;
		}
		case EPropertyChangeType::Duplicate:
		{
			if (PrevTriggerBoxes[Index])
			{
				TriggerBoxes[Index] = AddTriggerBox(PrevTriggerBoxes[Index]);
			}
			break;
		}
		case EPropertyChangeType::ArrayClear:
		{
			for (ATriggerBoxBase* TriggerBoxBase : PrevTriggerBoxes)
			{
				if (TriggerBoxBase)
				{
					TriggerBoxBase->Destroy();
				}
			}
			break;
		}
		default:
			check(false);
			break;
		}
		PrevTriggerBoxes.Empty();
	}
}

AEffectBase_UnPooled* AActorBase::AddEffect(AEffectBase_UnPooled* InTemplate)
{
	
	
	UWorld* World = GetWorld();
	FActorSpawnParameters ActorSpawnParameters;
	ActorSpawnParameters.Owner = this;
	ActorSpawnParameters.Template = InTemplate;
	ActorSpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	ActorSpawnParameters.TransformScaleMethod = ESpawnActorScaleMethod::OverrideRootScale;

	AEffectBase_UnPooled* EffectBase = World->SpawnActor<AEffectBase_UnPooled>(AEffectBase_UnPooled::StaticClass(), FTransform::Identity, ActorSpawnParameters);

	if (!InTemplate)
	{
		//EffectBase->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
		EffectBase->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	}

	return EffectBase;
	
}

ATriggerBoxBase* AActorBase::AddTriggerBox(ATriggerBoxBase* InTemplate)
{
	
	
	UWorld* World = GetWorld();
	FActorSpawnParameters ActorSpawnParameters;
	ActorSpawnParameters.Owner = this;
	ActorSpawnParameters.Template = InTemplate;
	ActorSpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	ActorSpawnParameters.TransformScaleMethod = ESpawnActorScaleMethod::OverrideRootScale;

	ATriggerBoxBase* TriggerBoxBase = World->SpawnActor<ATriggerBoxBase>(ATriggerBoxBase::StaticClass(), FTransform::Identity, ActorSpawnParameters);

	if (!InTemplate)
	{
		//TriggerBoxBase->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
		TriggerBoxBase->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	}

	return TriggerBoxBase;
	
}

#endif


