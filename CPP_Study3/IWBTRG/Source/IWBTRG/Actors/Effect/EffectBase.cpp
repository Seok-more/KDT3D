// Fill out your copyright notice in the Description page of Project Settings.


#include "EffectBase.h"
#include "Kismet/GameplayStatics.h"


FEffectBaseTableRow::FEffectBaseTableRow()
	: EffectClass(AEffectBase::StaticClass())
{
}

void FEffectBaseTableRow::OnPostDataImport(const UDataTable* InDataTable, const FName InRowName, TArray<FString>& OutCollectedImportProblems)
{
	Super::OnPostDataImport(InDataTable, InRowName, OutCollectedImportProblems);
}

void FEffectBaseTableRow::OnDataTableChanged(const UDataTable* InDataTable, const FName InRowName)
{
	Super::OnDataTableChanged(InDataTable, InRowName);
	
	bool bNotify = true;
	if (bNotify)
	{
		OnEffectBaseTableRowChanged.Broadcast();
	}
}

//------------------------------------------------------------------------------------------------------------------------------------


// Sets default values
AEffectBase::AEffectBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	{
		DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
		ParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent"));
		ParticleSystemComponent->SetupAttachment(DefaultSceneRoot);
		ParticleSystemComponent->bAutoActivate = false;
		RootComponent = DefaultSceneRoot;
	}


}

void AEffectBase::SetData(const FDataTableRowHandle& InDataTableRowHandle)
{
	DataTableRowHandle = InDataTableRowHandle;
	if (DataTableRowHandle.IsNull()) { return; }
	Data = DataTableRowHandle.GetRow<FEffectBaseTableRow>(TEXT("EffectBase"));
	if (!Data) { ensure(false); return; }

	{	// Class Check
		if (Data->EffectClass != GetClass())
		{
			ensureMsgf(false, TEXT("Class is not equal to DataTable")); 
		}
	}

	Sound = Data->Sound;
	VolumeMultiplier = Data->VolumeMultiplier;

	ParticleSystemComponent->SetRelativeTransform(Data->ParticleTransform);
	ParticleSystemComponent->SetTemplate(Data->Particle);

	SetLifeSpan(Data->LifeSpan);

}

void AEffectBase::Play()
{
	UpdateData();

	if (Data && !Data->bIsLooped)
	{
		PlaySound();
		PlayParticle();
	}
	else if (Data && Data->bIsLooped)
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AEffectBase::RePlay, Data->LoopTime, Data->bIsLooped, 0.0f);
	}
}

void AEffectBase::RePlay()
{
	PlaySound();
	PlayParticle();

	bIsPlay = true;
	// If you have to Reset Paritcle while Looping.
	//ParticleSystemComponent->ResetParticles();
	//ParticleSystemComponent->ActivateSystem(true);
}

// Called when the game starts or when spawned
void AEffectBase::BeginPlay()
{
	Super::BeginPlay();
	Play();
}

void AEffectBase::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	UpdateData();

	if (Data)
	{
#if WITH_EDITOR
		EffectBaseTableRowChangedHandle = Data->OnEffectBaseTableRowChanged.AddUObject(this, &ThisClass::UpdateData);
#endif
		UpdateData();
	}


}

void AEffectBase::UpdateData()
{
	SetData(DataTableRowHandle);

	{
		OwnerActor = GetOwner();
	}

}

void AEffectBase::PlaySound()
{
	const FVector Location = GetActorLocation();

	if (Data && !Data->bIsFollowing)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), Sound, Location, VolumeMultiplier);
	}
	else if (Data && Data->bIsFollowing)
	{
		UGameplayStatics::SpawnSoundAttached(Sound, DefaultSceneRoot, 
			NAME_None, FVector::ZeroVector, EAttachLocation::KeepRelativeOffset, true);
	}	
}

void AEffectBase::PlayParticle()
{
	ParticleSystemComponent->ActivateSystem(true);
	//UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), PSTemplate, GetActorTransform());

	
}

// Called every frame
void AEffectBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bIsPlay)
	{
		RePlay();
	}

	
}


