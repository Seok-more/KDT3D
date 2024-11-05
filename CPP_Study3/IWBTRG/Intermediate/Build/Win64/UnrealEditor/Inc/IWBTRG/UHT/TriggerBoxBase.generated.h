// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/Trigger/TriggerBoxBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef IWBTRG_TriggerBoxBase_generated_h
#error "TriggerBoxBase.generated.h already included, missing '#pragma once' in TriggerBoxBase.h"
#endif
#define IWBTRG_TriggerBoxBase_generated_h

#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Trigger_TriggerBoxBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnDeactive); \
	DECLARE_FUNCTION(execOnActive);


#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Trigger_TriggerBoxBase_h_13_CALLBACK_WRAPPERS
#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Trigger_TriggerBoxBase_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTriggerInterface(UTriggerInterface&&); \
	UTriggerInterface(const UTriggerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerInterface) \
	NO_API virtual ~UTriggerInterface();


#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Trigger_TriggerBoxBase_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTriggerInterface(); \
	friend struct Z_Construct_UClass_UTriggerInterface_Statics; \
public: \
	DECLARE_CLASS(UTriggerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/IWBTRG"), NO_API) \
	DECLARE_SERIALIZER(UTriggerInterface)


#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Trigger_TriggerBoxBase_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Trigger_TriggerBoxBase_h_13_GENERATED_UINTERFACE_BODY() \
	FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Trigger_TriggerBoxBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Trigger_TriggerBoxBase_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITriggerInterface() {} \
public: \
	typedef UTriggerInterface UClassType; \
	typedef ITriggerInterface ThisClass; \
	static void Execute_OnActive(UObject* O, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult); \
	static void Execute_OnDeactive(UObject* O, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Trigger_TriggerBoxBase_h_10_PROLOG
#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Trigger_TriggerBoxBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Trigger_TriggerBoxBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Trigger_TriggerBoxBase_h_13_CALLBACK_WRAPPERS \
	FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Trigger_TriggerBoxBase_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IWBTRG_API UClass* StaticClass<class UTriggerInterface>();

#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Trigger_TriggerBoxBase_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnDeactivate); \
	DECLARE_FUNCTION(execOnActivate);


#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Trigger_TriggerBoxBase_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerBoxBase(); \
	friend struct Z_Construct_UClass_ATriggerBoxBase_Statics; \
public: \
	DECLARE_CLASS(ATriggerBoxBase, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IWBTRG"), NO_API) \
	DECLARE_SERIALIZER(ATriggerBoxBase)


#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Trigger_TriggerBoxBase_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATriggerBoxBase(ATriggerBoxBase&&); \
	ATriggerBoxBase(const ATriggerBoxBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerBoxBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerBoxBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATriggerBoxBase) \
	NO_API virtual ~ATriggerBoxBase();


#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Trigger_TriggerBoxBase_h_33_PROLOG
#define FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Trigger_TriggerBoxBase_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Trigger_TriggerBoxBase_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Trigger_TriggerBoxBase_h_36_INCLASS_NO_PURE_DECLS \
	FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Trigger_TriggerBoxBase_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IWBTRG_API UClass* StaticClass<class ATriggerBoxBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Trigger_TriggerBoxBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
