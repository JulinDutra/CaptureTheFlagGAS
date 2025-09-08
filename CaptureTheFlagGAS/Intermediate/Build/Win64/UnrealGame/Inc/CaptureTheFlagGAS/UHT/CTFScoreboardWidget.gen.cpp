// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/CTFScoreboardWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCTFScoreboardWidget() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFGameState_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_UCTFScoreboardWidget();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_UCTFScoreboardWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlagGAS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCTFScoreboardWidget Function OnScoreUpdated *****************************
struct CTFScoreboardWidget_eventOnScoreUpdated_Parms
{
	int32 RedScore;
	int32 BlueScore;
};
static FName NAME_UCTFScoreboardWidget_OnScoreUpdated = FName(TEXT("OnScoreUpdated"));
void UCTFScoreboardWidget::OnScoreUpdated(int32 RedScore, int32 BlueScore)
{
	CTFScoreboardWidget_eventOnScoreUpdated_Parms Parms;
	Parms.RedScore=RedScore;
	Parms.BlueScore=BlueScore;
	UFunction* Func = FindFunctionChecked(NAME_UCTFScoreboardWidget_OnScoreUpdated);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCTFScoreboardWidget_OnScoreUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint Events - Simplified\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/CTFScoreboardWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Events - Simplified" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RedScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlueScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCTFScoreboardWidget_OnScoreUpdated_Statics::NewProp_RedScore = { "RedScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFScoreboardWidget_eventOnScoreUpdated_Parms, RedScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCTFScoreboardWidget_OnScoreUpdated_Statics::NewProp_BlueScore = { "BlueScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFScoreboardWidget_eventOnScoreUpdated_Parms, BlueScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFScoreboardWidget_OnScoreUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFScoreboardWidget_OnScoreUpdated_Statics::NewProp_RedScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFScoreboardWidget_OnScoreUpdated_Statics::NewProp_BlueScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFScoreboardWidget_OnScoreUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFScoreboardWidget_OnScoreUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFScoreboardWidget, nullptr, "OnScoreUpdated", Z_Construct_UFunction_UCTFScoreboardWidget_OnScoreUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFScoreboardWidget_OnScoreUpdated_Statics::PropPointers), sizeof(CTFScoreboardWidget_eventOnScoreUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFScoreboardWidget_OnScoreUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFScoreboardWidget_OnScoreUpdated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CTFScoreboardWidget_eventOnScoreUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFScoreboardWidget_OnScoreUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFScoreboardWidget_OnScoreUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCTFScoreboardWidget Function OnScoreUpdated *******************************

// ********** Begin Class UCTFScoreboardWidget Function OnTimeUpdated ******************************
struct CTFScoreboardWidget_eventOnTimeUpdated_Parms
{
	FString TimeString;
};
static FName NAME_UCTFScoreboardWidget_OnTimeUpdated = FName(TEXT("OnTimeUpdated"));
void UCTFScoreboardWidget::OnTimeUpdated(const FString& TimeString)
{
	CTFScoreboardWidget_eventOnTimeUpdated_Parms Parms;
	Parms.TimeString=TimeString;
	UFunction* Func = FindFunctionChecked(NAME_UCTFScoreboardWidget_OnTimeUpdated);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCTFScoreboardWidget_OnTimeUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/UI/CTFScoreboardWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TimeString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCTFScoreboardWidget_OnTimeUpdated_Statics::NewProp_TimeString = { "TimeString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFScoreboardWidget_eventOnTimeUpdated_Parms, TimeString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeString_MetaData), NewProp_TimeString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFScoreboardWidget_OnTimeUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFScoreboardWidget_OnTimeUpdated_Statics::NewProp_TimeString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFScoreboardWidget_OnTimeUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFScoreboardWidget_OnTimeUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFScoreboardWidget, nullptr, "OnTimeUpdated", Z_Construct_UFunction_UCTFScoreboardWidget_OnTimeUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFScoreboardWidget_OnTimeUpdated_Statics::PropPointers), sizeof(CTFScoreboardWidget_eventOnTimeUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFScoreboardWidget_OnTimeUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFScoreboardWidget_OnTimeUpdated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CTFScoreboardWidget_eventOnTimeUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFScoreboardWidget_OnTimeUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFScoreboardWidget_OnTimeUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCTFScoreboardWidget Function OnTimeUpdated ********************************

// ********** Begin Class UCTFScoreboardWidget Function UpdateScoreboard ***************************
struct Z_Construct_UFunction_UCTFScoreboardWidget_UpdateScoreboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Scoreboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Simple UI Update\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/CTFScoreboardWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple UI Update" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFScoreboardWidget_UpdateScoreboard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFScoreboardWidget, nullptr, "UpdateScoreboard", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFScoreboardWidget_UpdateScoreboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFScoreboardWidget_UpdateScoreboard_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCTFScoreboardWidget_UpdateScoreboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFScoreboardWidget_UpdateScoreboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFScoreboardWidget::execUpdateScoreboard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateScoreboard();
	P_NATIVE_END;
}
// ********** End Class UCTFScoreboardWidget Function UpdateScoreboard *****************************

// ********** Begin Class UCTFScoreboardWidget *****************************************************
void UCTFScoreboardWidget::StaticRegisterNativesUCTFScoreboardWidget()
{
	UClass* Class = UCTFScoreboardWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateScoreboard", &UCTFScoreboardWidget::execUpdateScoreboard },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCTFScoreboardWidget;
UClass* UCTFScoreboardWidget::GetPrivateStaticClass()
{
	using TClass = UCTFScoreboardWidget;
	if (!Z_Registration_Info_UClass_UCTFScoreboardWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CTFScoreboardWidget"),
			Z_Registration_Info_UClass_UCTFScoreboardWidget.InnerSingleton,
			StaticRegisterNativesUCTFScoreboardWidget,
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
	return Z_Registration_Info_UClass_UCTFScoreboardWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UCTFScoreboardWidget_NoRegister()
{
	return UCTFScoreboardWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCTFScoreboardWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/CTFScoreboardWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/CTFScoreboardWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RedScoreText_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UI Text Blocks (bind these in Blueprint)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CTFScoreboardWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI Text Blocks (bind these in Blueprint)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueScoreText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CTFScoreboardWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CTFScoreboardWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchStateText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CTFScoreboardWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CTFScoreboardWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedGameState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached reference\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/CTFScoreboardWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached reference" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RedScoreText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueScoreText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TimeText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MatchStateText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameProgressBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedGameState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCTFScoreboardWidget_OnScoreUpdated, "OnScoreUpdated" }, // 2826384846
		{ &Z_Construct_UFunction_UCTFScoreboardWidget_OnTimeUpdated, "OnTimeUpdated" }, // 3114923957
		{ &Z_Construct_UFunction_UCTFScoreboardWidget_UpdateScoreboard, "UpdateScoreboard" }, // 694571503
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCTFScoreboardWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCTFScoreboardWidget_Statics::NewProp_RedScoreText = { "RedScoreText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFScoreboardWidget, RedScoreText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RedScoreText_MetaData), NewProp_RedScoreText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCTFScoreboardWidget_Statics::NewProp_BlueScoreText = { "BlueScoreText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFScoreboardWidget, BlueScoreText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueScoreText_MetaData), NewProp_BlueScoreText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCTFScoreboardWidget_Statics::NewProp_TimeText = { "TimeText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFScoreboardWidget, TimeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeText_MetaData), NewProp_TimeText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCTFScoreboardWidget_Statics::NewProp_MatchStateText = { "MatchStateText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFScoreboardWidget, MatchStateText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchStateText_MetaData), NewProp_MatchStateText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCTFScoreboardWidget_Statics::NewProp_GameProgressBar = { "GameProgressBar", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFScoreboardWidget, GameProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameProgressBar_MetaData), NewProp_GameProgressBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCTFScoreboardWidget_Statics::NewProp_CachedGameState = { "CachedGameState", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFScoreboardWidget, CachedGameState), Z_Construct_UClass_ACTFGameState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedGameState_MetaData), NewProp_CachedGameState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCTFScoreboardWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFScoreboardWidget_Statics::NewProp_RedScoreText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFScoreboardWidget_Statics::NewProp_BlueScoreText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFScoreboardWidget_Statics::NewProp_TimeText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFScoreboardWidget_Statics::NewProp_MatchStateText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFScoreboardWidget_Statics::NewProp_GameProgressBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFScoreboardWidget_Statics::NewProp_CachedGameState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCTFScoreboardWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCTFScoreboardWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCTFScoreboardWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCTFScoreboardWidget_Statics::ClassParams = {
	&UCTFScoreboardWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCTFScoreboardWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCTFScoreboardWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCTFScoreboardWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCTFScoreboardWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCTFScoreboardWidget()
{
	if (!Z_Registration_Info_UClass_UCTFScoreboardWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCTFScoreboardWidget.OuterSingleton, Z_Construct_UClass_UCTFScoreboardWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCTFScoreboardWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCTFScoreboardWidget);
UCTFScoreboardWidget::~UCTFScoreboardWidget() {}
// ********** End Class UCTFScoreboardWidget *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_UI_CTFScoreboardWidget_h__Script_CaptureTheFlagGAS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCTFScoreboardWidget, UCTFScoreboardWidget::StaticClass, TEXT("UCTFScoreboardWidget"), &Z_Registration_Info_UClass_UCTFScoreboardWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCTFScoreboardWidget), 3332956155U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_UI_CTFScoreboardWidget_h__Script_CaptureTheFlagGAS_4011098382(TEXT("/Script/CaptureTheFlagGAS"),
	Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_UI_CTFScoreboardWidget_h__Script_CaptureTheFlagGAS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_UI_CTFScoreboardWidget_h__Script_CaptureTheFlagGAS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
