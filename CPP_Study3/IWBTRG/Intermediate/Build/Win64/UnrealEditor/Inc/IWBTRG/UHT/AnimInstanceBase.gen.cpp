// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Animation/AnimInstanceBase.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimInstanceBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_UAnimInstanceBase();
IWBTRG_API UClass* Z_Construct_UClass_UAnimInstanceBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class UAnimInstanceBase
void UAnimInstanceBase::StaticRegisterNativesUAnimInstanceBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimInstanceBase);
UClass* Z_Construct_UClass_UAnimInstanceBase_NoRegister()
{
	return UAnimInstanceBase::StaticClass();
}
struct Z_Construct_UClass_UAnimInstanceBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/AnimInstanceBase.h" },
		{ "ModuleRelativePath", "Animation/AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "AnimInstanceBase" },
		{ "ModuleRelativePath", "Animation/AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Animation/AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldMove_MetaData[] = {
		{ "Category", "AnimInstanceBase" },
		{ "ModuleRelativePath", "Animation/AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsfalling_MetaData[] = {
		{ "Category", "AnimInstanceBase" },
		{ "ModuleRelativePath", "Animation/AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCrouching_MetaData[] = {
		{ "Category", "AnimInstanceBase" },
		{ "ModuleRelativePath", "Animation/AnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimRotation_MetaData[] = {
		{ "Category", "AnimInstanceBase" },
		{ "ModuleRelativePath", "Animation/AnimInstanceBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Speed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
	static void NewProp_bShouldMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldMove;
	static void NewProp_bIsfalling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsfalling;
	static void NewProp_bIsCrouching_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCrouching;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimInstanceBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimInstanceBase, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimInstanceBase, MovementComponent), Z_Construct_UClass_UPawnMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComponent_MetaData), NewProp_MovementComponent_MetaData) };
void Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_bShouldMove_SetBit(void* Obj)
{
	((UAnimInstanceBase*)Obj)->bShouldMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_bShouldMove = { "bShouldMove", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimInstanceBase), &Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_bShouldMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldMove_MetaData), NewProp_bShouldMove_MetaData) };
void Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_bIsfalling_SetBit(void* Obj)
{
	((UAnimInstanceBase*)Obj)->bIsfalling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_bIsfalling = { "bIsfalling", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimInstanceBase), &Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_bIsfalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsfalling_MetaData), NewProp_bIsfalling_MetaData) };
void Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_bIsCrouching_SetBit(void* Obj)
{
	((UAnimInstanceBase*)Obj)->bIsCrouching = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_bIsCrouching = { "bIsCrouching", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimInstanceBase), &Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_bIsCrouching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCrouching_MetaData), NewProp_bIsCrouching_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_AimRotation = { "AimRotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimInstanceBase, AimRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimRotation_MetaData), NewProp_AimRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimInstanceBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_MovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_bShouldMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_bIsfalling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_bIsCrouching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstanceBase_Statics::NewProp_AimRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimInstanceBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimInstanceBase_Statics::ClassParams = {
	&UAnimInstanceBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimInstanceBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimInstanceBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimInstanceBase()
{
	if (!Z_Registration_Info_UClass_UAnimInstanceBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimInstanceBase.OuterSingleton, Z_Construct_UClass_UAnimInstanceBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimInstanceBase.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<UAnimInstanceBase>()
{
	return UAnimInstanceBase::StaticClass();
}
UAnimInstanceBase::UAnimInstanceBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimInstanceBase);
UAnimInstanceBase::~UAnimInstanceBase() {}
// End Class UAnimInstanceBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Animation_AnimInstanceBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimInstanceBase, UAnimInstanceBase::StaticClass, TEXT("UAnimInstanceBase"), &Z_Registration_Info_UClass_UAnimInstanceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimInstanceBase), 1774669545U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Animation_AnimInstanceBase_h_2095898873(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Animation_AnimInstanceBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Animation_AnimInstanceBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
