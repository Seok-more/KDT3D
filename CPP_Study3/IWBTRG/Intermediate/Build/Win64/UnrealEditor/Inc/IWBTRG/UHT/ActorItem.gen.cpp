// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWBTRG/Actors/ActorItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorItem() {}

// Begin Cross Module References
IWBTRG_API UClass* Z_Construct_UClass_AActorBase();
IWBTRG_API UClass* Z_Construct_UClass_AActorItem();
IWBTRG_API UClass* Z_Construct_UClass_AActorItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWBTRG();
// End Cross Module References

// Begin Class AActorItem
void AActorItem::StaticRegisterNativesAActorItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActorItem);
UClass* Z_Construct_UClass_AActorItem_NoRegister()
{
	return AActorItem::StaticClass();
}
struct Z_Construct_UClass_AActorItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Actors/ActorItem.h" },
		{ "ModuleRelativePath", "Actors/ActorItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AActorItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IWBTRG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AActorItem_Statics::ClassParams = {
	&AActorItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActorItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AActorItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AActorItem()
{
	if (!Z_Registration_Info_UClass_AActorItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActorItem.OuterSingleton, Z_Construct_UClass_AActorItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AActorItem.OuterSingleton;
}
template<> IWBTRG_API UClass* StaticClass<AActorItem>()
{
	return AActorItem::StaticClass();
}
AActorItem::AActorItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AActorItem);
AActorItem::~AActorItem() {}
// End Class AActorItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_ActorItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AActorItem, AActorItem::StaticClass, TEXT("AActorItem"), &Z_Registration_Info_UClass_AActorItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActorItem), 2111049406U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_ActorItem_h_414270746(TEXT("/Script/IWBTRG"),
	Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_ActorItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KDT3D_JSM_IWBTRG_Source_IWBTRG_Actors_ActorItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
