// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Actors/AI/AIControllerBasicEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIControllerBasicEnemy() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_AAIControllerBasicEnemy();
IWBTRG_API UClass* Z_Construct_UClass_AAIControllerBasicEnemy_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_UStatusComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class AAIControllerBasicEnemy Function OnDamaged
struct Z_Construct_UFunction_AAIControllerBasicEnemy_OnDamaged_Statics
{
	struct AIControllerBasicEnemy_eventOnDamaged_Parms
	{
		float CurrentHP;
		float MaxHP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/AI/AIControllerBasicEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHP;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAIControllerBasicEnemy_OnDamaged_Statics::NewProp_CurrentHP = { "CurrentHP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIControllerBasicEnemy_eventOnDamaged_Parms, CurrentHP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAIControllerBasicEnemy_OnDamaged_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIControllerBasicEnemy_eventOnDamaged_Parms, MaxHP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIControllerBasicEnemy_OnDamaged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIControllerBasicEnemy_OnDamaged_Statics::NewProp_CurrentHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIControllerBasicEnemy_OnDamaged_Statics::NewProp_MaxHP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIControllerBasicEnemy_OnDamaged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIControllerBasicEnemy_OnDamaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIControllerBasicEnemy, nullptr, "OnDamaged", nullptr, nullptr, Z_Construct_UFunction_AAIControllerBasicEnemy_OnDamaged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIControllerBasicEnemy_OnDamaged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIControllerBasicEnemy_OnDamaged_Statics::AIControllerBasicEnemy_eventOnDamaged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIControllerBasicEnemy_OnDamaged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIControllerBasicEnemy_OnDamaged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIControllerBasicEnemy_OnDamaged_Statics::AIControllerBasicEnemy_eventOnDamaged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIControllerBasicEnemy_OnDamaged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIControllerBasicEnemy_OnDamaged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIControllerBasicEnemy::execOnDamaged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentHP);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDamaged(Z_Param_CurrentHP,Z_Param_MaxHP);
	P_NATIVE_END;
}
// End Class AAIControllerBasicEnemy Function OnDamaged

// Begin Class AAIControllerBasicEnemy Function ResetOnDamaged
struct Z_Construct_UFunction_AAIControllerBasicEnemy_ResetOnDamaged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/AI/AIControllerBasicEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIControllerBasicEnemy_ResetOnDamaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIControllerBasicEnemy, nullptr, "ResetOnDamaged", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIControllerBasicEnemy_ResetOnDamaged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIControllerBasicEnemy_ResetOnDamaged_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAIControllerBasicEnemy_ResetOnDamaged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIControllerBasicEnemy_ResetOnDamaged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIControllerBasicEnemy::execResetOnDamaged)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetOnDamaged();
	P_NATIVE_END;
}
// End Class AAIControllerBasicEnemy Function ResetOnDamaged

// Begin Class AAIControllerBasicEnemy
void AAIControllerBasicEnemy::StaticRegisterNativesAAIControllerBasicEnemy()
{
	UClass* Class = AAIControllerBasicEnemy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDamaged", &AAIControllerBasicEnemy::execOnDamaged },
		{ "ResetOnDamaged", &AAIControllerBasicEnemy::execResetOnDamaged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIControllerBasicEnemy);
UClass* Z_Construct_UClass_AAIControllerBasicEnemy_NoRegister()
{
	return AAIControllerBasicEnemy::StaticClass();
}
struct Z_Construct_UClass_AAIControllerBasicEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Actors/AI/AIControllerBasicEnemy.h" },
		{ "ModuleRelativePath", "Actors/AI/AIControllerBasicEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolPath_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/AI/AIControllerBasicEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusComponentRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/AI/AIControllerBasicEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatusComponentRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIControllerBasicEnemy_OnDamaged, "OnDamaged" }, // 1438880889
		{ &Z_Construct_UFunction_AAIControllerBasicEnemy_ResetOnDamaged, "ResetOnDamaged" }, // 905635734
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIControllerBasicEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIControllerBasicEnemy_Statics::NewProp_PatrolPath = { "PatrolPath", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIControllerBasicEnemy, PatrolPath), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolPath_MetaData), NewProp_PatrolPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIControllerBasicEnemy_Statics::NewProp_StatusComponentRef = { "StatusComponentRef", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIControllerBasicEnemy, StatusComponentRef), Z_Construct_UClass_UStatusComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusComponentRef_MetaData), NewProp_StatusComponentRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIControllerBasicEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIControllerBasicEnemy_Statics::NewProp_PatrolPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIControllerBasicEnemy_Statics::NewProp_StatusComponentRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerBasicEnemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAIControllerBasicEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerBasicEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIControllerBasicEnemy_Statics::ClassParams = {
	&AAIControllerBasicEnemy::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAIControllerBasicEnemy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerBasicEnemy_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerBasicEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIControllerBasicEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAIControllerBasicEnemy()
{
	if (!Z_Registration_Info_UClass_AAIControllerBasicEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIControllerBasicEnemy.OuterSingleton, Z_Construct_UClass_AAIControllerBasicEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAIControllerBasicEnemy.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<AAIControllerBasicEnemy>()
{
	return AAIControllerBasicEnemy::StaticClass();
}
AAIControllerBasicEnemy::AAIControllerBasicEnemy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAIControllerBasicEnemy);
AAIControllerBasicEnemy::~AAIControllerBasicEnemy() {}
// End Class AAIControllerBasicEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_AI_AIControllerBasicEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAIControllerBasicEnemy, AAIControllerBasicEnemy::StaticClass, TEXT("AAIControllerBasicEnemy"), &Z_Registration_Info_UClass_AAIControllerBasicEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIControllerBasicEnemy), 15124022U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_AI_AIControllerBasicEnemy_h_2877955673(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_AI_AIControllerBasicEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_AI_AIControllerBasicEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
