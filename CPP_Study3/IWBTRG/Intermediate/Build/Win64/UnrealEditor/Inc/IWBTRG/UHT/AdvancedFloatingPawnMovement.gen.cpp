// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Components/AdvancedFloatingPawnMovement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedFloatingPawnMovement() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement();
IWBTRG_API UClass* Z_Construct_UClass_UAdvancedFloatingPawnMovement();
IWBTRG_API UClass* Z_Construct_UClass_UAdvancedFloatingPawnMovement_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class UAdvancedFloatingPawnMovement
void UAdvancedFloatingPawnMovement::StaticRegisterNativesUAdvancedFloatingPawnMovement()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAdvancedFloatingPawnMovement);
UClass* Z_Construct_UClass_UAdvancedFloatingPawnMovement_NoRegister()
{
	return UAdvancedFloatingPawnMovement::StaticClass();
}
struct Z_Construct_UClass_UAdvancedFloatingPawnMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/AdvancedFloatingPawnMovement.h" },
		{ "ModuleRelativePath", "Components/AdvancedFloatingPawnMovement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationAdvance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Current acceleration vector (with magnitude).\n\x09 * This is calculated each update based on the input vector and the constraints of MaxAcceleration and the current movement mode.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Components/AdvancedFloatingPawnMovement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current acceleration vector (with magnitude).\nThis is calculated each update based on the input vector and the constraints of MaxAcceleration and the current movement mode." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOrientRotationToMovement_MetaData[] = {
		{ "Category", "Character Movement (Rotation Settings)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true, rotate the Character toward the direction of acceleration, using RotationRate as the rate of rotation change. Overrides UseControllerDesiredRotation.\n\x09 * Normally you will want to make sure that other settings are cleared, such as bUseControllerRotationYaw on the Character.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Components/AdvancedFloatingPawnMovement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, rotate the Character toward the direction of acceleration, using RotationRate as the rate of rotation change. Overrides UseControllerDesiredRotation.\nNormally you will want to make sure that other settings are cleared, such as bUseControllerRotationYaw on the Character." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[] = {
		{ "Category", "Character Movement (Rotation Settings)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Change in rotation per second, used when UseControllerDesiredRotation or OrientRotationToMovement are true. Set a negative value for infinite rotation rate and instant turns. */" },
#endif
		{ "ModuleRelativePath", "Components/AdvancedFloatingPawnMovement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Change in rotation per second, used when UseControllerDesiredRotation or OrientRotationToMovement are true. Set a negative value for infinite rotation rate and instant turns." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccelerationAdvance;
	static void NewProp_bOrientRotationToMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientRotationToMovement;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedFloatingPawnMovement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedFloatingPawnMovement_Statics::NewProp_AccelerationAdvance = { "AccelerationAdvance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedFloatingPawnMovement, AccelerationAdvance), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelerationAdvance_MetaData), NewProp_AccelerationAdvance_MetaData) };
void Z_Construct_UClass_UAdvancedFloatingPawnMovement_Statics::NewProp_bOrientRotationToMovement_SetBit(void* Obj)
{
	((UAdvancedFloatingPawnMovement*)Obj)->bOrientRotationToMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedFloatingPawnMovement_Statics::NewProp_bOrientRotationToMovement = { "bOrientRotationToMovement", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UAdvancedFloatingPawnMovement), &Z_Construct_UClass_UAdvancedFloatingPawnMovement_Statics::NewProp_bOrientRotationToMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOrientRotationToMovement_MetaData), NewProp_bOrientRotationToMovement_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedFloatingPawnMovement_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedFloatingPawnMovement, RotationRate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRate_MetaData), NewProp_RotationRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvancedFloatingPawnMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFloatingPawnMovement_Statics::NewProp_AccelerationAdvance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFloatingPawnMovement_Statics::NewProp_bOrientRotationToMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFloatingPawnMovement_Statics::NewProp_RotationRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFloatingPawnMovement_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAdvancedFloatingPawnMovement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFloatingPawnMovement,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFloatingPawnMovement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedFloatingPawnMovement_Statics::ClassParams = {
	&UAdvancedFloatingPawnMovement::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAdvancedFloatingPawnMovement_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFloatingPawnMovement_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFloatingPawnMovement_Statics::Class_MetaDataParams), Z_Construct_UClass_UAdvancedFloatingPawnMovement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAdvancedFloatingPawnMovement()
{
	if (!Z_Registration_Info_UClass_UAdvancedFloatingPawnMovement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAdvancedFloatingPawnMovement.OuterSingleton, Z_Construct_UClass_UAdvancedFloatingPawnMovement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAdvancedFloatingPawnMovement.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<UAdvancedFloatingPawnMovement>()
{
	return UAdvancedFloatingPawnMovement::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedFloatingPawnMovement);
UAdvancedFloatingPawnMovement::~UAdvancedFloatingPawnMovement() {}
// End Class UAdvancedFloatingPawnMovement

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_AdvancedFloatingPawnMovement_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAdvancedFloatingPawnMovement, UAdvancedFloatingPawnMovement::StaticClass, TEXT("UAdvancedFloatingPawnMovement"), &Z_Registration_Info_UClass_UAdvancedFloatingPawnMovement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAdvancedFloatingPawnMovement), 1682386984U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_AdvancedFloatingPawnMovement_h_1077535510(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_AdvancedFloatingPawnMovement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_AdvancedFloatingPawnMovement_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
