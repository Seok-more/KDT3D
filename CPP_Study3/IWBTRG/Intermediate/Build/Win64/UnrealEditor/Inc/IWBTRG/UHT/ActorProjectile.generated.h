// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/ActorProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef IWBTRG_ActorProjectile_generated_h
#error "ActorProjectile.generated.h already included, missing '#pragma once' in ActorProjectile.h"
#endif
#define IWBTRG_ActorProjectile_generated_h

#define FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorProjectile_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProjectileTableRow_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> IWBTRG_API UScriptStruct* StaticStruct<struct FProjectileTableRow>();

#define FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorProjectile_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMeshBeginOverlap);


#define FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorProjectile_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActorProjectile(); \
	friend struct Z_Construct_UClass_AActorProjectile_Statics; \
public: \
	DECLARE_CLASS(AActorProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IWBTRG"), NO_API) \
	DECLARE_SERIALIZER(AActorProjectile)


#define FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorProjectile_h_98_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AActorProjectile(AActorProjectile&&); \
	AActorProjectile(const AActorProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActorProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActorProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AActorProjectile) \
	NO_API virtual ~AActorProjectile();


#define FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorProjectile_h_95_PROLOG
#define FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorProjectile_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorProjectile_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorProjectile_h_98_INCLASS_NO_PURE_DECLS \
	FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorProjectile_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IWBTRG_API UClass* StaticClass<class AActorProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
