// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Subsystem/ActorPoolSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorPoolSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
IWBTRG_API UClass* Z_Construct_UClass_UActorPoolSubsystem();
IWBTRG_API UClass* Z_Construct_UClass_UActorPoolSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class UActorPoolSubsystem
void UActorPoolSubsystem::StaticRegisterNativesUActorPoolSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorPoolSubsystem);
UClass* Z_Construct_UClass_UActorPoolSubsystem_NoRegister()
{
	return UActorPoolSubsystem::StaticClass();
}
struct Z_Construct_UClass_UActorPoolSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Subsystem/ActorPoolSubsystem.h" },
		{ "ModuleRelativePath", "Subsystem/ActorPoolSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorPoolSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActorPoolSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorPoolSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorPoolSubsystem_Statics::ClassParams = {
	&UActorPoolSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorPoolSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorPoolSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorPoolSubsystem()
{
	if (!Z_Registration_Info_UClass_UActorPoolSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorPoolSubsystem.OuterSingleton, Z_Construct_UClass_UActorPoolSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorPoolSubsystem.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<UActorPoolSubsystem>()
{
	return UActorPoolSubsystem::StaticClass();
}
UActorPoolSubsystem::UActorPoolSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorPoolSubsystem);
UActorPoolSubsystem::~UActorPoolSubsystem() {}
// End Class UActorPoolSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Subsystem_ActorPoolSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorPoolSubsystem, UActorPoolSubsystem::StaticClass, TEXT("UActorPoolSubsystem"), &Z_Registration_Info_UClass_UActorPoolSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorPoolSubsystem), 4068127579U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Subsystem_ActorPoolSubsystem_h_3785349722(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Subsystem_ActorPoolSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_Cpp_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Subsystem_ActorPoolSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
