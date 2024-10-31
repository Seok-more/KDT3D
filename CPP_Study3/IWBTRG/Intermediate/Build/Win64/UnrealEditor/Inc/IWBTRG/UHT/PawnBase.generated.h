// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/Pawn/PawnBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IWBTRG_PawnBase_generated_h
#error "PawnBase.generated.h already included, missing '#pragma once' in PawnBase.h"
#endif
#define IWBTRG_PawnBase_generated_h

#define FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_Pawn_PawnBase_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPawnBaseTableRow_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> IWBTRG_API UScriptStruct* StaticStruct<struct FPawnBaseTableRow>();

#define FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_Pawn_PawnBase_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnDie);


#define FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_Pawn_PawnBase_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPawnBase(); \
	friend struct Z_Construct_UClass_APawnBase_Statics; \
public: \
	DECLARE_CLASS(APawnBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IWBTRG"), NO_API) \
	DECLARE_SERIALIZER(APawnBase)


#define FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_Pawn_PawnBase_h_113_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APawnBase(APawnBase&&); \
	APawnBase(const APawnBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APawnBase) \
	NO_API virtual ~APawnBase();


#define FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_Pawn_PawnBase_h_110_PROLOG
#define FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_Pawn_PawnBase_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_Pawn_PawnBase_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_Pawn_PawnBase_h_113_INCLASS_NO_PURE_DECLS \
	FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_Pawn_PawnBase_h_113_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IWBTRG_API UClass* StaticClass<class APawnBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_Pawn_PawnBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
