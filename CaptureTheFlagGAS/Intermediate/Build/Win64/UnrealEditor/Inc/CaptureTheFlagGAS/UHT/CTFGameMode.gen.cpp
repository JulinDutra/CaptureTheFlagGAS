// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFramework/CTFGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCTFGameMode() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACaptureTheFlagGASGameMode();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFGameMode();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFGameMode_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlagGAS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACTFGameMode Function OnGameSetupComplete ********************************
static FName NAME_ACTFGameMode_OnGameSetupComplete = FName(TEXT("OnGameSetupComplete"));
void ACTFGameMode::OnGameSetupComplete()
{
	UFunction* Func = FindFunctionChecked(NAME_ACTFGameMode_OnGameSetupComplete);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACTFGameMode_OnGameSetupComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint Event\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Event" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFGameMode_OnGameSetupComplete_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFGameMode, nullptr, "OnGameSetupComplete", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFGameMode_OnGameSetupComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFGameMode_OnGameSetupComplete_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFGameMode_OnGameSetupComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFGameMode_OnGameSetupComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACTFGameMode Function OnGameSetupComplete **********************************

// ********** Begin Class ACTFGameMode *************************************************************
void ACTFGameMode::StaticRegisterNativesACTFGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACTFGameMode;
UClass* ACTFGameMode::GetPrivateStaticClass()
{
	using TClass = ACTFGameMode;
	if (!Z_Registration_Info_UClass_ACTFGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CTFGameMode"),
			Z_Registration_Info_UClass_ACTFGameMode.InnerSingleton,
			StaticRegisterNativesACTFGameMode,
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
	return Z_Registration_Info_UClass_ACTFGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACTFGameMode_NoRegister()
{
	return ACTFGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACTFGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * CTF Game Mode - Blueprint configurable version of CTF GameMode\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameFramework/CTFGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CTF Game Mode - Blueprint configurable version of CTF GameMode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagSpawnPosition_MetaData[] = {
		{ "Category", "CTF Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint Configuration\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RedTeamBase_MetaData[] = {
		{ "Category", "CTF Setup" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueTeamBase_MetaData[] = {
		{ "Category", "CTF Setup" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WinningScore_MetaData[] = {
		{ "Category", "CTF Setup" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSpawnFlag_MetaData[] = {
		{ "Category", "CTF Setup" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FlagSpawnPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RedTeamBase;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlueTeamBase;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WinningScore;
	static void NewProp_bAutoSpawnFlag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSpawnFlag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACTFGameMode_OnGameSetupComplete, "OnGameSetupComplete" }, // 2152164555
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACTFGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACTFGameMode_Statics::NewProp_FlagSpawnPosition = { "FlagSpawnPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFGameMode, FlagSpawnPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagSpawnPosition_MetaData), NewProp_FlagSpawnPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACTFGameMode_Statics::NewProp_RedTeamBase = { "RedTeamBase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFGameMode, RedTeamBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RedTeamBase_MetaData), NewProp_RedTeamBase_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACTFGameMode_Statics::NewProp_BlueTeamBase = { "BlueTeamBase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFGameMode, BlueTeamBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueTeamBase_MetaData), NewProp_BlueTeamBase_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACTFGameMode_Statics::NewProp_WinningScore = { "WinningScore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFGameMode, WinningScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WinningScore_MetaData), NewProp_WinningScore_MetaData) };
void Z_Construct_UClass_ACTFGameMode_Statics::NewProp_bAutoSpawnFlag_SetBit(void* Obj)
{
	((ACTFGameMode*)Obj)->bAutoSpawnFlag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACTFGameMode_Statics::NewProp_bAutoSpawnFlag = { "bAutoSpawnFlag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACTFGameMode), &Z_Construct_UClass_ACTFGameMode_Statics::NewProp_bAutoSpawnFlag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoSpawnFlag_MetaData), NewProp_bAutoSpawnFlag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACTFGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFGameMode_Statics::NewProp_FlagSpawnPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFGameMode_Statics::NewProp_RedTeamBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFGameMode_Statics::NewProp_BlueTeamBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFGameMode_Statics::NewProp_WinningScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFGameMode_Statics::NewProp_bAutoSpawnFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACTFGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACTFGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACaptureTheFlagGASGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACTFGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACTFGameMode_Statics::ClassParams = {
	&ACTFGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACTFGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACTFGameMode_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACTFGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACTFGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACTFGameMode()
{
	if (!Z_Registration_Info_UClass_ACTFGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACTFGameMode.OuterSingleton, Z_Construct_UClass_ACTFGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACTFGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACTFGameMode);
ACTFGameMode::~ACTFGameMode() {}
// ********** End Class ACTFGameMode ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFGameMode_h__Script_CaptureTheFlagGAS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACTFGameMode, ACTFGameMode::StaticClass, TEXT("ACTFGameMode"), &Z_Registration_Info_UClass_ACTFGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACTFGameMode), 3640849642U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFGameMode_h__Script_CaptureTheFlagGAS_99817211(TEXT("/Script/CaptureTheFlagGAS"),
	Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFGameMode_h__Script_CaptureTheFlagGAS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFGameMode_h__Script_CaptureTheFlagGAS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
