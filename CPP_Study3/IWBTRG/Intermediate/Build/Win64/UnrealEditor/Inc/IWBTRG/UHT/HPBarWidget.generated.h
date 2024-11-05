// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/HPBarWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IWBTRG_HPBarWidget_generated_h
#error "HPBarWidget.generated.h already included, missing '#pragma once' in HPBarWidget.h"
#endif
#define IWBTRG_HPBarWidget_generated_h

#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_UI_HPBarWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHiddenUI); \
	DECLARE_FUNCTION(execOnDie); \
	DECLARE_FUNCTION(execOnHPChanged);


#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_UI_HPBarWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHPBarWidget(); \
	friend struct Z_Construct_UClass_UHPBarWidget_Statics; \
public: \
	DECLARE_CLASS(UHPBarWidget, UWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IWBTRG"), NO_API) \
	DECLARE_SERIALIZER(UHPBarWidget)


#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_UI_HPBarWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHPBarWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHPBarWidget(UHPBarWidget&&); \
	UHPBarWidget(const UHPBarWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHPBarWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHPBarWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHPBarWidget) \
	NO_API virtual ~UHPBarWidget();


#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_UI_HPBarWidget_h_14_PROLOG
#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_UI_HPBarWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_UI_HPBarWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_UI_HPBarWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_UI_HPBarWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IWBTRG_API UClass* StaticClass<class UHPBarWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_UI_HPBarWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
