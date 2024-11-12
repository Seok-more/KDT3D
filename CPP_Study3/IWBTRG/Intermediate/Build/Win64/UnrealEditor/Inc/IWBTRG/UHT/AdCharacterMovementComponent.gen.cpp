// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Components/AdCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdCharacterMovementComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
IWBTRG_API UClass* Z_Construct_UClass_UAdCharacterMovementComponent();
IWBTRG_API UClass* Z_Construct_UClass_UAdCharacterMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class UAdCharacterMovementComponent
void UAdCharacterMovementComponent::StaticRegisterNativesUAdCharacterMovementComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAdCharacterMovementComponent);
UClass* Z_Construct_UClass_UAdCharacterMovementComponent_NoRegister()
{
	return UAdCharacterMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UAdCharacterMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/AdCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Components/AdCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPushed_MetaData[] = {
		{ "Category", "AdCharacterMovementComponent" },
		{ "ModuleRelativePath", "Components/AdCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bPushed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPushed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdCharacterMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAdCharacterMovementComponent_Statics::NewProp_bPushed_SetBit(void* Obj)
{
	((UAdCharacterMovementComponent*)Obj)->bPushed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdCharacterMovementComponent_Statics::NewProp_bPushed = { "bPushed", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAdCharacterMovementComponent), &Z_Construct_UClass_UAdCharacterMovementComponent_Statics::NewProp_bPushed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPushed_MetaData), NewProp_bPushed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdCharacterMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdCharacterMovementComponent_Statics::NewProp_bPushed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdCharacterMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAdCharacterMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdCharacterMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAdCharacterMovementComponent_Statics::ClassParams = {
	&UAdCharacterMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAdCharacterMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAdCharacterMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAdCharacterMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAdCharacterMovementComponent()
{
	if (!Z_Registration_Info_UClass_UAdCharacterMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAdCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UAdCharacterMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAdCharacterMovementComponent.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<UAdCharacterMovementComponent>()
{
	return UAdCharacterMovementComponent::StaticClass();
}
UAdCharacterMovementComponent::UAdCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAdCharacterMovementComponent);
UAdCharacterMovementComponent::~UAdCharacterMovementComponent() {}
// End Class UAdCharacterMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_AdCharacterMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAdCharacterMovementComponent, UAdCharacterMovementComponent::StaticClass, TEXT("UAdCharacterMovementComponent"), &Z_Registration_Info_UClass_UAdCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAdCharacterMovementComponent), 1220400438U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_AdCharacterMovementComponent_h_3685991686(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_AdCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Components_AdCharacterMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
