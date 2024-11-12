// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Actors/ActorMovable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorMovable() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_AActorBase();
IWBTRG_API UClass* Z_Construct_UClass_AActorMovable();
IWBTRG_API UClass* Z_Construct_UClass_AActorMovable_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class AActorMovable Function MoveAlongSplineComponent
struct Z_Construct_UFunction_AActorMovable_MoveAlongSplineComponent_Statics
{
	struct ActorMovable_eventMoveAlongSplineComponent_Parms
	{
		float Alpha;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/ActorMovable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActorMovable_MoveAlongSplineComponent_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorMovable_eventMoveAlongSplineComponent_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActorMovable_MoveAlongSplineComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActorMovable_MoveAlongSplineComponent_Statics::NewProp_Alpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AActorMovable_MoveAlongSplineComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActorMovable_MoveAlongSplineComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActorMovable, nullptr, "MoveAlongSplineComponent", nullptr, nullptr, Z_Construct_UFunction_AActorMovable_MoveAlongSplineComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActorMovable_MoveAlongSplineComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AActorMovable_MoveAlongSplineComponent_Statics::ActorMovable_eventMoveAlongSplineComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActorMovable_MoveAlongSplineComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActorMovable_MoveAlongSplineComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AActorMovable_MoveAlongSplineComponent_Statics::ActorMovable_eventMoveAlongSplineComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AActorMovable_MoveAlongSplineComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActorMovable_MoveAlongSplineComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActorMovable::execMoveAlongSplineComponent)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveAlongSplineComponent(Z_Param_Alpha);
	P_NATIVE_END;
}
// End Class AActorMovable Function MoveAlongSplineComponent

// Begin Class AActorMovable
void AActorMovable::StaticRegisterNativesAActorMovable()
{
	UClass* Class = AActorMovable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MoveAlongSplineComponent", &AActorMovable::execMoveAlongSplineComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActorMovable);
UClass* Z_Construct_UClass_AActorMovable_NoRegister()
{
	return AActorMovable::StaticClass();
}
struct Z_Construct_UClass_AActorMovable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/ActorMovable.h" },
		{ "ModuleRelativePath", "Actors/ActorMovable.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/ActorMovable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementTimeline_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/ActorMovable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementCurve_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Actors/ActorMovable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomatic_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Actors/ActorMovable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Actors/ActorMovable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Actors/ActorMovable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementTimeline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementCurve;
	static void NewProp_bAutomatic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomatic;
	static void NewProp_bLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AActorMovable_MoveAlongSplineComponent, "MoveAlongSplineComponent" }, // 3483494619
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorMovable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorMovable_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorMovable, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineComponent_MetaData), NewProp_SplineComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorMovable_Statics::NewProp_MovementTimeline = { "MovementTimeline", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorMovable, MovementTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementTimeline_MetaData), NewProp_MovementTimeline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorMovable_Statics::NewProp_MovementCurve = { "MovementCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorMovable, MovementCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementCurve_MetaData), NewProp_MovementCurve_MetaData) };
void Z_Construct_UClass_AActorMovable_Statics::NewProp_bAutomatic_SetBit(void* Obj)
{
	((AActorMovable*)Obj)->bAutomatic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActorMovable_Statics::NewProp_bAutomatic = { "bAutomatic", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AActorMovable), &Z_Construct_UClass_AActorMovable_Statics::NewProp_bAutomatic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomatic_MetaData), NewProp_bAutomatic_MetaData) };
void Z_Construct_UClass_AActorMovable_Statics::NewProp_bLoop_SetBit(void* Obj)
{
	((AActorMovable*)Obj)->bLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActorMovable_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AActorMovable), &Z_Construct_UClass_AActorMovable_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoop_MetaData), NewProp_bLoop_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActorMovable_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorMovable, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActorMovable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorMovable_Statics::NewProp_SplineComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorMovable_Statics::NewProp_MovementTimeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorMovable_Statics::NewProp_MovementCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorMovable_Statics::NewProp_bAutomatic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorMovable_Statics::NewProp_bLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorMovable_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorMovable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AActorMovable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorMovable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AActorMovable_Statics::ClassParams = {
	&AActorMovable::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AActorMovable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AActorMovable_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActorMovable_Statics::Class_MetaDataParams), Z_Construct_UClass_AActorMovable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AActorMovable()
{
	if (!Z_Registration_Info_UClass_AActorMovable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActorMovable.OuterSingleton, Z_Construct_UClass_AActorMovable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AActorMovable.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<AActorMovable>()
{
	return AActorMovable::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AActorMovable);
AActorMovable::~AActorMovable() {}
// End Class AActorMovable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorMovable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AActorMovable, AActorMovable::StaticClass, TEXT("AActorMovable"), &Z_Registration_Info_UClass_AActorMovable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActorMovable), 2376697182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorMovable_h_1943287570(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorMovable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_ActorMovable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
