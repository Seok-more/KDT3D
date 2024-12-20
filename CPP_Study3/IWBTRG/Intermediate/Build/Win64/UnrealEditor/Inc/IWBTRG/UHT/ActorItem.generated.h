// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/ActorItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IWBTRG_ActorItem_generated_h
#error "ActorItem.generated.h already included, missing '#pragma once' in ActorItem.h"
#endif
#define IWBTRG_ActorItem_generated_h

#define FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorItem_h_9_DELEGATE \
IWBTRG_API void FOnUsed_DelegateWrapper(const FMulticastScriptDelegate& OnUsed);


#define FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorItem_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorItemTableRow_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FActorBaseTableRow Super;


template<> IWBTRG_API UScriptStruct* StaticStruct<struct FActorItemTableRow>();

#define FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorItem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUsed);


#define FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorItem_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActorItem(); \
	friend struct Z_Construct_UClass_AActorItem_Statics; \
public: \
	DECLARE_CLASS(AActorItem, AActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IWBTRG"), NO_API) \
	DECLARE_SERIALIZER(AActorItem)


#define FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorItem_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AActorItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AActorItem(AActorItem&&); \
	AActorItem(const AActorItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActorItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActorItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AActorItem) \
	NO_API virtual ~AActorItem();


#define FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorItem_h_23_PROLOG
#define FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorItem_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorItem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorItem_h_26_INCLASS_NO_PURE_DECLS \
	FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorItem_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IWBTRG_API UClass* StaticClass<class AActorItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
