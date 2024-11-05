// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/ActorBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef IWBTRG_ActorBase_generated_h
#error "ActorBase.generated.h already included, missing '#pragma once' in ActorBase.h"
#endif
#define IWBTRG_ActorBase_generated_h

#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorBase_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorBaseTableRow_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> IWBTRG_API UScriptStruct* StaticStruct<struct FActorBaseTableRow>();

#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorBase_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnColliderHit); \
	DECLARE_FUNCTION(execOnColliderEndOverlap); \
	DECLARE_FUNCTION(execOnColliderBeginOverlap); \
	DECLARE_FUNCTION(execOnMeshEndOverlap); \
	DECLARE_FUNCTION(execOnMeshBeginOverlap); \
	DECLARE_FUNCTION(execOnMeshHit);


#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorBase_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActorBase(); \
	friend struct Z_Construct_UClass_AActorBase_Statics; \
public: \
	DECLARE_CLASS(AActorBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IWBTRG"), NO_API) \
	DECLARE_SERIALIZER(AActorBase) \
	virtual UObject* _getUObject() const override { return const_cast<AActorBase*>(this); }


#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorBase_h_93_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AActorBase(AActorBase&&); \
	AActorBase(const AActorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActorBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AActorBase)


#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorBase_h_90_PROLOG
#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorBase_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorBase_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorBase_h_93_INCLASS_NO_PURE_DECLS \
	FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorBase_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IWBTRG_API UClass* StaticClass<class AActorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
