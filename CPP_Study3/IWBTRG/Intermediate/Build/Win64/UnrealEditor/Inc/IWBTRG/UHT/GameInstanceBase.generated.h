// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/GameInstanceBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IWBTRG_GameInstanceBase_generated_h
#error "GameInstanceBase.generated.h already included, missing '#pragma once' in GameInstanceBase.h"
#endif
#define IWBTRG_GameInstanceBase_generated_h

#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_GameInstanceBase_h_11_DELEGATE \
IWBTRG_API void FOnTempSave_DelegateWrapper(const FMulticastScriptDelegate& OnTempSave);


#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_GameInstanceBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameInstanceBase(); \
	friend struct Z_Construct_UClass_UGameInstanceBase_Statics; \
public: \
	DECLARE_CLASS(UGameInstanceBase, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IWBTRG"), NO_API) \
	DECLARE_SERIALIZER(UGameInstanceBase)


#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_GameInstanceBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameInstanceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameInstanceBase(UGameInstanceBase&&); \
	UGameInstanceBase(const UGameInstanceBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameInstanceBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInstanceBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInstanceBase) \
	NO_API virtual ~UGameInstanceBase();


#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_GameInstanceBase_h_15_PROLOG
#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_GameInstanceBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_GameInstanceBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_GameInstanceBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IWBTRG_API UClass* StaticClass<class UGameInstanceBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_System_GameInstanceBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
