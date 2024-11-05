// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Actors/AI/AIControllerPathTracing.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIControllerPathTracing() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_AAIControllerPathTracing();
IWBTRG_API UClass* Z_Construct_UClass_AAIControllerPathTracing_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class AAIControllerPathTracing
void AAIControllerPathTracing::StaticRegisterNativesAAIControllerPathTracing()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIControllerPathTracing);
UClass* Z_Construct_UClass_AAIControllerPathTracing_NoRegister()
{
	return AAIControllerPathTracing::StaticClass();
}
struct Z_Construct_UClass_AAIControllerPathTracing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Actors/AI/AIControllerPathTracing.h" },
		{ "ModuleRelativePath", "Actors/AI/AIControllerPathTracing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolPath_MetaData[] = {
		{ "Category", "AIControllerPathTracing" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/AI/AIControllerPathTracing.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIControllerPathTracing>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIControllerPathTracing_Statics::NewProp_PatrolPath = { "PatrolPath", nullptr, (EPropertyFlags)0x0124080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIControllerPathTracing, PatrolPath), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolPath_MetaData), NewProp_PatrolPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIControllerPathTracing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIControllerPathTracing_Statics::NewProp_PatrolPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerPathTracing_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAIControllerPathTracing_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerPathTracing_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIControllerPathTracing_Statics::ClassParams = {
	&AAIControllerPathTracing::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAIControllerPathTracing_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerPathTracing_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerPathTracing_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIControllerPathTracing_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAIControllerPathTracing()
{
	if (!Z_Registration_Info_UClass_AAIControllerPathTracing.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIControllerPathTracing.OuterSingleton, Z_Construct_UClass_AAIControllerPathTracing_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAIControllerPathTracing.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<AAIControllerPathTracing>()
{
	return AAIControllerPathTracing::StaticClass();
}
AAIControllerPathTracing::AAIControllerPathTracing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAIControllerPathTracing);
AAIControllerPathTracing::~AAIControllerPathTracing() {}
// End Class AAIControllerPathTracing

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_AI_AIControllerPathTracing_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAIControllerPathTracing, AAIControllerPathTracing::StaticClass, TEXT("AAIControllerPathTracing"), &Z_Registration_Info_UClass_AAIControllerPathTracing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIControllerPathTracing), 44828913U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_AI_AIControllerPathTracing_h_3076551609(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_AI_AIControllerPathTracing_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_AI_AIControllerPathTracing_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
