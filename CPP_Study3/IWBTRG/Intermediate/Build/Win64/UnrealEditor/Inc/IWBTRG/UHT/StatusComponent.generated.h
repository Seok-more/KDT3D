// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/StatusComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IWBTRG_StatusComponent_generated_h
#error "StatusComponent.generated.h already included, missing '#pragma once' in StatusComponent.h"
#endif
#define IWBTRG_StatusComponent_generated_h

#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_StatusComponent_h_9_DELEGATE \
IWBTRG_API void FOnHPChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHPChanged, float CurrentHP, float MaxHP);


#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_StatusComponent_h_10_DELEGATE \
IWBTRG_API void FOnStaminaChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStaminaChanged, float CurrentStamina, float MaxStamina);


#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_StatusComponent_h_11_DELEGATE \
IWBTRG_API void FOnShotChanged_DelegateWrapper(const FMulticastScriptDelegate& OnShotChanged, int32 CurrentProjectileNum);


#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_StatusComponent_h_12_DELEGATE \
IWBTRG_API void FOnDie_DelegateWrapper(const FMulticastScriptDelegate& OnDie);


#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_StatusComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatusComponent(); \
	friend struct Z_Construct_UClass_UStatusComponent_Statics; \
public: \
	DECLARE_CLASS(UStatusComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IWBTRG"), NO_API) \
	DECLARE_SERIALIZER(UStatusComponent)


#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_StatusComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStatusComponent(UStatusComponent&&); \
	UStatusComponent(const UStatusComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatusComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatusComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStatusComponent) \
	NO_API virtual ~UStatusComponent();


#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_StatusComponent_h_14_PROLOG
#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_StatusComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_StatusComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_StatusComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IWBTRG_API UClass* StaticClass<class UStatusComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_StatusComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
