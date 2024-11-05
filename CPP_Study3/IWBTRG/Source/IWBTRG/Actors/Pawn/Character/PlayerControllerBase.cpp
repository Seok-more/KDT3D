// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerControllerBase.h"
#include "Kismet/KismetMathLibrary.h"
#include "System/PlayerCameraManagerBase.h"
#include "CharacterBase.h"
#include "Components/StatusComponent.h"
#include "System/MainHUD.h"
#include "GameFramework/Character.h"

APlayerControllerBase::APlayerControllerBase()
{
	{
		static ConstructorHelpers::FObjectFinder<UInputMappingContext> Asset
		{ TEXT("/Script/EnhancedInput.InputMappingContext'/Game/Data/Input/Base/IMC_Base.IMC_Base'") };

		check(Asset.Object);

		IMC_Emergency.Add(Asset.Object);
	}

	PlayerCameraManagerClass = APlayerCameraManagerBase::StaticClass();
}

void APlayerControllerBase::BeginPlay()
{
	Super::BeginPlay();

	{
		SpringArm = GetPawn()->GetComponentByClass<UZoomSpringArmComponent>();
		check(SpringArm);	

		Camera = GetPawn()->GetComponentByClass<UCameraComponent>();
		check(Camera);
	}
	UpdateData();
	SetupInputComponent();

	UEnhancedInputLocalPlayerSubsystem* Subsystem =
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	
	for (UInputMappingContext* IMC : IMC_Array)
	{
		Subsystem->AddMappingContext(IMC, 0);
	}
}

void APlayerControllerBase::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent);
	ensure(EnhancedInputComponent);

	if (const UInputAction* InputAction = FUtils::GetInputActionFromName(IMC_Array, TEXT("IA_Move")))
	{
		EnhancedInputComponent->BindAction(InputAction, ETriggerEvent::Triggered, this, &ThisClass::OnMove);
		UE_LOG(LogTemp, Warning, TEXT("IA_Move is abled"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("IA_Move is disabled"));
	}


	if (const UInputAction* InputAction = FUtils::GetInputActionFromName(IMC_Array, TEXT("IA_LookMouse")))
	{
		EnhancedInputComponent->BindAction(InputAction, ETriggerEvent::Triggered, this, &ThisClass::OnLook);
		UE_LOG(LogTemp, Warning, TEXT("IA_LookMouse is abled"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("IA_LookMouse is disabled"));
	}

	if (const UInputAction* InputAction = FUtils::GetInputActionFromName(IMC_Array, TEXT("IA_Zoom")))
	{
		EnhancedInputComponent->BindAction(InputAction, ETriggerEvent::Triggered, this, &ThisClass::OnZoomIn);
		EnhancedInputComponent->BindAction(InputAction, ETriggerEvent::Completed, this, &ThisClass::OnZoomOut);
		UE_LOG(LogTemp, Warning, TEXT("IA_Zoom is abled"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("IA_Zoom is disabled"));
	}

	if (const UInputAction* InputAction = FUtils::GetInputActionFromName(IMC_Array, TEXT("IA_Jump")))
	{
		EnhancedInputComponent->BindAction(InputAction, ETriggerEvent::Started, this, &ThisClass::OnJump);
		UE_LOG(LogTemp, Warning, TEXT("IA_Jump is abled"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("IA_Jump is disabled"));
	}

	if (const UInputAction* InputAction = FUtils::GetInputActionFromName(IMC_Array, TEXT("IA_Crouch")))
	{
		EnhancedInputComponent->BindAction(InputAction, ETriggerEvent::Triggered, this, &ThisClass::OnCrouch);
		EnhancedInputComponent->BindAction(InputAction, ETriggerEvent::Completed, this, &ThisClass::OnUnCrouch);
		UE_LOG(LogTemp, Warning, TEXT("IA_Crouch is abled"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("IA_Crouch is disabled"));
	}

	if (const UInputAction* InputAction = FUtils::GetInputActionFromName(IMC_Array, TEXT("IA_Pick")))
	{
		EnhancedInputComponent->BindAction(InputAction, ETriggerEvent::Started, this, &ThisClass::OnPick);
		UE_LOG(LogTemp, Warning, TEXT("IA_Pick is abled"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("IA_Pick is disabled"));
	}

	if (const UInputAction* InputAction = FUtils::GetInputActionFromName(IMC_Array, TEXT("IA_Shot")))
	{
		EnhancedInputComponent->BindAction(InputAction, ETriggerEvent::Started, this, &ThisClass::OnShot
		);
		UE_LOG(LogTemp, Warning, TEXT("IA_Shot is abled"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("IA_Shot is disabled"));
	}

	if (const UInputAction* InputAction = FUtils::GetInputActionFromName(IMC_Array, TEXT("IA_Reset")))
	{
		EnhancedInputComponent->BindAction(InputAction, ETriggerEvent::Started, this, &ThisClass::OnReset);
		UE_LOG(LogTemp, Warning, TEXT("IA_Reset is abled"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("IA_Reset is disabled"));
	}


}

void APlayerControllerBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void APlayerControllerBase::UpdateData()
{
	ACharacterBase* Chara = Cast<ACharacterBase>(GetCharacter());

	if (Chara && Chara->Data) 
	{
		IMC_Array = Chara->Data->IMCs;
	}
	else
	{
		IMC_Array = IMC_Emergency;
	}

}

void APlayerControllerBase::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	StatusComponent = InPawn->GetComponentByClass<UStatusComponent>();
	check(StatusComponent);


}

void APlayerControllerBase::OnMove(const FInputActionValue& InputActionValue)
{
	if (StatusComponent && !StatusComponent->CanMove()) { return; }
	const FVector2D ActionValue = InputActionValue.Get<FVector2D>();
	const FRotator Rotation = K2_GetActorRotation();
	const FRotator RotationYaw = FRotator(0.0, Rotation.Yaw, 0.0);
	const FVector ForwardVector = UKismetMathLibrary::GetForwardVector(RotationYaw);
	const FVector RightVector = UKismetMathLibrary::GetRightVector(RotationYaw);

	APawn* ControlledPawn = GetPawn();
	ControlledPawn->AddMovementInput(ForwardVector, ActionValue.X);
	ControlledPawn->AddMovementInput(RightVector, ActionValue.Y);
}

void APlayerControllerBase::OnLook(const FInputActionValue& InputActionValue)
{
	const FVector2D ActionValue = InputActionValue.Get<FVector2D>();

	AddYawInput(ActionValue.X);
	AddPitchInput(-ActionValue.Y);
}


void APlayerControllerBase::OnZoomIn(const FInputActionValue& InputActionValue)
{
	SpringArm->SetDesiredZoom(100.f);
	//Camera->SetFieldOfView(70.f);

	ACharacterBase* ControlledChara = Cast<ACharacterBase>(GetPawn());
	UStatusComponent* Status = ControlledChara->GetComponentByClass<UStatusComponent>();
	Status->SetIsAimming(true);
}


void APlayerControllerBase::OnZoomOut(const FInputActionValue& InputActionValue)
{
	SpringArm->SetDesiredZoom(300.f);
	//Camera->SetFieldOfView(90.f);

	ACharacterBase* ControlledChara = Cast<ACharacterBase>(GetPawn());
	UStatusComponent* Status = ControlledChara->GetComponentByClass<UStatusComponent>();
	Status->SetIsAimming(false);
}

void APlayerControllerBase::OnJump(const FInputActionValue& InputActionValue)
{
	ACharacter* ControlledChara = Cast<ACharacter>(GetPawn());
	ControlledChara->Jump();
}


void APlayerControllerBase::OnCrouch(const FInputActionValue& InputActionValue)
{
	if (StatusComponent && !StatusComponent->CanMove()) { return; }

	ACharacter* ControlledChara = Cast<ACharacter>(GetPawn());
	if (ControlledChara->GetMovementComponent()->IsFalling()) { return; }
	ControlledChara->Crouch();
}

void APlayerControllerBase::OnUnCrouch(const FInputActionValue& InputActionValue)
{
	if (StatusComponent && !StatusComponent->CanMove()) { return; }

	ACharacter* ControlledChara = Cast<ACharacter>(GetPawn());
	ControlledChara->UnCrouch();
}

void APlayerControllerBase::OnPick(const FInputActionValue& InputActionValue)
{
	ACharacterBase* ControlledChara = Cast<ACharacterBase>(GetPawn());

	if (ControlledChara)
	{
		if (ControlledChara->OverlappedItems.IsEmpty()) { return; }

		AActorBase* Item = static_cast<AActorBase*>(*(ControlledChara->OverlappedItems).begin());
		// Use item function needed
		Item->Destroy();
	}
}

void APlayerControllerBase::OnShot(const FInputActionValue& InputActionValue)
{
	Attack();
}

void APlayerControllerBase::OnReset(const FInputActionValue& InputActionValue)
{
	AMainHUD* MainHUD = Cast<AMainHUD>(GetHUD());
	MainHUD->OpenCurrentLevelFromReset();
}


//-------------------------------------------------------------------

void APlayerControllerBase::Attack()
{
	ACharacterBase* ControlledChara = Cast<ACharacterBase>(GetPawn());
	if (ControlledChara->Data->ShotMontage)
	{
		UAnimInstance* AnimInstance = ControlledChara->SkeletalMeshComponent->GetAnimInstance();
		
		if (!AnimInstance->Montage_IsPlaying(nullptr))
		{
			if (ControlledChara->StatusComponent->IsAimming())
			{
				AnimInstance->Montage_Play(ControlledChara->Data->ShotMontage);
			}
			else
			{
				ControlledChara->StatusComponent->CanMove();
				AnimInstance->Montage_Play(ControlledChara->Data->AttackMontage);
			}
		}
	}
}



