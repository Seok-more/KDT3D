// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Misc/Utils.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/ZoomSpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "PlayerControllerBase.generated.h"

/**
 * 
 */
UCLASS()
class IWBTRG_API APlayerControllerBase : public APlayerController
{
	GENERATED_BODY()

public:
	APlayerControllerBase();

public:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	virtual void Tick(float DeltaTime) override;

	virtual void UpdateData();

protected:
	virtual void OnPossess(APawn* InPawn);

protected: // Input
	void OnMove(const FInputActionValue& InputActionValue);
	void OnLook(const FInputActionValue& InputActionValue);

	void OnZoomIn(const FInputActionValue& InputActionValue);
	void OnZoomOut(const FInputActionValue& InputActionValue);

	void OnJump(const FInputActionValue& InputActionValue);

	void OnCrouch(const FInputActionValue& InputActionValue);
	void OnUnCrouch(const FInputActionValue& InputActionValue);

	void OnPick(const FInputActionValue& InputActionValue);

	void OnShot(const FInputActionValue& InputActionValue);

	void OnReset(const FInputActionValue& InputActionValue);

protected:	// Input method
	void Attack();

protected: 
	UPROPERTY()
	class UStatusComponent* StatusComponent;


protected:
	UZoomSpringArmComponent* SpringArm;
	UCameraComponent* Camera;

	// CharacterBaseTableRow->IMCs 
	TArray<UInputMappingContext*> IMC_Array;
	TArray<UInputMappingContext*> IMC_Emergency;
};
