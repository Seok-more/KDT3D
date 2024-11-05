// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Actors/Effect/EffecDecal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffecDecal() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_AEffecDecal();
IWBTRG_API UClass* Z_Construct_UClass_AEffecDecal_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_AEffectBase();
IWBTRG_API UScriptStruct* Z_Construct_UScriptStruct_FEffectBaseTableRow();
IWBTRG_API UScriptStruct* Z_Construct_UScriptStruct_FEffectDecalTableRow();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin ScriptStruct FEffectDecalTableRow
static_assert(std::is_polymorphic<FEffectDecalTableRow>() == std::is_polymorphic<FEffectBaseTableRow>(), "USTRUCT FEffectDecalTableRow cannot be polymorphic unless super FEffectBaseTableRow is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EffectDecalTableRow;
class UScriptStruct* FEffectDecalTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EffectDecalTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EffectDecalTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffectDecalTableRow, (UObject*)Z_Construct_UPackage__Script_IWBTRG(), TEXT("EffectDecalTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_EffectDecalTableRow.OuterSingleton;
}
template<> IWBTRG_API UScriptStruct* StaticStruct<FEffectDecalTableRow>()
{
	return FEffectDecalTableRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEffectDecalTableRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/Effect/EffecDecal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalTransform_MetaData[] = {
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "Actors/Effect/EffecDecal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalMaterial_MetaData[] = {
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "Actors/Effect/EffecDecal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DecalTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DecalMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffectDecalTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEffectDecalTableRow_Statics::NewProp_DecalTransform = { "DecalTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectDecalTableRow, DecalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalTransform_MetaData), NewProp_DecalTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectDecalTableRow_Statics::NewProp_DecalMaterial = { "DecalMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectDecalTableRow, DecalMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalMaterial_MetaData), NewProp_DecalMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffectDecalTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectDecalTableRow_Statics::NewProp_DecalTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectDecalTableRow_Statics::NewProp_DecalMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectDecalTableRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffectDecalTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
	Z_Construct_UScriptStruct_FEffectBaseTableRow,
	&NewStructOps,
	"EffectDecalTableRow",
	Z_Construct_UScriptStruct_FEffectDecalTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectDecalTableRow_Statics::PropPointers),
	sizeof(FEffectDecalTableRow),
	alignof(FEffectDecalTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectDecalTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEffectDecalTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEffectDecalTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_EffectDecalTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EffectDecalTableRow.InnerSingleton, Z_Construct_UScriptStruct_FEffectDecalTableRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EffectDecalTableRow.InnerSingleton;
}
// End ScriptStruct FEffectDecalTableRow

// Begin Class AEffecDecal
void AEffecDecal::StaticRegisterNativesAEffecDecal()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEffecDecal);
UClass* Z_Construct_UClass_AEffecDecal_NoRegister()
{
	return AEffecDecal::StaticClass();
}
struct Z_Construct_UClass_AEffecDecal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Effect/EffecDecal.h" },
		{ "ModuleRelativePath", "Actors/Effect/EffecDecal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalComponent_MetaData[] = {
		{ "Category", "EffecDecal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Effect/EffecDecal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DecalComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEffecDecal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEffecDecal_Statics::NewProp_DecalComponent = { "DecalComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffecDecal, DecalComponent), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalComponent_MetaData), NewProp_DecalComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEffecDecal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffecDecal_Statics::NewProp_DecalComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEffecDecal_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEffecDecal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEffectBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEffecDecal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEffecDecal_Statics::ClassParams = {
	&AEffecDecal::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEffecDecal_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEffecDecal_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEffecDecal_Statics::Class_MetaDataParams), Z_Construct_UClass_AEffecDecal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEffecDecal()
{
	if (!Z_Registration_Info_UClass_AEffecDecal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEffecDecal.OuterSingleton, Z_Construct_UClass_AEffecDecal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEffecDecal.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<AEffecDecal>()
{
	return AEffecDecal::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEffecDecal);
AEffecDecal::~AEffecDecal() {}
// End Class AEffecDecal

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Effect_EffecDecal_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEffectDecalTableRow::StaticStruct, Z_Construct_UScriptStruct_FEffectDecalTableRow_Statics::NewStructOps, TEXT("EffectDecalTableRow"), &Z_Registration_Info_UScriptStruct_EffectDecalTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEffectDecalTableRow), 1058074043U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEffecDecal, AEffecDecal::StaticClass, TEXT("AEffecDecal"), &Z_Registration_Info_UClass_AEffecDecal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEffecDecal), 2692779626U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Effect_EffecDecal_h_684569103(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Effect_EffecDecal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Effect_EffecDecal_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Effect_EffecDecal_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Effect_EffecDecal_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
