// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFramework/CTFPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCTFPlayerController() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFCaptureZone_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFFlag_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFPlayerController();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFPlayerController_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFPlayerState_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_UCTFPlayerComponent_NoRegister();
CAPTURETHEFLAGGAS_API UEnum* Z_Construct_UEnum_CaptureTheFlagGAS_ETeam();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlagGAS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACTFPlayerController Function FindNearestInteractableFlag ****************
struct Z_Construct_UFunction_ACTFPlayerController_FindNearestInteractableFlag_Statics
{
	struct CTFPlayerController_eventFindNearestInteractableFlag_Parms
	{
		float MaxDistance;
		ACTFFlag* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Controller|Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interaction Helpers\n" },
#endif
		{ "CPP_Default_MaxDistance", "200.000000" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interaction Helpers" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACTFPlayerController_FindNearestInteractableFlag_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventFindNearestInteractableFlag_Parms, MaxDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFPlayerController_FindNearestInteractableFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventFindNearestInteractableFlag_Parms, ReturnValue), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerController_FindNearestInteractableFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_FindNearestInteractableFlag_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_FindNearestInteractableFlag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_FindNearestInteractableFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_FindNearestInteractableFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "FindNearestInteractableFlag", Z_Construct_UFunction_ACTFPlayerController_FindNearestInteractableFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_FindNearestInteractableFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerController_FindNearestInteractableFlag_Statics::CTFPlayerController_eventFindNearestInteractableFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_FindNearestInteractableFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_FindNearestInteractableFlag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerController_FindNearestInteractableFlag_Statics::CTFPlayerController_eventFindNearestInteractableFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerController_FindNearestInteractableFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_FindNearestInteractableFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerController::execFindNearestInteractableFlag)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACTFFlag**)Z_Param__Result=P_THIS->FindNearestInteractableFlag(Z_Param_MaxDistance);
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerController Function FindNearestInteractableFlag ******************

// ********** Begin Class ACTFPlayerController Function GetCarriedFlag *****************************
struct Z_Construct_UFunction_ACTFPlayerController_GetCarriedFlag_Statics
{
	struct CTFPlayerController_eventGetCarriedFlag_Parms
	{
		ACTFFlag* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Controller|CTF" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFPlayerController_GetCarriedFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventGetCarriedFlag_Parms, ReturnValue), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerController_GetCarriedFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_GetCarriedFlag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_GetCarriedFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_GetCarriedFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "GetCarriedFlag", Z_Construct_UFunction_ACTFPlayerController_GetCarriedFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_GetCarriedFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerController_GetCarriedFlag_Statics::CTFPlayerController_eventGetCarriedFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_GetCarriedFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_GetCarriedFlag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerController_GetCarriedFlag_Statics::CTFPlayerController_eventGetCarriedFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerController_GetCarriedFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_GetCarriedFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerController::execGetCarriedFlag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACTFFlag**)Z_Param__Result=P_THIS->GetCarriedFlag();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerController Function GetCarriedFlag *******************************

// ********** Begin Class ACTFPlayerController Function GetCTFPlayerComponent **********************
struct Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerComponent_Statics
{
	struct CTFPlayerController_eventGetCTFPlayerComponent_Parms
	{
		UCTFPlayerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Controller|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Component Access\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component Access" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventGetCTFPlayerComponent_Parms, ReturnValue), Z_Construct_UClass_UCTFPlayerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "GetCTFPlayerComponent", Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerComponent_Statics::CTFPlayerController_eventGetCTFPlayerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerComponent_Statics::CTFPlayerController_eventGetCTFPlayerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerController::execGetCTFPlayerComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCTFPlayerComponent**)Z_Param__Result=P_THIS->GetCTFPlayerComponent();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerController Function GetCTFPlayerComponent ************************

// ********** Begin Class ACTFPlayerController Function GetCTFPlayerState **************************
struct Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerState_Statics
{
	struct CTFPlayerController_eventGetCTFPlayerState_Parms
	{
		ACTFPlayerState* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Controller|Components" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventGetCTFPlayerState_Parms, ReturnValue), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "GetCTFPlayerState", Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerState_Statics::CTFPlayerController_eventGetCTFPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerState_Statics::CTFPlayerController_eventGetCTFPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerController::execGetCTFPlayerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACTFPlayerState**)Z_Param__Result=P_THIS->GetCTFPlayerState();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerController Function GetCTFPlayerState ****************************

// ********** Begin Class ACTFPlayerController Function GetCurrentCaptureZone **********************
struct Z_Construct_UFunction_ACTFPlayerController_GetCurrentCaptureZone_Statics
{
	struct CTFPlayerController_eventGetCurrentCaptureZone_Parms
	{
		ACTFCaptureZone* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Controller|CTF" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFPlayerController_GetCurrentCaptureZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventGetCurrentCaptureZone_Parms, ReturnValue), Z_Construct_UClass_ACTFCaptureZone_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerController_GetCurrentCaptureZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_GetCurrentCaptureZone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_GetCurrentCaptureZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_GetCurrentCaptureZone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "GetCurrentCaptureZone", Z_Construct_UFunction_ACTFPlayerController_GetCurrentCaptureZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_GetCurrentCaptureZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerController_GetCurrentCaptureZone_Statics::CTFPlayerController_eventGetCurrentCaptureZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_GetCurrentCaptureZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_GetCurrentCaptureZone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerController_GetCurrentCaptureZone_Statics::CTFPlayerController_eventGetCurrentCaptureZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerController_GetCurrentCaptureZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_GetCurrentCaptureZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerController::execGetCurrentCaptureZone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACTFCaptureZone**)Z_Param__Result=P_THIS->GetCurrentCaptureZone();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerController Function GetCurrentCaptureZone ************************

// ********** Begin Class ACTFPlayerController Function GetHealth **********************************
struct Z_Construct_UFunction_ACTFPlayerController_GetHealth_Statics
{
	struct CTFPlayerController_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Controller|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Player Stats\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player Stats" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACTFPlayerController_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerController_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_GetHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "GetHealth", Z_Construct_UFunction_ACTFPlayerController_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerController_GetHealth_Statics::CTFPlayerController_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_GetHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerController_GetHealth_Statics::CTFPlayerController_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerController_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerController::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerController Function GetHealth ************************************

// ********** Begin Class ACTFPlayerController Function GetHealthPercentage ************************
struct Z_Construct_UFunction_ACTFPlayerController_GetHealthPercentage_Statics
{
	struct CTFPlayerController_eventGetHealthPercentage_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Controller|Stats" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACTFPlayerController_GetHealthPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventGetHealthPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerController_GetHealthPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_GetHealthPercentage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_GetHealthPercentage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_GetHealthPercentage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "GetHealthPercentage", Z_Construct_UFunction_ACTFPlayerController_GetHealthPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_GetHealthPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerController_GetHealthPercentage_Statics::CTFPlayerController_eventGetHealthPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_GetHealthPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_GetHealthPercentage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerController_GetHealthPercentage_Statics::CTFPlayerController_eventGetHealthPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerController_GetHealthPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_GetHealthPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerController::execGetHealthPercentage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealthPercentage();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerController Function GetHealthPercentage **************************

// ********** Begin Class ACTFPlayerController Function GetInteractionPrompt ***********************
struct Z_Construct_UFunction_ACTFPlayerController_GetInteractionPrompt_Statics
{
	struct CTFPlayerController_eventGetInteractionPrompt_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Controller|Interaction" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACTFPlayerController_GetInteractionPrompt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventGetInteractionPrompt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerController_GetInteractionPrompt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_GetInteractionPrompt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_GetInteractionPrompt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_GetInteractionPrompt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "GetInteractionPrompt", Z_Construct_UFunction_ACTFPlayerController_GetInteractionPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_GetInteractionPrompt_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerController_GetInteractionPrompt_Statics::CTFPlayerController_eventGetInteractionPrompt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_GetInteractionPrompt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_GetInteractionPrompt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerController_GetInteractionPrompt_Statics::CTFPlayerController_eventGetInteractionPrompt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerController_GetInteractionPrompt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_GetInteractionPrompt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerController::execGetInteractionPrompt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetInteractionPrompt();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerController Function GetInteractionPrompt *************************

// ********** Begin Class ACTFPlayerController Function GetTeam ************************************
struct Z_Construct_UFunction_ACTFPlayerController_GetTeam_Statics
{
	struct CTFPlayerController_eventGetTeam_Parms
	{
		ETeam ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Controller|CTF" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFPlayerController_GetTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFPlayerController_GetTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventGetTeam_Parms, ReturnValue), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerController_GetTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_GetTeam_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_GetTeam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_GetTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_GetTeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "GetTeam", Z_Construct_UFunction_ACTFPlayerController_GetTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_GetTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerController_GetTeam_Statics::CTFPlayerController_eventGetTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_GetTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_GetTeam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerController_GetTeam_Statics::CTFPlayerController_eventGetTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerController_GetTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_GetTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerController::execGetTeam)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETeam*)Z_Param__Result=P_THIS->GetTeam();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerController Function GetTeam **************************************

// ********** Begin Class ACTFPlayerController Function HandleDropFlagPressed **********************
struct Z_Construct_UFunction_ACTFPlayerController_HandleDropFlagPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Controller|Input" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_HandleDropFlagPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "HandleDropFlagPressed", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_HandleDropFlagPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_HandleDropFlagPressed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFPlayerController_HandleDropFlagPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_HandleDropFlagPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerController::execHandleDropFlagPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDropFlagPressed();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerController Function HandleDropFlagPressed ************************

// ********** Begin Class ACTFPlayerController Function HandleEnteredCaptureZone *******************
struct Z_Construct_UFunction_ACTFPlayerController_HandleEnteredCaptureZone_Statics
{
	struct CTFPlayerController_eventHandleEnteredCaptureZone_Parms
	{
		ACTFCaptureZone* Zone;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Zone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFPlayerController_HandleEnteredCaptureZone_Statics::NewProp_Zone = { "Zone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventHandleEnteredCaptureZone_Parms, Zone), Z_Construct_UClass_ACTFCaptureZone_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerController_HandleEnteredCaptureZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_HandleEnteredCaptureZone_Statics::NewProp_Zone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_HandleEnteredCaptureZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_HandleEnteredCaptureZone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "HandleEnteredCaptureZone", Z_Construct_UFunction_ACTFPlayerController_HandleEnteredCaptureZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_HandleEnteredCaptureZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerController_HandleEnteredCaptureZone_Statics::CTFPlayerController_eventHandleEnteredCaptureZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_HandleEnteredCaptureZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_HandleEnteredCaptureZone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerController_HandleEnteredCaptureZone_Statics::CTFPlayerController_eventHandleEnteredCaptureZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerController_HandleEnteredCaptureZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_HandleEnteredCaptureZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerController::execHandleEnteredCaptureZone)
{
	P_GET_OBJECT(ACTFCaptureZone,Z_Param_Zone);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleEnteredCaptureZone(Z_Param_Zone);
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerController Function HandleEnteredCaptureZone *********************

// ********** Begin Class ACTFPlayerController Function HandleExitedCaptureZone ********************
struct Z_Construct_UFunction_ACTFPlayerController_HandleExitedCaptureZone_Statics
{
	struct CTFPlayerController_eventHandleExitedCaptureZone_Parms
	{
		ACTFCaptureZone* Zone;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Zone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFPlayerController_HandleExitedCaptureZone_Statics::NewProp_Zone = { "Zone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventHandleExitedCaptureZone_Parms, Zone), Z_Construct_UClass_ACTFCaptureZone_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerController_HandleExitedCaptureZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_HandleExitedCaptureZone_Statics::NewProp_Zone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_HandleExitedCaptureZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_HandleExitedCaptureZone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "HandleExitedCaptureZone", Z_Construct_UFunction_ACTFPlayerController_HandleExitedCaptureZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_HandleExitedCaptureZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerController_HandleExitedCaptureZone_Statics::CTFPlayerController_eventHandleExitedCaptureZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_HandleExitedCaptureZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_HandleExitedCaptureZone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerController_HandleExitedCaptureZone_Statics::CTFPlayerController_eventHandleExitedCaptureZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerController_HandleExitedCaptureZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_HandleExitedCaptureZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerController::execHandleExitedCaptureZone)
{
	P_GET_OBJECT(ACTFCaptureZone,Z_Param_Zone);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleExitedCaptureZone(Z_Param_Zone);
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerController Function HandleExitedCaptureZone **********************

// ********** Begin Class ACTFPlayerController Function HandleFlagDropped **************************
struct Z_Construct_UFunction_ACTFPlayerController_HandleFlagDropped_Statics
{
	struct CTFPlayerController_eventHandleFlagDropped_Parms
	{
		ACTFFlag* Flag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Flag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFPlayerController_HandleFlagDropped_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventHandleFlagDropped_Parms, Flag), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerController_HandleFlagDropped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_HandleFlagDropped_Statics::NewProp_Flag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_HandleFlagDropped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_HandleFlagDropped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "HandleFlagDropped", Z_Construct_UFunction_ACTFPlayerController_HandleFlagDropped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_HandleFlagDropped_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerController_HandleFlagDropped_Statics::CTFPlayerController_eventHandleFlagDropped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_HandleFlagDropped_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_HandleFlagDropped_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerController_HandleFlagDropped_Statics::CTFPlayerController_eventHandleFlagDropped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerController_HandleFlagDropped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_HandleFlagDropped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerController::execHandleFlagDropped)
{
	P_GET_OBJECT(ACTFFlag,Z_Param_Flag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleFlagDropped(Z_Param_Flag);
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerController Function HandleFlagDropped ****************************

// ********** Begin Class ACTFPlayerController Function HandleFlagPickedUp *************************
struct Z_Construct_UFunction_ACTFPlayerController_HandleFlagPickedUp_Statics
{
	struct CTFPlayerController_eventHandleFlagPickedUp_Parms
	{
		ACTFFlag* Flag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event Handlers\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event Handlers" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Flag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFPlayerController_HandleFlagPickedUp_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventHandleFlagPickedUp_Parms, Flag), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerController_HandleFlagPickedUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_HandleFlagPickedUp_Statics::NewProp_Flag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_HandleFlagPickedUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_HandleFlagPickedUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "HandleFlagPickedUp", Z_Construct_UFunction_ACTFPlayerController_HandleFlagPickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_HandleFlagPickedUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerController_HandleFlagPickedUp_Statics::CTFPlayerController_eventHandleFlagPickedUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_HandleFlagPickedUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_HandleFlagPickedUp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerController_HandleFlagPickedUp_Statics::CTFPlayerController_eventHandleFlagPickedUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerController_HandleFlagPickedUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_HandleFlagPickedUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerController::execHandleFlagPickedUp)
{
	P_GET_OBJECT(ACTFFlag,Z_Param_Flag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleFlagPickedUp(Z_Param_Flag);
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerController Function HandleFlagPickedUp ***************************

// ********** Begin Class ACTFPlayerController Function HandleHealthChanged ************************
struct Z_Construct_UFunction_ACTFPlayerController_HandleHealthChanged_Statics
{
	struct CTFPlayerController_eventHandleHealthChanged_Parms
	{
		float OldHealth;
		float NewHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACTFPlayerController_HandleHealthChanged_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventHandleHealthChanged_Parms, OldHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACTFPlayerController_HandleHealthChanged_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventHandleHealthChanged_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerController_HandleHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_HandleHealthChanged_Statics::NewProp_OldHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_HandleHealthChanged_Statics::NewProp_NewHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_HandleHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_HandleHealthChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "HandleHealthChanged", Z_Construct_UFunction_ACTFPlayerController_HandleHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_HandleHealthChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerController_HandleHealthChanged_Statics::CTFPlayerController_eventHandleHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_HandleHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_HandleHealthChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerController_HandleHealthChanged_Statics::CTFPlayerController_eventHandleHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerController_HandleHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_HandleHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerController::execHandleHealthChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_OldHealth);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleHealthChanged(Z_Param_OldHealth,Z_Param_NewHealth);
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerController Function HandleHealthChanged **************************

// ********** Begin Class ACTFPlayerController Function HandleInteractPressed **********************
struct Z_Construct_UFunction_ACTFPlayerController_HandleInteractPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Controller|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input Actions\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Actions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_HandleInteractPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "HandleInteractPressed", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_HandleInteractPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_HandleInteractPressed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFPlayerController_HandleInteractPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_HandleInteractPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerController::execHandleInteractPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleInteractPressed();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerController Function HandleInteractPressed ************************

// ********** Begin Class ACTFPlayerController Function HandleTeamChanged **************************
struct Z_Construct_UFunction_ACTFPlayerController_HandleTeamChanged_Statics
{
	struct CTFPlayerController_eventHandleTeamChanged_Parms
	{
		ETeam OldTeam;
		ETeam NewTeam;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OldTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OldTeam;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewTeam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFPlayerController_HandleTeamChanged_Statics::NewProp_OldTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFPlayerController_HandleTeamChanged_Statics::NewProp_OldTeam = { "OldTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventHandleTeamChanged_Parms, OldTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFPlayerController_HandleTeamChanged_Statics::NewProp_NewTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFPlayerController_HandleTeamChanged_Statics::NewProp_NewTeam = { "NewTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventHandleTeamChanged_Parms, NewTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerController_HandleTeamChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_HandleTeamChanged_Statics::NewProp_OldTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_HandleTeamChanged_Statics::NewProp_OldTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_HandleTeamChanged_Statics::NewProp_NewTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_HandleTeamChanged_Statics::NewProp_NewTeam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_HandleTeamChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_HandleTeamChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "HandleTeamChanged", Z_Construct_UFunction_ACTFPlayerController_HandleTeamChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_HandleTeamChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerController_HandleTeamChanged_Statics::CTFPlayerController_eventHandleTeamChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_HandleTeamChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_HandleTeamChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerController_HandleTeamChanged_Statics::CTFPlayerController_eventHandleTeamChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerController_HandleTeamChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_HandleTeamChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerController::execHandleTeamChanged)
{
	P_GET_ENUM(ETeam,Z_Param_OldTeam);
	P_GET_ENUM(ETeam,Z_Param_NewTeam);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTeamChanged(ETeam(Z_Param_OldTeam),ETeam(Z_Param_NewTeam));
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerController Function HandleTeamChanged ****************************

// ********** Begin Class ACTFPlayerController Function HasFlag ************************************
struct Z_Construct_UFunction_ACTFPlayerController_HasFlag_Statics
{
	struct CTFPlayerController_eventHasFlag_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Controller|CTF" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CTF Functionality\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CTF Functionality" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACTFPlayerController_HasFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFPlayerController_eventHasFlag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACTFPlayerController_HasFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFPlayerController_eventHasFlag_Parms), &Z_Construct_UFunction_ACTFPlayerController_HasFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerController_HasFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_HasFlag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_HasFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_HasFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "HasFlag", Z_Construct_UFunction_ACTFPlayerController_HasFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_HasFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerController_HasFlag_Statics::CTFPlayerController_eventHasFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_HasFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_HasFlag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerController_HasFlag_Statics::CTFPlayerController_eventHasFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerController_HasFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_HasFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerController::execHasFlag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasFlag();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerController Function HasFlag **************************************

// ********** Begin Class ACTFPlayerController Function IsAlive ************************************
struct Z_Construct_UFunction_ACTFPlayerController_IsAlive_Statics
{
	struct CTFPlayerController_eventIsAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Controller|Stats" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACTFPlayerController_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFPlayerController_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACTFPlayerController_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFPlayerController_eventIsAlive_Parms), &Z_Construct_UFunction_ACTFPlayerController_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerController_IsAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_IsAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_IsAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_IsAlive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "IsAlive", Z_Construct_UFunction_ACTFPlayerController_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerController_IsAlive_Statics::CTFPlayerController_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_IsAlive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerController_IsAlive_Statics::CTFPlayerController_eventIsAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerController_IsAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_IsAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerController::execIsAlive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAlive();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerController Function IsAlive **************************************

// ********** Begin Class ACTFPlayerController Function IsInCaptureZone ****************************
struct Z_Construct_UFunction_ACTFPlayerController_IsInCaptureZone_Statics
{
	struct CTFPlayerController_eventIsInCaptureZone_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Controller|CTF" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACTFPlayerController_IsInCaptureZone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFPlayerController_eventIsInCaptureZone_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACTFPlayerController_IsInCaptureZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFPlayerController_eventIsInCaptureZone_Parms), &Z_Construct_UFunction_ACTFPlayerController_IsInCaptureZone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerController_IsInCaptureZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_IsInCaptureZone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_IsInCaptureZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_IsInCaptureZone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "IsInCaptureZone", Z_Construct_UFunction_ACTFPlayerController_IsInCaptureZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_IsInCaptureZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFPlayerController_IsInCaptureZone_Statics::CTFPlayerController_eventIsInCaptureZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_IsInCaptureZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_IsInCaptureZone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFPlayerController_IsInCaptureZone_Statics::CTFPlayerController_eventIsInCaptureZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerController_IsInCaptureZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_IsInCaptureZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFPlayerController::execIsInCaptureZone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInCaptureZone();
	P_NATIVE_END;
}
// ********** End Class ACTFPlayerController Function IsInCaptureZone ******************************

// ********** Begin Class ACTFPlayerController Function OnEnteredCaptureZoneEvent ******************
struct CTFPlayerController_eventOnEnteredCaptureZoneEvent_Parms
{
	ACTFCaptureZone* Zone;
};
static FName NAME_ACTFPlayerController_OnEnteredCaptureZoneEvent = FName(TEXT("OnEnteredCaptureZoneEvent"));
void ACTFPlayerController::OnEnteredCaptureZoneEvent(ACTFCaptureZone* Zone)
{
	CTFPlayerController_eventOnEnteredCaptureZoneEvent_Parms Parms;
	Parms.Zone=Zone;
	UFunction* Func = FindFunctionChecked(NAME_ACTFPlayerController_OnEnteredCaptureZoneEvent);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACTFPlayerController_OnEnteredCaptureZoneEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Controller|Events" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Zone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFPlayerController_OnEnteredCaptureZoneEvent_Statics::NewProp_Zone = { "Zone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventOnEnteredCaptureZoneEvent_Parms, Zone), Z_Construct_UClass_ACTFCaptureZone_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerController_OnEnteredCaptureZoneEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_OnEnteredCaptureZoneEvent_Statics::NewProp_Zone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_OnEnteredCaptureZoneEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_OnEnteredCaptureZoneEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "OnEnteredCaptureZoneEvent", Z_Construct_UFunction_ACTFPlayerController_OnEnteredCaptureZoneEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_OnEnteredCaptureZoneEvent_Statics::PropPointers), sizeof(CTFPlayerController_eventOnEnteredCaptureZoneEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_OnEnteredCaptureZoneEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_OnEnteredCaptureZoneEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CTFPlayerController_eventOnEnteredCaptureZoneEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerController_OnEnteredCaptureZoneEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_OnEnteredCaptureZoneEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACTFPlayerController Function OnEnteredCaptureZoneEvent ********************

// ********** Begin Class ACTFPlayerController Function OnExitedCaptureZoneEvent *******************
struct CTFPlayerController_eventOnExitedCaptureZoneEvent_Parms
{
	ACTFCaptureZone* Zone;
};
static FName NAME_ACTFPlayerController_OnExitedCaptureZoneEvent = FName(TEXT("OnExitedCaptureZoneEvent"));
void ACTFPlayerController::OnExitedCaptureZoneEvent(ACTFCaptureZone* Zone)
{
	CTFPlayerController_eventOnExitedCaptureZoneEvent_Parms Parms;
	Parms.Zone=Zone;
	UFunction* Func = FindFunctionChecked(NAME_ACTFPlayerController_OnExitedCaptureZoneEvent);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACTFPlayerController_OnExitedCaptureZoneEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Controller|Events" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Zone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFPlayerController_OnExitedCaptureZoneEvent_Statics::NewProp_Zone = { "Zone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventOnExitedCaptureZoneEvent_Parms, Zone), Z_Construct_UClass_ACTFCaptureZone_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerController_OnExitedCaptureZoneEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_OnExitedCaptureZoneEvent_Statics::NewProp_Zone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_OnExitedCaptureZoneEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_OnExitedCaptureZoneEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "OnExitedCaptureZoneEvent", Z_Construct_UFunction_ACTFPlayerController_OnExitedCaptureZoneEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_OnExitedCaptureZoneEvent_Statics::PropPointers), sizeof(CTFPlayerController_eventOnExitedCaptureZoneEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_OnExitedCaptureZoneEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_OnExitedCaptureZoneEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CTFPlayerController_eventOnExitedCaptureZoneEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerController_OnExitedCaptureZoneEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_OnExitedCaptureZoneEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACTFPlayerController Function OnExitedCaptureZoneEvent *********************

// ********** Begin Class ACTFPlayerController Function OnFlagDroppedEvent *************************
struct CTFPlayerController_eventOnFlagDroppedEvent_Parms
{
	ACTFFlag* Flag;
};
static FName NAME_ACTFPlayerController_OnFlagDroppedEvent = FName(TEXT("OnFlagDroppedEvent"));
void ACTFPlayerController::OnFlagDroppedEvent(ACTFFlag* Flag)
{
	CTFPlayerController_eventOnFlagDroppedEvent_Parms Parms;
	Parms.Flag=Flag;
	UFunction* Func = FindFunctionChecked(NAME_ACTFPlayerController_OnFlagDroppedEvent);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACTFPlayerController_OnFlagDroppedEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Controller|Events" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Flag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFPlayerController_OnFlagDroppedEvent_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventOnFlagDroppedEvent_Parms, Flag), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerController_OnFlagDroppedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_OnFlagDroppedEvent_Statics::NewProp_Flag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_OnFlagDroppedEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_OnFlagDroppedEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "OnFlagDroppedEvent", Z_Construct_UFunction_ACTFPlayerController_OnFlagDroppedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_OnFlagDroppedEvent_Statics::PropPointers), sizeof(CTFPlayerController_eventOnFlagDroppedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_OnFlagDroppedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_OnFlagDroppedEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CTFPlayerController_eventOnFlagDroppedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerController_OnFlagDroppedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_OnFlagDroppedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACTFPlayerController Function OnFlagDroppedEvent ***************************

// ********** Begin Class ACTFPlayerController Function OnFlagPickedUpEvent ************************
struct CTFPlayerController_eventOnFlagPickedUpEvent_Parms
{
	ACTFFlag* Flag;
};
static FName NAME_ACTFPlayerController_OnFlagPickedUpEvent = FName(TEXT("OnFlagPickedUpEvent"));
void ACTFPlayerController::OnFlagPickedUpEvent(ACTFFlag* Flag)
{
	CTFPlayerController_eventOnFlagPickedUpEvent_Parms Parms;
	Parms.Flag=Flag;
	UFunction* Func = FindFunctionChecked(NAME_ACTFPlayerController_OnFlagPickedUpEvent);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACTFPlayerController_OnFlagPickedUpEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Controller|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events for Blueprint\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events for Blueprint" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Flag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFPlayerController_OnFlagPickedUpEvent_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventOnFlagPickedUpEvent_Parms, Flag), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerController_OnFlagPickedUpEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_OnFlagPickedUpEvent_Statics::NewProp_Flag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_OnFlagPickedUpEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_OnFlagPickedUpEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "OnFlagPickedUpEvent", Z_Construct_UFunction_ACTFPlayerController_OnFlagPickedUpEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_OnFlagPickedUpEvent_Statics::PropPointers), sizeof(CTFPlayerController_eventOnFlagPickedUpEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_OnFlagPickedUpEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_OnFlagPickedUpEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CTFPlayerController_eventOnFlagPickedUpEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerController_OnFlagPickedUpEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_OnFlagPickedUpEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACTFPlayerController Function OnFlagPickedUpEvent **************************

// ********** Begin Class ACTFPlayerController Function OnHealthChangedEvent ***********************
struct CTFPlayerController_eventOnHealthChangedEvent_Parms
{
	float OldHealth;
	float NewHealth;
};
static FName NAME_ACTFPlayerController_OnHealthChangedEvent = FName(TEXT("OnHealthChangedEvent"));
void ACTFPlayerController::OnHealthChangedEvent(float OldHealth, float NewHealth)
{
	CTFPlayerController_eventOnHealthChangedEvent_Parms Parms;
	Parms.OldHealth=OldHealth;
	Parms.NewHealth=NewHealth;
	UFunction* Func = FindFunctionChecked(NAME_ACTFPlayerController_OnHealthChangedEvent);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACTFPlayerController_OnHealthChangedEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Controller|Events" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACTFPlayerController_OnHealthChangedEvent_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventOnHealthChangedEvent_Parms, OldHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACTFPlayerController_OnHealthChangedEvent_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventOnHealthChangedEvent_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerController_OnHealthChangedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_OnHealthChangedEvent_Statics::NewProp_OldHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_OnHealthChangedEvent_Statics::NewProp_NewHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_OnHealthChangedEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_OnHealthChangedEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "OnHealthChangedEvent", Z_Construct_UFunction_ACTFPlayerController_OnHealthChangedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_OnHealthChangedEvent_Statics::PropPointers), sizeof(CTFPlayerController_eventOnHealthChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_OnHealthChangedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_OnHealthChangedEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CTFPlayerController_eventOnHealthChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerController_OnHealthChangedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_OnHealthChangedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACTFPlayerController Function OnHealthChangedEvent *************************

// ********** Begin Class ACTFPlayerController Function OnTeamChangedEvent *************************
struct CTFPlayerController_eventOnTeamChangedEvent_Parms
{
	ETeam OldTeam;
	ETeam NewTeam;
};
static FName NAME_ACTFPlayerController_OnTeamChangedEvent = FName(TEXT("OnTeamChangedEvent"));
void ACTFPlayerController::OnTeamChangedEvent(ETeam OldTeam, ETeam NewTeam)
{
	CTFPlayerController_eventOnTeamChangedEvent_Parms Parms;
	Parms.OldTeam=OldTeam;
	Parms.NewTeam=NewTeam;
	UFunction* Func = FindFunctionChecked(NAME_ACTFPlayerController_OnTeamChangedEvent);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACTFPlayerController_OnTeamChangedEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Controller|Events" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OldTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OldTeam;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewTeam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFPlayerController_OnTeamChangedEvent_Statics::NewProp_OldTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFPlayerController_OnTeamChangedEvent_Statics::NewProp_OldTeam = { "OldTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventOnTeamChangedEvent_Parms, OldTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFPlayerController_OnTeamChangedEvent_Statics::NewProp_NewTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFPlayerController_OnTeamChangedEvent_Statics::NewProp_NewTeam = { "NewTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerController_eventOnTeamChangedEvent_Parms, NewTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFPlayerController_OnTeamChangedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_OnTeamChangedEvent_Statics::NewProp_OldTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_OnTeamChangedEvent_Statics::NewProp_OldTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_OnTeamChangedEvent_Statics::NewProp_NewTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFPlayerController_OnTeamChangedEvent_Statics::NewProp_NewTeam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_OnTeamChangedEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFPlayerController_OnTeamChangedEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFPlayerController, nullptr, "OnTeamChangedEvent", Z_Construct_UFunction_ACTFPlayerController_OnTeamChangedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_OnTeamChangedEvent_Statics::PropPointers), sizeof(CTFPlayerController_eventOnTeamChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFPlayerController_OnTeamChangedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFPlayerController_OnTeamChangedEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CTFPlayerController_eventOnTeamChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFPlayerController_OnTeamChangedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFPlayerController_OnTeamChangedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACTFPlayerController Function OnTeamChangedEvent ***************************

// ********** Begin Class ACTFPlayerController *****************************************************
void ACTFPlayerController::StaticRegisterNativesACTFPlayerController()
{
	UClass* Class = ACTFPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindNearestInteractableFlag", &ACTFPlayerController::execFindNearestInteractableFlag },
		{ "GetCarriedFlag", &ACTFPlayerController::execGetCarriedFlag },
		{ "GetCTFPlayerComponent", &ACTFPlayerController::execGetCTFPlayerComponent },
		{ "GetCTFPlayerState", &ACTFPlayerController::execGetCTFPlayerState },
		{ "GetCurrentCaptureZone", &ACTFPlayerController::execGetCurrentCaptureZone },
		{ "GetHealth", &ACTFPlayerController::execGetHealth },
		{ "GetHealthPercentage", &ACTFPlayerController::execGetHealthPercentage },
		{ "GetInteractionPrompt", &ACTFPlayerController::execGetInteractionPrompt },
		{ "GetTeam", &ACTFPlayerController::execGetTeam },
		{ "HandleDropFlagPressed", &ACTFPlayerController::execHandleDropFlagPressed },
		{ "HandleEnteredCaptureZone", &ACTFPlayerController::execHandleEnteredCaptureZone },
		{ "HandleExitedCaptureZone", &ACTFPlayerController::execHandleExitedCaptureZone },
		{ "HandleFlagDropped", &ACTFPlayerController::execHandleFlagDropped },
		{ "HandleFlagPickedUp", &ACTFPlayerController::execHandleFlagPickedUp },
		{ "HandleHealthChanged", &ACTFPlayerController::execHandleHealthChanged },
		{ "HandleInteractPressed", &ACTFPlayerController::execHandleInteractPressed },
		{ "HandleTeamChanged", &ACTFPlayerController::execHandleTeamChanged },
		{ "HasFlag", &ACTFPlayerController::execHasFlag },
		{ "IsAlive", &ACTFPlayerController::execIsAlive },
		{ "IsInCaptureZone", &ACTFPlayerController::execIsInCaptureZone },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACTFPlayerController;
UClass* ACTFPlayerController::GetPrivateStaticClass()
{
	using TClass = ACTFPlayerController;
	if (!Z_Registration_Info_UClass_ACTFPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CTFPlayerController"),
			Z_Registration_Info_UClass_ACTFPlayerController.InnerSingleton,
			StaticRegisterNativesACTFPlayerController,
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
	return Z_Registration_Info_UClass_ACTFPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ACTFPlayerController_NoRegister()
{
	return ACTFPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACTFPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "GameFramework/CTFPlayerController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionDistance_MetaData[] = {
		{ "Category", "CTF Controller|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowInteractionPrompts_MetaData[] = {
		{ "Category", "CTF Controller|Config" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDropFlagOnDeath_MetaData[] = {
		{ "Category", "CTF Controller|Config" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPlayerComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached References\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/CTFPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached References" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionDistance;
	static void NewProp_bShowInteractionPrompts_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInteractionPrompts;
	static void NewProp_bAutoDropFlagOnDeath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDropFlagOnDeath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedPlayerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACTFPlayerController_FindNearestInteractableFlag, "FindNearestInteractableFlag" }, // 277460646
		{ &Z_Construct_UFunction_ACTFPlayerController_GetCarriedFlag, "GetCarriedFlag" }, // 4200290607
		{ &Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerComponent, "GetCTFPlayerComponent" }, // 2558483287
		{ &Z_Construct_UFunction_ACTFPlayerController_GetCTFPlayerState, "GetCTFPlayerState" }, // 1015091512
		{ &Z_Construct_UFunction_ACTFPlayerController_GetCurrentCaptureZone, "GetCurrentCaptureZone" }, // 968546274
		{ &Z_Construct_UFunction_ACTFPlayerController_GetHealth, "GetHealth" }, // 3681453655
		{ &Z_Construct_UFunction_ACTFPlayerController_GetHealthPercentage, "GetHealthPercentage" }, // 2214414007
		{ &Z_Construct_UFunction_ACTFPlayerController_GetInteractionPrompt, "GetInteractionPrompt" }, // 3087793928
		{ &Z_Construct_UFunction_ACTFPlayerController_GetTeam, "GetTeam" }, // 3496359415
		{ &Z_Construct_UFunction_ACTFPlayerController_HandleDropFlagPressed, "HandleDropFlagPressed" }, // 393439732
		{ &Z_Construct_UFunction_ACTFPlayerController_HandleEnteredCaptureZone, "HandleEnteredCaptureZone" }, // 1118064383
		{ &Z_Construct_UFunction_ACTFPlayerController_HandleExitedCaptureZone, "HandleExitedCaptureZone" }, // 2014852948
		{ &Z_Construct_UFunction_ACTFPlayerController_HandleFlagDropped, "HandleFlagDropped" }, // 3032061951
		{ &Z_Construct_UFunction_ACTFPlayerController_HandleFlagPickedUp, "HandleFlagPickedUp" }, // 507819668
		{ &Z_Construct_UFunction_ACTFPlayerController_HandleHealthChanged, "HandleHealthChanged" }, // 2200498273
		{ &Z_Construct_UFunction_ACTFPlayerController_HandleInteractPressed, "HandleInteractPressed" }, // 3134769967
		{ &Z_Construct_UFunction_ACTFPlayerController_HandleTeamChanged, "HandleTeamChanged" }, // 1275800316
		{ &Z_Construct_UFunction_ACTFPlayerController_HasFlag, "HasFlag" }, // 3368714844
		{ &Z_Construct_UFunction_ACTFPlayerController_IsAlive, "IsAlive" }, // 139306462
		{ &Z_Construct_UFunction_ACTFPlayerController_IsInCaptureZone, "IsInCaptureZone" }, // 2482917567
		{ &Z_Construct_UFunction_ACTFPlayerController_OnEnteredCaptureZoneEvent, "OnEnteredCaptureZoneEvent" }, // 3304828442
		{ &Z_Construct_UFunction_ACTFPlayerController_OnExitedCaptureZoneEvent, "OnExitedCaptureZoneEvent" }, // 1708718960
		{ &Z_Construct_UFunction_ACTFPlayerController_OnFlagDroppedEvent, "OnFlagDroppedEvent" }, // 4262830830
		{ &Z_Construct_UFunction_ACTFPlayerController_OnFlagPickedUpEvent, "OnFlagPickedUpEvent" }, // 979735720
		{ &Z_Construct_UFunction_ACTFPlayerController_OnHealthChangedEvent, "OnHealthChangedEvent" }, // 2568208216
		{ &Z_Construct_UFunction_ACTFPlayerController_OnTeamChangedEvent, "OnTeamChangedEvent" }, // 838334934
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACTFPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACTFPlayerController_Statics::NewProp_InteractionDistance = { "InteractionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFPlayerController, InteractionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionDistance_MetaData), NewProp_InteractionDistance_MetaData) };
void Z_Construct_UClass_ACTFPlayerController_Statics::NewProp_bShowInteractionPrompts_SetBit(void* Obj)
{
	((ACTFPlayerController*)Obj)->bShowInteractionPrompts = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACTFPlayerController_Statics::NewProp_bShowInteractionPrompts = { "bShowInteractionPrompts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACTFPlayerController), &Z_Construct_UClass_ACTFPlayerController_Statics::NewProp_bShowInteractionPrompts_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowInteractionPrompts_MetaData), NewProp_bShowInteractionPrompts_MetaData) };
void Z_Construct_UClass_ACTFPlayerController_Statics::NewProp_bAutoDropFlagOnDeath_SetBit(void* Obj)
{
	((ACTFPlayerController*)Obj)->bAutoDropFlagOnDeath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACTFPlayerController_Statics::NewProp_bAutoDropFlagOnDeath = { "bAutoDropFlagOnDeath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACTFPlayerController), &Z_Construct_UClass_ACTFPlayerController_Statics::NewProp_bAutoDropFlagOnDeath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoDropFlagOnDeath_MetaData), NewProp_bAutoDropFlagOnDeath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACTFPlayerController_Statics::NewProp_CachedPlayerComponent = { "CachedPlayerComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFPlayerController, CachedPlayerComponent), Z_Construct_UClass_UCTFPlayerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPlayerComponent_MetaData), NewProp_CachedPlayerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACTFPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFPlayerController_Statics::NewProp_InteractionDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFPlayerController_Statics::NewProp_bShowInteractionPrompts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFPlayerController_Statics::NewProp_bAutoDropFlagOnDeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFPlayerController_Statics::NewProp_CachedPlayerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACTFPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACTFPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACTFPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACTFPlayerController_Statics::ClassParams = {
	&ACTFPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACTFPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACTFPlayerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACTFPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACTFPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACTFPlayerController()
{
	if (!Z_Registration_Info_UClass_ACTFPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACTFPlayerController.OuterSingleton, Z_Construct_UClass_ACTFPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACTFPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACTFPlayerController);
ACTFPlayerController::~ACTFPlayerController() {}
// ********** End Class ACTFPlayerController *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerController_h__Script_CaptureTheFlagGAS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACTFPlayerController, ACTFPlayerController::StaticClass, TEXT("ACTFPlayerController"), &Z_Registration_Info_UClass_ACTFPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACTFPlayerController), 2088177923U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerController_h__Script_CaptureTheFlagGAS_1094151949(TEXT("/Script/CaptureTheFlagGAS"),
	Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerController_h__Script_CaptureTheFlagGAS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerController_h__Script_CaptureTheFlagGAS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
