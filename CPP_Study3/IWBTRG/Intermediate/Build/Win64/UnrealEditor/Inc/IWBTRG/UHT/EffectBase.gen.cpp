// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Actors/Effect/EffectBase.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffectBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
IWBTRG_API UClass* Z_Construct_UClass_AEffectBase();
IWBTRG_API UClass* Z_Construct_UClass_AEffectBase_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_APooledActor();
IWBTRG_API UScriptStruct* Z_Construct_UScriptStruct_FEffectBaseTableRow();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin ScriptStruct FEffectBaseTableRow
static_assert(std::is_polymorphic<FEffectBaseTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FEffectBaseTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EffectBaseTableRow;
class UScriptStruct* FEffectBaseTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EffectBaseTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EffectBaseTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffectBaseTableRow, (UObject*)Z_Construct_UPackage__Script_IWBTRG(), TEXT("EffectBaseTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_EffectBaseTableRow.OuterSingleton;
}
template<> IWBTRG_API UScriptStruct* StaticStruct<FEffectBaseTableRow>()
{
	return FEffectBaseTableRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/Effect/EffectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectClass_MetaData[] = {
		{ "Category", "Class" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Class\n" },
#endif
		{ "ModuleRelativePath", "Actors/Effect/EffectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifeSpan_MetaData[] = {
		{ "Category", "Effect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, Category = \"Effect\")\n//bool bHasCollision = false;\n" },
#endif
		{ "ModuleRelativePath", "Actors/Effect/EffectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = \"Effect\")\nbool bHasCollision = false;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLooped_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Actors/Effect/EffectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopTime_MetaData[] = {
		{ "Category", "Effect" },
		{ "EditCondition", "bIsLooped" },
		{ "ModuleRelativePath", "Actors/Effect/EffectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Actors/Effect/EffectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Actors/Effect/EffectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFollowing_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Actors/Effect/EffectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Particle_MetaData[] = {
		{ "Category", "Particle" },
		{ "ModuleRelativePath", "Actors/Effect/EffectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleTransform_MetaData[] = {
		{ "Category", "Particle" },
		{ "ModuleRelativePath", "Actors/Effect/EffectBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EffectClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeSpan;
	static void NewProp_bIsLooped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLooped;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoopTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
	static void NewProp_bIsFollowing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFollowing;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Particle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffectBaseTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectBaseTableRow, EffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEffectBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectClass_MetaData), NewProp_EffectClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::NewProp_LifeSpan = { "LifeSpan", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectBaseTableRow, LifeSpan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifeSpan_MetaData), NewProp_LifeSpan_MetaData) };
void Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::NewProp_bIsLooped_SetBit(void* Obj)
{
	((FEffectBaseTableRow*)Obj)->bIsLooped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::NewProp_bIsLooped = { "bIsLooped", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEffectBaseTableRow), &Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::NewProp_bIsLooped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLooped_MetaData), NewProp_bIsLooped_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::NewProp_LoopTime = { "LoopTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectBaseTableRow, LoopTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopTime_MetaData), NewProp_LoopTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectBaseTableRow, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectBaseTableRow, VolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeMultiplier_MetaData), NewProp_VolumeMultiplier_MetaData) };
void Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::NewProp_bIsFollowing_SetBit(void* Obj)
{
	((FEffectBaseTableRow*)Obj)->bIsFollowing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::NewProp_bIsFollowing = { "bIsFollowing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEffectBaseTableRow), &Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::NewProp_bIsFollowing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFollowing_MetaData), NewProp_bIsFollowing_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectBaseTableRow, Particle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Particle_MetaData), NewProp_Particle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::NewProp_ParticleTransform = { "ParticleTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectBaseTableRow, ParticleTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleTransform_MetaData), NewProp_ParticleTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::NewProp_EffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::NewProp_LifeSpan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::NewProp_bIsLooped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::NewProp_LoopTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::NewProp_VolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::NewProp_bIsFollowing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::NewProp_Particle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::NewProp_ParticleTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"EffectBaseTableRow",
	Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::PropPointers),
	sizeof(FEffectBaseTableRow),
	alignof(FEffectBaseTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEffectBaseTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_EffectBaseTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EffectBaseTableRow.InnerSingleton, Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EffectBaseTableRow.InnerSingleton;
}
// End ScriptStruct FEffectBaseTableRow

// Begin Class AEffectBase
void AEffectBase::StaticRegisterNativesAEffectBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEffectBase);
UClass* Z_Construct_UClass_AEffectBase_NoRegister()
{
	return AEffectBase::StaticClass();
}
struct Z_Construct_UClass_AEffectBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Effect/EffectBase.h" },
		{ "ModuleRelativePath", "Actors/Effect/EffectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneRoot_MetaData[] = {
		{ "Category", "EffectBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Effect/EffectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemComponent_MetaData[] = {
		{ "Category", "EffectBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Effect/EffectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "Effect|Sound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sound\n" },
#endif
		{ "ModuleRelativePath", "Actors/Effect/EffectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "Effect|Sound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Volume Multiplier\n" },
#endif
		{ "ModuleRelativePath", "Actors/Effect/EffectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Volume Multiplier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTableRowHandle_MetaData[] = {
		{ "Category", "EffectBase" },
		{ "ModuleRelativePath", "Actors/Effect/EffectBase.h" },
		{ "RowType", "/Script/IWBTRG.EffectBaseTableRow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerActor_MetaData[] = {
		{ "Category", "EffectBase" },
		{ "ModuleRelativePath", "Actors/Effect/EffectBase.h" },
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
		TCppClassTypeTraits<AEffectBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEffectBase_Statics::NewProp_DefaultSceneRoot = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffectBase, DefaultSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSceneRoot_MetaData), NewProp_DefaultSceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEffectBase_Statics::NewProp_ParticleSystemComponent = { "ParticleSystemComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffectBase, ParticleSystemComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleSystemComponent_MetaData), NewProp_ParticleSystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEffectBase_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0124080000020005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffectBase, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEffectBase_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffectBase, VolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeMultiplier_MetaData), NewProp_VolumeMultiplier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEffectBase_Statics::NewProp_DataTableRowHandle = { "DataTableRowHandle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffectBase, DataTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTableRowHandle_MetaData), NewProp_DataTableRowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEffectBase_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0124080000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffectBase, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerActor_MetaData), NewProp_OwnerActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEffectBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectBase_Statics::NewProp_DefaultSceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectBase_Statics::NewProp_ParticleSystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectBase_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectBase_Statics::NewProp_VolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectBase_Statics::NewProp_DataTableRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffectBase_Statics::NewProp_OwnerActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEffectBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APooledActor,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEffectBase_Statics::ClassParams = {
	&AEffectBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEffectBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEffectBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEffectBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AEffectBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEffectBase()
{
	if (!Z_Registration_Info_UClass_AEffectBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEffectBase.OuterSingleton, Z_Construct_UClass_AEffectBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEffectBase.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<AEffectBase>()
{
	return AEffectBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEffectBase);
AEffectBase::~AEffectBase() {}
// End Class AEffectBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Effect_EffectBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEffectBaseTableRow::StaticStruct, Z_Construct_UScriptStruct_FEffectBaseTableRow_Statics::NewStructOps, TEXT("EffectBaseTableRow"), &Z_Registration_Info_UScriptStruct_EffectBaseTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEffectBaseTableRow), 2489218257U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEffectBase, AEffectBase::StaticClass, TEXT("AEffectBase"), &Z_Registration_Info_UClass_AEffectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEffectBase), 3461714764U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Effect_EffectBase_h_29306620(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Effect_EffectBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Effect_EffectBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Effect_EffectBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Actors_Effect_EffectBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
