// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Animation/AnimNotify_effect.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_effect() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
IWBTRG_API UClass* Z_Construct_UClass_UAnimNotify_effect();
IWBTRG_API UClass* Z_Construct_UClass_UAnimNotify_effect_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class UAnimNotify_effect
void UAnimNotify_effect::StaticRegisterNativesUAnimNotify_effect()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_effect);
UClass* Z_Construct_UClass_UAnimNotify_effect_NoRegister()
{
	return UAnimNotify_effect::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_effect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimNotify_effect.h" },
		{ "ModuleRelativePath", "Animation/AnimNotify_effect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTableRowHandle_MetaData[] = {
		{ "Category", "AnimNotify_effect" },
		{ "ModuleRelativePath", "Animation/AnimNotify_effect.h" },
		{ "RowType", "/Script/IWBTRG.EffectBaseTableRow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "AnimNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// SocketName to attach to\n" },
#endif
		{ "ModuleRelativePath", "Animation/AnimNotify_effect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SocketName to attach to" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTableRowHandle;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_effect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_effect_Statics::NewProp_DataTableRowHandle = { "DataTableRowHandle", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_effect, DataTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTableRowHandle_MetaData), NewProp_DataTableRowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_effect_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_effect, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_effect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_effect_Statics::NewProp_DataTableRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_effect_Statics::NewProp_SocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_effect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_effect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_effect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_effect_Statics::ClassParams = {
	&UAnimNotify_effect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotify_effect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_effect_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_effect_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_effect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_effect()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_effect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_effect.OuterSingleton, Z_Construct_UClass_UAnimNotify_effect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_effect.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<UAnimNotify_effect>()
{
	return UAnimNotify_effect::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_effect);
UAnimNotify_effect::~UAnimNotify_effect() {}
// End Class UAnimNotify_effect

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Animation_AnimNotify_effect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_effect, UAnimNotify_effect::StaticClass, TEXT("UAnimNotify_effect"), &Z_Registration_Info_UClass_UAnimNotify_effect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_effect), 169130216U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Animation_AnimNotify_effect_h_2411890866(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Animation_AnimNotify_effect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Animation_AnimNotify_effect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
