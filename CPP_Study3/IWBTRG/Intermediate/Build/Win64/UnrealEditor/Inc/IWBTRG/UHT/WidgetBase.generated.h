// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/WidgetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IWBTRG_WidgetBase_generated_h
#error "WidgetBase.generated.h already included, missing '#pragma once' in WidgetBase.h"
#endif
#define IWBTRG_WidgetBase_generated_h

#define FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_UI_WidgetBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetBase(); \
	friend struct Z_Construct_UClass_UWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UWidgetBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IWBTRG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetBase)


#define FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_UI_WidgetBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWidgetBase(UWidgetBase&&); \
	UWidgetBase(const UWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetBase) \
	NO_API virtual ~UWidgetBase();


#define FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_UI_WidgetBase_h_12_PROLOG
#define FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_UI_WidgetBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_UI_WidgetBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_UI_WidgetBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IWBTRG_API UClass* StaticClass<class UWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_UI_WidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
