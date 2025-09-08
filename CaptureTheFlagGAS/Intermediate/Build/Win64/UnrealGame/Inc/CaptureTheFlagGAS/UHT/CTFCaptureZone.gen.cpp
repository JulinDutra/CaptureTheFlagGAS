// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gameplay/CTFCaptureZone.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCTFCaptureZone() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFCaptureZone();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFCaptureZone_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFGameState_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFPlayerState_NoRegister();
CAPTURETHEFLAGGAS_API UEnum* Z_Construct_UEnum_CaptureTheFlagGAS_ETeam();
CAPTURETHEFLAGGAS_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnCaptureZoneFlagCapturedDelegate__DelegateSignature();
CAPTURETHEFLAGGAS_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerEnteredZoneDelegate__DelegateSignature();
CAPTURETHEFLAGGAS_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerExitedZoneDelegate__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlagGAS();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnCaptureZoneFlagCapturedDelegate ************************************
struct Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnCaptureZoneFlagCapturedDelegate__DelegateSignature_Statics
{
	struct _Script_CaptureTheFlagGAS_eventOnCaptureZoneFlagCapturedDelegate_Parms
	{
		ETeam CapturingTeam;
		ACTFPlayerState* Player;
		int32 NewScore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CapturingTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CapturingTeam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnCaptureZoneFlagCapturedDelegate__DelegateSignature_Statics::NewProp_CapturingTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnCaptureZoneFlagCapturedDelegate__DelegateSignature_Statics::NewProp_CapturingTeam = { "CapturingTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnCaptureZoneFlagCapturedDelegate_Parms, CapturingTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnCaptureZoneFlagCapturedDelegate__DelegateSignature_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnCaptureZoneFlagCapturedDelegate_Parms, Player), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnCaptureZoneFlagCapturedDelegate__DelegateSignature_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnCaptureZoneFlagCapturedDelegate_Parms, NewScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnCaptureZoneFlagCapturedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnCaptureZoneFlagCapturedDelegate__DelegateSignature_Statics::NewProp_CapturingTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnCaptureZoneFlagCapturedDelegate__DelegateSignature_Statics::NewProp_CapturingTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnCaptureZoneFlagCapturedDelegate__DelegateSignature_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnCaptureZoneFlagCapturedDelegate__DelegateSignature_Statics::NewProp_NewScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnCaptureZoneFlagCapturedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnCaptureZoneFlagCapturedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS, nullptr, "OnCaptureZoneFlagCapturedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnCaptureZoneFlagCapturedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnCaptureZoneFlagCapturedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnCaptureZoneFlagCapturedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnCaptureZoneFlagCapturedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnCaptureZoneFlagCapturedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnCaptureZoneFlagCapturedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnCaptureZoneFlagCapturedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnCaptureZoneFlagCapturedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnCaptureZoneFlagCapturedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnCaptureZoneFlagCapturedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCaptureZoneFlagCapturedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCaptureZoneFlagCapturedDelegate, ETeam CapturingTeam, ACTFPlayerState* Player, int32 NewScore)
{
	struct _Script_CaptureTheFlagGAS_eventOnCaptureZoneFlagCapturedDelegate_Parms
	{
		ETeam CapturingTeam;
		ACTFPlayerState* Player;
		int32 NewScore;
	};
	_Script_CaptureTheFlagGAS_eventOnCaptureZoneFlagCapturedDelegate_Parms Parms;
	Parms.CapturingTeam=CapturingTeam;
	Parms.Player=Player;
	Parms.NewScore=NewScore;
	OnCaptureZoneFlagCapturedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCaptureZoneFlagCapturedDelegate **************************************

// ********** Begin Delegate FOnPlayerEnteredZoneDelegate ******************************************
struct Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerEnteredZoneDelegate__DelegateSignature_Statics
{
	struct _Script_CaptureTheFlagGAS_eventOnPlayerEnteredZoneDelegate_Parms
	{
		ACTFPlayerState* Player;
		ETeam ZoneTeam;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ZoneTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ZoneTeam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerEnteredZoneDelegate__DelegateSignature_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnPlayerEnteredZoneDelegate_Parms, Player), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerEnteredZoneDelegate__DelegateSignature_Statics::NewProp_ZoneTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerEnteredZoneDelegate__DelegateSignature_Statics::NewProp_ZoneTeam = { "ZoneTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnPlayerEnteredZoneDelegate_Parms, ZoneTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerEnteredZoneDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerEnteredZoneDelegate__DelegateSignature_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerEnteredZoneDelegate__DelegateSignature_Statics::NewProp_ZoneTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerEnteredZoneDelegate__DelegateSignature_Statics::NewProp_ZoneTeam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerEnteredZoneDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerEnteredZoneDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS, nullptr, "OnPlayerEnteredZoneDelegate__DelegateSignature", Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerEnteredZoneDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerEnteredZoneDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerEnteredZoneDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnPlayerEnteredZoneDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerEnteredZoneDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerEnteredZoneDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerEnteredZoneDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnPlayerEnteredZoneDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerEnteredZoneDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerEnteredZoneDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerEnteredZoneDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerEnteredZoneDelegate, ACTFPlayerState* Player, ETeam ZoneTeam)
{
	struct _Script_CaptureTheFlagGAS_eventOnPlayerEnteredZoneDelegate_Parms
	{
		ACTFPlayerState* Player;
		ETeam ZoneTeam;
	};
	_Script_CaptureTheFlagGAS_eventOnPlayerEnteredZoneDelegate_Parms Parms;
	Parms.Player=Player;
	Parms.ZoneTeam=ZoneTeam;
	OnPlayerEnteredZoneDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPlayerEnteredZoneDelegate ********************************************

// ********** Begin Delegate FOnPlayerExitedZoneDelegate *******************************************
struct Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerExitedZoneDelegate__DelegateSignature_Statics
{
	struct _Script_CaptureTheFlagGAS_eventOnPlayerExitedZoneDelegate_Parms
	{
		ACTFPlayerState* Player;
		ETeam ZoneTeam;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ZoneTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ZoneTeam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerExitedZoneDelegate__DelegateSignature_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnPlayerExitedZoneDelegate_Parms, Player), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerExitedZoneDelegate__DelegateSignature_Statics::NewProp_ZoneTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerExitedZoneDelegate__DelegateSignature_Statics::NewProp_ZoneTeam = { "ZoneTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnPlayerExitedZoneDelegate_Parms, ZoneTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerExitedZoneDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerExitedZoneDelegate__DelegateSignature_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerExitedZoneDelegate__DelegateSignature_Statics::NewProp_ZoneTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerExitedZoneDelegate__DelegateSignature_Statics::NewProp_ZoneTeam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerExitedZoneDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerExitedZoneDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS, nullptr, "OnPlayerExitedZoneDelegate__DelegateSignature", Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerExitedZoneDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerExitedZoneDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerExitedZoneDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnPlayerExitedZoneDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerExitedZoneDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerExitedZoneDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerExitedZoneDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnPlayerExitedZoneDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerExitedZoneDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerExitedZoneDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerExitedZoneDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerExitedZoneDelegate, ACTFPlayerState* Player, ETeam ZoneTeam)
{
	struct _Script_CaptureTheFlagGAS_eventOnPlayerExitedZoneDelegate_Parms
	{
		ACTFPlayerState* Player;
		ETeam ZoneTeam;
	};
	_Script_CaptureTheFlagGAS_eventOnPlayerExitedZoneDelegate_Parms Parms;
	Parms.Player=Player;
	Parms.ZoneTeam=ZoneTeam;
	OnPlayerExitedZoneDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPlayerExitedZoneDelegate *********************************************

// ********** Begin Class ACTFCaptureZone Function CanPlayerCapture ********************************
struct Z_Construct_UFunction_ACTFCaptureZone_CanPlayerCapture_Statics
{
	struct CTFCaptureZone_eventCanPlayerCapture_Parms
	{
		ACTFPlayerState* Player;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture Zone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Capture Logic\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Capture Logic" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFCaptureZone_CanPlayerCapture_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFCaptureZone_eventCanPlayerCapture_Parms, Player), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACTFCaptureZone_CanPlayerCapture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFCaptureZone_eventCanPlayerCapture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACTFCaptureZone_CanPlayerCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFCaptureZone_eventCanPlayerCapture_Parms), &Z_Construct_UFunction_ACTFCaptureZone_CanPlayerCapture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFCaptureZone_CanPlayerCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_CanPlayerCapture_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_CanPlayerCapture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_CanPlayerCapture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFCaptureZone_CanPlayerCapture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFCaptureZone, nullptr, "CanPlayerCapture", Z_Construct_UFunction_ACTFCaptureZone_CanPlayerCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_CanPlayerCapture_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFCaptureZone_CanPlayerCapture_Statics::CTFCaptureZone_eventCanPlayerCapture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_CanPlayerCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFCaptureZone_CanPlayerCapture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFCaptureZone_CanPlayerCapture_Statics::CTFCaptureZone_eventCanPlayerCapture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFCaptureZone_CanPlayerCapture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFCaptureZone_CanPlayerCapture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFCaptureZone::execCanPlayerCapture)
{
	P_GET_OBJECT(ACTFPlayerState,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanPlayerCapture(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class ACTFCaptureZone Function CanPlayerCapture **********************************

// ********** Begin Class ACTFCaptureZone Function GetOwningTeam ***********************************
struct Z_Construct_UFunction_ACTFCaptureZone_GetOwningTeam_Statics
{
	struct CTFCaptureZone_eventGetOwningTeam_Parms
	{
		ETeam ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture Zone" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFCaptureZone_GetOwningTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFCaptureZone_GetOwningTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFCaptureZone_eventGetOwningTeam_Parms, ReturnValue), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFCaptureZone_GetOwningTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_GetOwningTeam_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_GetOwningTeam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_GetOwningTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFCaptureZone_GetOwningTeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFCaptureZone, nullptr, "GetOwningTeam", Z_Construct_UFunction_ACTFCaptureZone_GetOwningTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_GetOwningTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFCaptureZone_GetOwningTeam_Statics::CTFCaptureZone_eventGetOwningTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_GetOwningTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFCaptureZone_GetOwningTeam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFCaptureZone_GetOwningTeam_Statics::CTFCaptureZone_eventGetOwningTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFCaptureZone_GetOwningTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFCaptureZone_GetOwningTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFCaptureZone::execGetOwningTeam)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETeam*)Z_Param__Result=P_THIS->GetOwningTeam();
	P_NATIVE_END;
}
// ********** End Class ACTFCaptureZone Function GetOwningTeam *************************************

// ********** Begin Class ACTFCaptureZone Function GetPlayersInZone ********************************
struct Z_Construct_UFunction_ACTFCaptureZone_GetPlayersInZone_Statics
{
	struct CTFCaptureZone_eventGetPlayersInZone_Parms
	{
		TArray<ACTFPlayerState*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture Zone" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFCaptureZone_GetPlayersInZone_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACTFCaptureZone_GetPlayersInZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFCaptureZone_eventGetPlayersInZone_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFCaptureZone_GetPlayersInZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_GetPlayersInZone_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_GetPlayersInZone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_GetPlayersInZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFCaptureZone_GetPlayersInZone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFCaptureZone, nullptr, "GetPlayersInZone", Z_Construct_UFunction_ACTFCaptureZone_GetPlayersInZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_GetPlayersInZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFCaptureZone_GetPlayersInZone_Statics::CTFCaptureZone_eventGetPlayersInZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_GetPlayersInZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFCaptureZone_GetPlayersInZone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFCaptureZone_GetPlayersInZone_Statics::CTFCaptureZone_eventGetPlayersInZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFCaptureZone_GetPlayersInZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFCaptureZone_GetPlayersInZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFCaptureZone::execGetPlayersInZone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ACTFPlayerState*>*)Z_Param__Result=P_THIS->GetPlayersInZone();
	P_NATIVE_END;
}
// ********** End Class ACTFCaptureZone Function GetPlayersInZone **********************************

// ********** Begin Class ACTFCaptureZone Function IsPlayerInZone **********************************
struct Z_Construct_UFunction_ACTFCaptureZone_IsPlayerInZone_Statics
{
	struct CTFCaptureZone_eventIsPlayerInZone_Parms
	{
		ACTFPlayerState* Player;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture Zone" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFCaptureZone_IsPlayerInZone_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFCaptureZone_eventIsPlayerInZone_Parms, Player), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACTFCaptureZone_IsPlayerInZone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFCaptureZone_eventIsPlayerInZone_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACTFCaptureZone_IsPlayerInZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFCaptureZone_eventIsPlayerInZone_Parms), &Z_Construct_UFunction_ACTFCaptureZone_IsPlayerInZone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFCaptureZone_IsPlayerInZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_IsPlayerInZone_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_IsPlayerInZone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_IsPlayerInZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFCaptureZone_IsPlayerInZone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFCaptureZone, nullptr, "IsPlayerInZone", Z_Construct_UFunction_ACTFCaptureZone_IsPlayerInZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_IsPlayerInZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFCaptureZone_IsPlayerInZone_Statics::CTFCaptureZone_eventIsPlayerInZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_IsPlayerInZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFCaptureZone_IsPlayerInZone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFCaptureZone_IsPlayerInZone_Statics::CTFCaptureZone_eventIsPlayerInZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFCaptureZone_IsPlayerInZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFCaptureZone_IsPlayerInZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFCaptureZone::execIsPlayerInZone)
{
	P_GET_OBJECT(ACTFPlayerState,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayerInZone(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class ACTFCaptureZone Function IsPlayerInZone ************************************

// ********** Begin Class ACTFCaptureZone Function OnCaptureCollisionBeginOverlap ******************
struct Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics
{
	struct CTFCaptureZone_eventOnCaptureCollisionBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Overlap Events\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overlap Events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFCaptureZone_eventOnCaptureCollisionBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFCaptureZone_eventOnCaptureCollisionBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFCaptureZone_eventOnCaptureCollisionBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFCaptureZone_eventOnCaptureCollisionBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((CTFCaptureZone_eventOnCaptureCollisionBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFCaptureZone_eventOnCaptureCollisionBeginOverlap_Parms), &Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFCaptureZone_eventOnCaptureCollisionBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFCaptureZone, nullptr, "OnCaptureCollisionBeginOverlap", Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics::CTFCaptureZone_eventOnCaptureCollisionBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics::CTFCaptureZone_eventOnCaptureCollisionBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFCaptureZone::execOnCaptureCollisionBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCaptureCollisionBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class ACTFCaptureZone Function OnCaptureCollisionBeginOverlap ********************

// ********** Begin Class ACTFCaptureZone Function OnCaptureCollisionEndOverlap ********************
struct Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionEndOverlap_Statics
{
	struct CTFCaptureZone_eventOnCaptureCollisionEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFCaptureZone_eventOnCaptureCollisionEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFCaptureZone_eventOnCaptureCollisionEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFCaptureZone_eventOnCaptureCollisionEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFCaptureZone_eventOnCaptureCollisionEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionEndOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFCaptureZone, nullptr, "OnCaptureCollisionEndOverlap", Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionEndOverlap_Statics::CTFCaptureZone_eventOnCaptureCollisionEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionEndOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionEndOverlap_Statics::CTFCaptureZone_eventOnCaptureCollisionEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFCaptureZone::execOnCaptureCollisionEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCaptureCollisionEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class ACTFCaptureZone Function OnCaptureCollisionEndOverlap **********************

// ********** Begin Class ACTFCaptureZone Function OnCaptureFailed *********************************
struct CTFCaptureZone_eventOnCaptureFailed_Parms
{
	ACTFPlayerState* Player;
	FString Reason;
};
static FName NAME_ACTFCaptureZone_OnCaptureFailed = FName(TEXT("OnCaptureFailed"));
void ACTFCaptureZone::OnCaptureFailed(ACTFPlayerState* Player, const FString& Reason)
{
	CTFCaptureZone_eventOnCaptureFailed_Parms Parms;
	Parms.Player=Player;
	Parms.Reason=Reason;
	UFunction* Func = FindFunctionChecked(NAME_ACTFCaptureZone_OnCaptureFailed);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACTFCaptureZone_OnCaptureFailed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture Zone" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFCaptureZone_OnCaptureFailed_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFCaptureZone_eventOnCaptureFailed_Parms, Player), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACTFCaptureZone_OnCaptureFailed_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFCaptureZone_eventOnCaptureFailed_Parms, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFCaptureZone_OnCaptureFailed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_OnCaptureFailed_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_OnCaptureFailed_Statics::NewProp_Reason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_OnCaptureFailed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFCaptureZone_OnCaptureFailed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFCaptureZone, nullptr, "OnCaptureFailed", Z_Construct_UFunction_ACTFCaptureZone_OnCaptureFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_OnCaptureFailed_Statics::PropPointers), sizeof(CTFCaptureZone_eventOnCaptureFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_OnCaptureFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFCaptureZone_OnCaptureFailed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CTFCaptureZone_eventOnCaptureFailed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFCaptureZone_OnCaptureFailed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFCaptureZone_OnCaptureFailed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACTFCaptureZone Function OnCaptureFailed ***********************************

// ********** Begin Class ACTFCaptureZone Function OnCaptureSuccess ********************************
struct CTFCaptureZone_eventOnCaptureSuccess_Parms
{
	ETeam CapturingTeam;
	ACTFPlayerState* Player;
	int32 NewScore;
};
static FName NAME_ACTFCaptureZone_OnCaptureSuccess = FName(TEXT("OnCaptureSuccess"));
void ACTFCaptureZone::OnCaptureSuccess(ETeam CapturingTeam, ACTFPlayerState* Player, int32 NewScore)
{
	CTFCaptureZone_eventOnCaptureSuccess_Parms Parms;
	Parms.CapturingTeam=CapturingTeam;
	Parms.Player=Player;
	Parms.NewScore=NewScore;
	UFunction* Func = FindFunctionChecked(NAME_ACTFCaptureZone_OnCaptureSuccess);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACTFCaptureZone_OnCaptureSuccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture Zone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint Events\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Events" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CapturingTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CapturingTeam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFCaptureZone_OnCaptureSuccess_Statics::NewProp_CapturingTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFCaptureZone_OnCaptureSuccess_Statics::NewProp_CapturingTeam = { "CapturingTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFCaptureZone_eventOnCaptureSuccess_Parms, CapturingTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFCaptureZone_OnCaptureSuccess_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFCaptureZone_eventOnCaptureSuccess_Parms, Player), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACTFCaptureZone_OnCaptureSuccess_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFCaptureZone_eventOnCaptureSuccess_Parms, NewScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFCaptureZone_OnCaptureSuccess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_OnCaptureSuccess_Statics::NewProp_CapturingTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_OnCaptureSuccess_Statics::NewProp_CapturingTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_OnCaptureSuccess_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_OnCaptureSuccess_Statics::NewProp_NewScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_OnCaptureSuccess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFCaptureZone_OnCaptureSuccess_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFCaptureZone, nullptr, "OnCaptureSuccess", Z_Construct_UFunction_ACTFCaptureZone_OnCaptureSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_OnCaptureSuccess_Statics::PropPointers), sizeof(CTFCaptureZone_eventOnCaptureSuccess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_OnCaptureSuccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFCaptureZone_OnCaptureSuccess_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CTFCaptureZone_eventOnCaptureSuccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFCaptureZone_OnCaptureSuccess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFCaptureZone_OnCaptureSuccess_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACTFCaptureZone Function OnCaptureSuccess **********************************

// ********** Begin Class ACTFCaptureZone Function OnPlayerEntered *********************************
struct CTFCaptureZone_eventOnPlayerEntered_Parms
{
	ACTFPlayerState* Player;
};
static FName NAME_ACTFCaptureZone_OnPlayerEntered = FName(TEXT("OnPlayerEntered"));
void ACTFCaptureZone::OnPlayerEntered(ACTFPlayerState* Player)
{
	CTFCaptureZone_eventOnPlayerEntered_Parms Parms;
	Parms.Player=Player;
	UFunction* Func = FindFunctionChecked(NAME_ACTFCaptureZone_OnPlayerEntered);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACTFCaptureZone_OnPlayerEntered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture Zone" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFCaptureZone_OnPlayerEntered_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFCaptureZone_eventOnPlayerEntered_Parms, Player), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFCaptureZone_OnPlayerEntered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_OnPlayerEntered_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_OnPlayerEntered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFCaptureZone_OnPlayerEntered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFCaptureZone, nullptr, "OnPlayerEntered", Z_Construct_UFunction_ACTFCaptureZone_OnPlayerEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_OnPlayerEntered_Statics::PropPointers), sizeof(CTFCaptureZone_eventOnPlayerEntered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_OnPlayerEntered_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFCaptureZone_OnPlayerEntered_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CTFCaptureZone_eventOnPlayerEntered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFCaptureZone_OnPlayerEntered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFCaptureZone_OnPlayerEntered_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACTFCaptureZone Function OnPlayerEntered ***********************************

// ********** Begin Class ACTFCaptureZone Function OnPlayerExited **********************************
struct CTFCaptureZone_eventOnPlayerExited_Parms
{
	ACTFPlayerState* Player;
};
static FName NAME_ACTFCaptureZone_OnPlayerExited = FName(TEXT("OnPlayerExited"));
void ACTFCaptureZone::OnPlayerExited(ACTFPlayerState* Player)
{
	CTFCaptureZone_eventOnPlayerExited_Parms Parms;
	Parms.Player=Player;
	UFunction* Func = FindFunctionChecked(NAME_ACTFCaptureZone_OnPlayerExited);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACTFCaptureZone_OnPlayerExited_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture Zone" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFCaptureZone_OnPlayerExited_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFCaptureZone_eventOnPlayerExited_Parms, Player), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFCaptureZone_OnPlayerExited_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_OnPlayerExited_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_OnPlayerExited_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFCaptureZone_OnPlayerExited_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFCaptureZone, nullptr, "OnPlayerExited", Z_Construct_UFunction_ACTFCaptureZone_OnPlayerExited_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_OnPlayerExited_Statics::PropPointers), sizeof(CTFCaptureZone_eventOnPlayerExited_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_OnPlayerExited_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFCaptureZone_OnPlayerExited_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CTFCaptureZone_eventOnPlayerExited_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFCaptureZone_OnPlayerExited()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFCaptureZone_OnPlayerExited_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACTFCaptureZone Function OnPlayerExited ************************************

// ********** Begin Class ACTFCaptureZone Function TryCapture **************************************
struct Z_Construct_UFunction_ACTFCaptureZone_TryCapture_Statics
{
	struct CTFCaptureZone_eventTryCapture_Parms
	{
		ACTFPlayerState* Player;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture Zone" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFCaptureZone_TryCapture_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFCaptureZone_eventTryCapture_Parms, Player), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACTFCaptureZone_TryCapture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFCaptureZone_eventTryCapture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACTFCaptureZone_TryCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFCaptureZone_eventTryCapture_Parms), &Z_Construct_UFunction_ACTFCaptureZone_TryCapture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFCaptureZone_TryCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_TryCapture_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFCaptureZone_TryCapture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_TryCapture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFCaptureZone_TryCapture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFCaptureZone, nullptr, "TryCapture", Z_Construct_UFunction_ACTFCaptureZone_TryCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_TryCapture_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFCaptureZone_TryCapture_Statics::CTFCaptureZone_eventTryCapture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFCaptureZone_TryCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFCaptureZone_TryCapture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFCaptureZone_TryCapture_Statics::CTFCaptureZone_eventTryCapture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFCaptureZone_TryCapture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFCaptureZone_TryCapture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFCaptureZone::execTryCapture)
{
	P_GET_OBJECT(ACTFPlayerState,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryCapture(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class ACTFCaptureZone Function TryCapture ****************************************

// ********** Begin Class ACTFCaptureZone **********************************************************
void ACTFCaptureZone::StaticRegisterNativesACTFCaptureZone()
{
	UClass* Class = ACTFCaptureZone::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanPlayerCapture", &ACTFCaptureZone::execCanPlayerCapture },
		{ "GetOwningTeam", &ACTFCaptureZone::execGetOwningTeam },
		{ "GetPlayersInZone", &ACTFCaptureZone::execGetPlayersInZone },
		{ "IsPlayerInZone", &ACTFCaptureZone::execIsPlayerInZone },
		{ "OnCaptureCollisionBeginOverlap", &ACTFCaptureZone::execOnCaptureCollisionBeginOverlap },
		{ "OnCaptureCollisionEndOverlap", &ACTFCaptureZone::execOnCaptureCollisionEndOverlap },
		{ "TryCapture", &ACTFCaptureZone::execTryCapture },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACTFCaptureZone;
UClass* ACTFCaptureZone::GetPrivateStaticClass()
{
	using TClass = ACTFCaptureZone;
	if (!Z_Registration_Info_UClass_ACTFCaptureZone.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CTFCaptureZone"),
			Z_Registration_Info_UClass_ACTFCaptureZone.InnerSingleton,
			StaticRegisterNativesACTFCaptureZone,
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
	return Z_Registration_Info_UClass_ACTFCaptureZone.InnerSingleton;
}
UClass* Z_Construct_UClass_ACTFCaptureZone_NoRegister()
{
	return ACTFCaptureZone::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACTFCaptureZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Gameplay/CTFCaptureZone.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningTeam_MetaData[] = {
		{ "Category", "Capture Zone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureRadius_MetaData[] = {
		{ "Category", "Capture Zone" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "50.0" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireEnemyFlag_MetaData[] = {
		{ "Category", "Capture Zone" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireOwnFlagAtBase_MetaData[] = {
		{ "Category", "Capture Zone" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootSceneComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Visual Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visual Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureCollision_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneEffect_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFlagCaptured_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerEnteredZone_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerExitedZone_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayersInZone_MetaData[] = {
		{ "Category", "Capture Zone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replicated State\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated State" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedGameState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached References\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/CTFCaptureZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached References" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OwningTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OwningTeam;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CaptureRadius;
	static void NewProp_bRequireEnemyFlag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireEnemyFlag;
	static void NewProp_bRequireOwnFlagAtBase_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireOwnFlagAtBase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootSceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ZoneMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ZoneEffect;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFlagCaptured;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerEnteredZone;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerExitedZone;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayersInZone_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayersInZone;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedGameState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACTFCaptureZone_CanPlayerCapture, "CanPlayerCapture" }, // 1294108587
		{ &Z_Construct_UFunction_ACTFCaptureZone_GetOwningTeam, "GetOwningTeam" }, // 3620250005
		{ &Z_Construct_UFunction_ACTFCaptureZone_GetPlayersInZone, "GetPlayersInZone" }, // 787580704
		{ &Z_Construct_UFunction_ACTFCaptureZone_IsPlayerInZone, "IsPlayerInZone" }, // 3965942489
		{ &Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionBeginOverlap, "OnCaptureCollisionBeginOverlap" }, // 1648246885
		{ &Z_Construct_UFunction_ACTFCaptureZone_OnCaptureCollisionEndOverlap, "OnCaptureCollisionEndOverlap" }, // 1957097624
		{ &Z_Construct_UFunction_ACTFCaptureZone_OnCaptureFailed, "OnCaptureFailed" }, // 1089592627
		{ &Z_Construct_UFunction_ACTFCaptureZone_OnCaptureSuccess, "OnCaptureSuccess" }, // 3273954551
		{ &Z_Construct_UFunction_ACTFCaptureZone_OnPlayerEntered, "OnPlayerEntered" }, // 1132042006
		{ &Z_Construct_UFunction_ACTFCaptureZone_OnPlayerExited, "OnPlayerExited" }, // 3799423697
		{ &Z_Construct_UFunction_ACTFCaptureZone_TryCapture, "TryCapture" }, // 419728985
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACTFCaptureZone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_OwningTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_OwningTeam = { "OwningTeam", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFCaptureZone, OwningTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningTeam_MetaData), NewProp_OwningTeam_MetaData) }; // 576107608
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_CaptureRadius = { "CaptureRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFCaptureZone, CaptureRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureRadius_MetaData), NewProp_CaptureRadius_MetaData) };
void Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_bRequireEnemyFlag_SetBit(void* Obj)
{
	((ACTFCaptureZone*)Obj)->bRequireEnemyFlag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_bRequireEnemyFlag = { "bRequireEnemyFlag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACTFCaptureZone), &Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_bRequireEnemyFlag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireEnemyFlag_MetaData), NewProp_bRequireEnemyFlag_MetaData) };
void Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_bRequireOwnFlagAtBase_SetBit(void* Obj)
{
	((ACTFCaptureZone*)Obj)->bRequireOwnFlagAtBase = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_bRequireOwnFlagAtBase = { "bRequireOwnFlagAtBase", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACTFCaptureZone), &Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_bRequireOwnFlagAtBase_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireOwnFlagAtBase_MetaData), NewProp_bRequireOwnFlagAtBase_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_RootSceneComponent = { "RootSceneComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFCaptureZone, RootSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootSceneComponent_MetaData), NewProp_RootSceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_ZoneMesh = { "ZoneMesh", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFCaptureZone, ZoneMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneMesh_MetaData), NewProp_ZoneMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_CaptureCollision = { "CaptureCollision", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFCaptureZone, CaptureCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureCollision_MetaData), NewProp_CaptureCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_ZoneEffect = { "ZoneEffect", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFCaptureZone, ZoneEffect), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneEffect_MetaData), NewProp_ZoneEffect_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_OnFlagCaptured = { "OnFlagCaptured", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFCaptureZone, OnFlagCaptured), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnCaptureZoneFlagCapturedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFlagCaptured_MetaData), NewProp_OnFlagCaptured_MetaData) }; // 1823161770
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_OnPlayerEnteredZone = { "OnPlayerEnteredZone", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFCaptureZone, OnPlayerEnteredZone), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerEnteredZoneDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerEnteredZone_MetaData), NewProp_OnPlayerEnteredZone_MetaData) }; // 3154694427
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_OnPlayerExitedZone = { "OnPlayerExitedZone", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFCaptureZone, OnPlayerExitedZone), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerExitedZoneDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerExitedZone_MetaData), NewProp_OnPlayerExitedZone_MetaData) }; // 3180266726
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_PlayersInZone_Inner = { "PlayersInZone", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_PlayersInZone = { "PlayersInZone", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFCaptureZone, PlayersInZone), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayersInZone_MetaData), NewProp_PlayersInZone_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_CachedGameState = { "CachedGameState", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFCaptureZone, CachedGameState), Z_Construct_UClass_ACTFGameState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedGameState_MetaData), NewProp_CachedGameState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACTFCaptureZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_OwningTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_OwningTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_CaptureRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_bRequireEnemyFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_bRequireOwnFlagAtBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_RootSceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_ZoneMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_CaptureCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_ZoneEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_OnFlagCaptured,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_OnPlayerEnteredZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_OnPlayerExitedZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_PlayersInZone_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_PlayersInZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFCaptureZone_Statics::NewProp_CachedGameState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACTFCaptureZone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACTFCaptureZone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACTFCaptureZone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACTFCaptureZone_Statics::ClassParams = {
	&ACTFCaptureZone::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACTFCaptureZone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACTFCaptureZone_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACTFCaptureZone_Statics::Class_MetaDataParams), Z_Construct_UClass_ACTFCaptureZone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACTFCaptureZone()
{
	if (!Z_Registration_Info_UClass_ACTFCaptureZone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACTFCaptureZone.OuterSingleton, Z_Construct_UClass_ACTFCaptureZone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACTFCaptureZone.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ACTFCaptureZone::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_PlayersInZone(TEXT("PlayersInZone"));
	const bool bIsValid = true
		&& Name_PlayersInZone == ClassReps[(int32)ENetFields_Private::PlayersInZone].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACTFCaptureZone"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ACTFCaptureZone);
ACTFCaptureZone::~ACTFCaptureZone() {}
// ********** End Class ACTFCaptureZone ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFCaptureZone_h__Script_CaptureTheFlagGAS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACTFCaptureZone, ACTFCaptureZone::StaticClass, TEXT("ACTFCaptureZone"), &Z_Registration_Info_UClass_ACTFCaptureZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACTFCaptureZone), 3743806966U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFCaptureZone_h__Script_CaptureTheFlagGAS_1823197580(TEXT("/Script/CaptureTheFlagGAS"),
	Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFCaptureZone_h__Script_CaptureTheFlagGAS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFCaptureZone_h__Script_CaptureTheFlagGAS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
