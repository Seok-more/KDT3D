// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Actors/Effect/EffectBase_UnPooled.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffectBase_UnPooled() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
IWBTRG_API UClass* Z_Construct_UClass_AEffectBase_UnPooled();
IWBTRG_API UClass* Z_Construct_UClass_AEffectBase_UnPooled_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class AEffectBase_UnPooled
void AEffectBase_UnPooled::StaticRegisterNativesAEffectBase_UnPooled()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEffectBase_UnPooled);
UClass* Z_Construct_UClass_AEffectBase_UnPooled_NoRegister()
{
	return AEffectBase_UnPooled::StaticClass();
}
struct Z_Construct_UClass_AEffectBase_UnPooled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Effect/EffectBase_UnPooled.h" },
		{ "ModuleRelativePath", "Actors/Effect/EffectBase_UnPooled.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneRoot_MetaData[] = {
		{ "Category", "EffectBase_UnPooled" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Effect/EffectBase_UnPooled.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemComponent_MetaData[] = {
		{ "Category", "EffectBase_UnPooled" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Effect/EffectBase_UnPooled.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "Effect|Sound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sound\n" },
#endif
		{ "ModuleRelativePath", "Actors/Effect/EffectBase_UnPooled.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "Effect|Sound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Volume Multiplier\n" },
#endif
		{ "ModuleRelativePath", "Actors/Effect/EffectBase_UnPooled.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Volume Multiplier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTableRowHandle_MetaData[] = {
		{ "Category", "EffectBase_UnPooled" },
		{ "ModuleRelativePath", "Actors/Effect/EffectBase_UnPooled.h" },
		{ "RowType", "/Script/IWBTRG.EffectBaseTableRow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerActor_MetaData[] = {
		{ "Category", "EffectBase_UnPooled" },
		{ "ModuleRelativePath", "Actors/Effect/EffectBase_UnPooled.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleSystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTableRowHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEffectBase_UnPooled>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEffectBase_UnPooled_Statics::NewProp_DefaultSceneRoot = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffectBase_UnPooled, DefaultSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSceneRoot_MetaData), NewProp_DefaultSceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEffectBase_UnPooled_Statics::NewProp_ParticleSystemComponent = { "ParticleSystemComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffectBase_UnPooled, ParticleSystemComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleSystemComponent_MetaData), NewProp_ParticleSystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEffectBase_UnPooled_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0124080000020005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffectBase_UnPooled, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEffectBase_UnPooled_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffectBase_UnPooled, VolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeMultiplier_MetaData), NewProp_VolumeMultiplier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEffectBase_UnPooled_Statics::NewProp_DataTableRowHandle = { "DataTableRowHandle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffectBase_UnPooled, DataTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTableRowHandle_MetaData), NewProp_DataTableRowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEffectBase_UnPooled_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0124080000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffectBase_UnPooled, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerActor_MetaData), NewProp_OwnerActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEffectBase_UnPooled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectBase_UnPooled_Statics::NewProp_DefaultSceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectBase_UnPooled_Statics::NewProp_ParticleSystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectBase_UnPooled_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectBase_UnPooled_Statics::NewProp_VolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectBase_UnPooled_Statics::NewProp_DataTableRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectBase_UnPooled_Statics::NewProp_OwnerActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectBase_UnPooled_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEffectBase_UnPooled_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectBase_UnPooled_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEffectBase_UnPooled_Statics::ClassParams = {
	&AEffectBase_UnPooled::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEffectBase_UnPooled_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEffectBase_UnPooled_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectBase_UnPooled_Statics::Class_MetaDataParams), Z_Construct_UClass_AEffectBase_UnPooled_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEffectBase_UnPooled()
{
	if (!Z_Registration_Info_UClass_AEffectBase_UnPooled.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEffectBase_UnPooled.OuterSingleton, Z_Construct_UClass_AEffectBase_UnPooled_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEffectBase_UnPooled.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<AEffectBase_UnPooled>()
{
	return AEffectBase_UnPooled::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEffectBase_UnPooled);
AEffectBase_UnPooled::~AEffectBase_UnPooled() {}
// End Class AEffectBase_UnPooled

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Effect_EffectBase_UnPooled_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEffectBase_UnPooled, AEffectBase_UnPooled::StaticClass, TEXT("AEffectBase_UnPooled"), &Z_Registration_Info_UClass_AEffectBase_UnPooled, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEffectBase_UnPooled), 2721364987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Effect_EffectBase_UnPooled_h_63124968(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Effect_EffectBase_UnPooled_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Effect_EffectBase_UnPooled_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
