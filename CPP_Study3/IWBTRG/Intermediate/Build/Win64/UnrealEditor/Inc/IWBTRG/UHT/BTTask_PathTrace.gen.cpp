// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Node/BTTask_PathTrace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PathTrace() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
IWBTRG_API UClass* Z_Construct_UClass_UBTTask_PathTrace();
IWBTRG_API UClass* Z_Construct_UClass_UBTTask_PathTrace_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class UBTTask_PathTrace
void UBTTask_PathTrace::StaticRegisterNativesUBTTask_PathTrace()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_PathTrace);
UClass* Z_Construct_UClass_UBTTask_PathTrace_NoRegister()
{
	return UBTTask_PathTrace::StaticClass();
}
struct Z_Construct_UClass_UBTTask_PathTrace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Node/BTTask_PathTrace.h" },
		{ "ModuleRelativePath", "Node/BTTask_PathTrace.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PathTrace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_PathTrace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PathTrace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PathTrace_Statics::ClassParams = {
	&UBTTask_PathTrace::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PathTrace_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_PathTrace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_PathTrace()
{
	if (!Z_Registration_Info_UClass_UBTTask_PathTrace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_PathTrace.OuterSingleton, Z_Construct_UClass_UBTTask_PathTrace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_PathTrace.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<UBTTask_PathTrace>()
{
	return UBTTask_PathTrace::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PathTrace);
UBTTask_PathTrace::~UBTTask_PathTrace() {}
// End Class UBTTask_PathTrace

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Node_BTTask_PathTrace_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_PathTrace, UBTTask_PathTrace::StaticClass, TEXT("UBTTask_PathTrace"), &Z_Registration_Info_UClass_UBTTask_PathTrace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_PathTrace), 2618709842U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Node_BTTask_PathTrace_h_2707237757(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Node_BTTask_PathTrace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Node_BTTask_PathTrace_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
