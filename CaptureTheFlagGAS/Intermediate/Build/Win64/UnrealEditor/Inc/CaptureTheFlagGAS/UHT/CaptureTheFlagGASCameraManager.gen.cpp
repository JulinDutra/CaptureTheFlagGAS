// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CaptureTheFlagGASCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCaptureTheFlagGASCameraManager() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACaptureTheFlagGASCameraManager();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACaptureTheFlagGASCameraManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlagGAS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACaptureTheFlagGASCameraManager ******************************************
void ACaptureTheFlagGASCameraManager::StaticRegisterNativesACaptureTheFlagGASCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACaptureTheFlagGASCameraManager;
UClass* ACaptureTheFlagGASCameraManager::GetPrivateStaticClass()
{
	using TClass = ACaptureTheFlagGASCameraManager;
	if (!Z_Registration_Info_UClass_ACaptureTheFlagGASCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CaptureTheFlagGASCameraManager"),
			Z_Registration_Info_UClass_ACaptureTheFlagGASCameraManager.InnerSingleton,
			StaticRegisterNativesACaptureTheFlagGASCameraManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACaptureTheFlagGASCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ACaptureTheFlagGASCameraManager_NoRegister()
{
	return ACaptureTheFlagGASCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACaptureTheFlagGASCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "CaptureTheFlagGASCameraManager.h" },
		{ "ModuleRelativePath", "CaptureTheFlagGASCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaptureTheFlagGASCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACaptureTheFlagGASCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureTheFlagGASCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACaptureTheFlagGASCameraManager_Statics::ClassParams = {
	&ACaptureTheFlagGASCameraManager::StaticClass,
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
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureTheFlagGASCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ACaptureTheFlagGASCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACaptureTheFlagGASCameraManager()
{
	if (!Z_Registration_Info_UClass_ACaptureTheFlagGASCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACaptureTheFlagGASCameraManager.OuterSingleton, Z_Construct_UClass_ACaptureTheFlagGASCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACaptureTheFlagGASCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACaptureTheFlagGASCameraManager);
ACaptureTheFlagGASCameraManager::~ACaptureTheFlagGASCameraManager() {}
// ********** End Class ACaptureTheFlagGASCameraManager ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASCameraManager_h__Script_CaptureTheFlagGAS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACaptureTheFlagGASCameraManager, ACaptureTheFlagGASCameraManager::StaticClass, TEXT("ACaptureTheFlagGASCameraManager"), &Z_Registration_Info_UClass_ACaptureTheFlagGASCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACaptureTheFlagGASCameraManager), 3843089001U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASCameraManager_h__Script_CaptureTheFlagGAS_2727245128(TEXT("/Script/CaptureTheFlagGAS"),
	Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASCameraManager_h__Script_CaptureTheFlagGAS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASCameraManager_h__Script_CaptureTheFlagGAS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
