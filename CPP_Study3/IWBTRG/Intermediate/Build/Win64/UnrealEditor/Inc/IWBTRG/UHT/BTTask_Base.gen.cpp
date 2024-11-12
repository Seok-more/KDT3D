// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Node/BTTask_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_Base() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
IWBTRG_API UClass* Z_Construct_UClass_UBTTask_Base();
IWBTRG_API UClass* Z_Construct_UClass_UBTTask_Base_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class UBTTask_Base
void UBTTask_Base::StaticRegisterNativesUBTTask_Base()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_Base);
UClass* Z_Construct_UClass_UBTTask_Base_NoRegister()
{
	return UBTTask_Base::StaticClass();
}
struct Z_Construct_UClass_UBTTask_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Node/BTTask_Base.h" },
		{ "ModuleRelativePath", "Node/BTTask_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIOwner_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cached AIController owner of BehaviorTreeComponent. */" },
#endif
		{ "ModuleRelativePath", "Node/BTTask_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached AIController owner of BehaviorTreeComponent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorOwner_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cached actor owner of BehaviorTreeComponent. */" },
#endif
		{ "ModuleRelativePath", "Node/BTTask_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached actor owner of BehaviorTreeComponent." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_Base_Statics::NewProp_AIOwner = { "AIOwner", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_Base, AIOwner), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIOwner_MetaData), NewProp_AIOwner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_Base_Statics::NewProp_ActorOwner = { "ActorOwner", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_Base, ActorOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorOwner_MetaData), NewProp_ActorOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_Base_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_Base_Statics::NewProp_AIOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_Base_Statics::NewProp_ActorOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Base_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_Base_Statics::ClassParams = {
	&UBTTask_Base::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_Base_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Base_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_Base()
{
	if (!Z_Registration_Info_UClass_UBTTask_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_Base.OuterSingleton, Z_Construct_UClass_UBTTask_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_Base.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<UBTTask_Base>()
{
	return UBTTask_Base::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_Base);
UBTTask_Base::~UBTTask_Base() {}
// End Class UBTTask_Base

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Node_BTTask_Base_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_Base, UBTTask_Base::StaticClass, TEXT("UBTTask_Base"), &Z_Registration_Info_UClass_UBTTask_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_Base), 380134943U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Node_BTTask_Base_h_210501580(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Node_BTTask_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_KDT3D_CPP_Study_CPP_Study3_IWBTRG_Source_IWBTRG_Node_BTTask_Base_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
