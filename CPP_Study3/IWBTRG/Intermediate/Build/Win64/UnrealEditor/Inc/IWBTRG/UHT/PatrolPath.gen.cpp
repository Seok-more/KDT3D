// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Actors/AI/PatrolPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatrolPath() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_APatrolPath();
IWBTRG_API UClass* Z_Construct_UClass_APatrolPath_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class APatrolPath
void APatrolPath::StaticRegisterNativesAPatrolPath()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APatrolPath);
UClass* Z_Construct_UClass_APatrolPath_NoRegister()
{
	return APatrolPath::StaticClass();
}
struct Z_Construct_UClass_APatrolPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/AI/PatrolPath.h" },
		{ "ModuleRelativePath", "Actors/AI/PatrolPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[] = {
		{ "Category", "PatrolPath" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/AI/PatrolPath.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APatrolPath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatrolPath_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APatrolPath, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineComponent_MetaData), NewProp_SplineComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APatrolPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatrolPath_Statics::NewProp_SplineComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APatrolPath_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APatrolPath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APatrolPath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APatrolPath_Statics::ClassParams = {
	&APatrolPath::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APatrolPath_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APatrolPath_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APatrolPath_Statics::Class_MetaDataParams), Z_Construct_UClass_APatrolPath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APatrolPath()
{
	if (!Z_Registration_Info_UClass_APatrolPath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APatrolPath.OuterSingleton, Z_Construct_UClass_APatrolPath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APatrolPath.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<APatrolPath>()
{
	return APatrolPath::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APatrolPath);
APatrolPath::~APatrolPath() {}
// End Class APatrolPath

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_AI_PatrolPath_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APatrolPath, APatrolPath::StaticClass, TEXT("APatrolPath"), &Z_Registration_Info_UClass_APatrolPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APatrolPath), 2866958546U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_AI_PatrolPath_h_3003685086(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_AI_PatrolPath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_AI_PatrolPath_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
