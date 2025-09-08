// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gameplay/CTFFlag.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCTFFlag() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFFlag();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFFlag_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFGameState_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFPlayerState_NoRegister();
CAPTURETHEFLAGGAS_API UEnum* Z_Construct_UEnum_CaptureTheFlagGAS_EFlagState();
CAPTURETHEFLAGGAS_API UEnum* Z_Construct_UEnum_CaptureTheFlagGAS_ETeam();
CAPTURETHEFLAGGAS_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagCapturedDelegate__DelegateSignature();
CAPTURETHEFLAGGAS_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagDroppedDelegate__DelegateSignature();
CAPTURETHEFLAGGAS_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagPickedUpDelegate__DelegateSignature();
CAPTURETHEFLAGGAS_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagReturnedDelegate__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlagGAS();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FFlagPickedUpDelegate *************************************************
struct Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagPickedUpDelegate__DelegateSignature_Statics
{
	struct _Script_CaptureTheFlagGAS_eventFlagPickedUpDelegate_Parms
	{
		ACTFFlag* Flag;
		ACTFPlayerState* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Flag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagPickedUpDelegate__DelegateSignature_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventFlagPickedUpDelegate_Parms, Flag), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagPickedUpDelegate__DelegateSignature_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventFlagPickedUpDelegate_Parms, Player), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagPickedUpDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagPickedUpDelegate__DelegateSignature_Statics::NewProp_Flag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagPickedUpDelegate__DelegateSignature_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagPickedUpDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagPickedUpDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS, nullptr, "FlagPickedUpDelegate__DelegateSignature", Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagPickedUpDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagPickedUpDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagPickedUpDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventFlagPickedUpDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagPickedUpDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagPickedUpDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagPickedUpDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventFlagPickedUpDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagPickedUpDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagPickedUpDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFlagPickedUpDelegate_DelegateWrapper(const FMulticastScriptDelegate& FlagPickedUpDelegate, ACTFFlag* Flag, ACTFPlayerState* Player)
{
	struct _Script_CaptureTheFlagGAS_eventFlagPickedUpDelegate_Parms
	{
		ACTFFlag* Flag;
		ACTFPlayerState* Player;
	};
	_Script_CaptureTheFlagGAS_eventFlagPickedUpDelegate_Parms Parms;
	Parms.Flag=Flag;
	Parms.Player=Player;
	FlagPickedUpDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FFlagPickedUpDelegate ***************************************************

// ********** Begin Delegate FFlagDroppedDelegate **************************************************
struct Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagDroppedDelegate__DelegateSignature_Statics
{
	struct _Script_CaptureTheFlagGAS_eventFlagDroppedDelegate_Parms
	{
		ACTFFlag* Flag;
		FVector DropLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Flag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DropLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagDroppedDelegate__DelegateSignature_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventFlagDroppedDelegate_Parms, Flag), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagDroppedDelegate__DelegateSignature_Statics::NewProp_DropLocation = { "DropLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventFlagDroppedDelegate_Parms, DropLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagDroppedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagDroppedDelegate__DelegateSignature_Statics::NewProp_Flag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagDroppedDelegate__DelegateSignature_Statics::NewProp_DropLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagDroppedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagDroppedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS, nullptr, "FlagDroppedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagDroppedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagDroppedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagDroppedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventFlagDroppedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagDroppedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagDroppedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagDroppedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventFlagDroppedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagDroppedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagDroppedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFlagDroppedDelegate_DelegateWrapper(const FMulticastScriptDelegate& FlagDroppedDelegate, ACTFFlag* Flag, FVector DropLocation)
{
	struct _Script_CaptureTheFlagGAS_eventFlagDroppedDelegate_Parms
	{
		ACTFFlag* Flag;
		FVector DropLocation;
	};
	_Script_CaptureTheFlagGAS_eventFlagDroppedDelegate_Parms Parms;
	Parms.Flag=Flag;
	Parms.DropLocation=DropLocation;
	FlagDroppedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FFlagDroppedDelegate ****************************************************

// ********** Begin Delegate FFlagReturnedDelegate *************************************************
struct Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagReturnedDelegate__DelegateSignature_Statics
{
	struct _Script_CaptureTheFlagGAS_eventFlagReturnedDelegate_Parms
	{
		ACTFFlag* Flag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Flag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagReturnedDelegate__DelegateSignature_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventFlagReturnedDelegate_Parms, Flag), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagReturnedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagReturnedDelegate__DelegateSignature_Statics::NewProp_Flag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagReturnedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagReturnedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS, nullptr, "FlagReturnedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagReturnedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagReturnedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagReturnedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventFlagReturnedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagReturnedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagReturnedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagReturnedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventFlagReturnedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagReturnedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagReturnedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFlagReturnedDelegate_DelegateWrapper(const FMulticastScriptDelegate& FlagReturnedDelegate, ACTFFlag* Flag)
{
	struct _Script_CaptureTheFlagGAS_eventFlagReturnedDelegate_Parms
	{
		ACTFFlag* Flag;
	};
	_Script_CaptureTheFlagGAS_eventFlagReturnedDelegate_Parms Parms;
	Parms.Flag=Flag;
	FlagReturnedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FFlagReturnedDelegate ***************************************************

// ********** Begin Delegate FFlagCapturedDelegate *************************************************
struct Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagCapturedDelegate__DelegateSignature_Statics
{
	struct _Script_CaptureTheFlagGAS_eventFlagCapturedDelegate_Parms
	{
		ACTFFlag* Flag;
		ETeam CapturingTeam;
		ACTFPlayerState* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Flag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CapturingTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CapturingTeam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagCapturedDelegate__DelegateSignature_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventFlagCapturedDelegate_Parms, Flag), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagCapturedDelegate__DelegateSignature_Statics::NewProp_CapturingTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagCapturedDelegate__DelegateSignature_Statics::NewProp_CapturingTeam = { "CapturingTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventFlagCapturedDelegate_Parms, CapturingTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagCapturedDelegate__DelegateSignature_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventFlagCapturedDelegate_Parms, Player), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagCapturedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagCapturedDelegate__DelegateSignature_Statics::NewProp_Flag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagCapturedDelegate__DelegateSignature_Statics::NewProp_CapturingTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagCapturedDelegate__DelegateSignature_Statics::NewProp_CapturingTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagCapturedDelegate__DelegateSignature_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagCapturedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagCapturedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS, nullptr, "FlagCapturedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagCapturedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagCapturedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagCapturedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventFlagCapturedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagCapturedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagCapturedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagCapturedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventFlagCapturedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagCapturedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagCapturedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFlagCapturedDelegate_DelegateWrapper(const FMulticastScriptDelegate& FlagCapturedDelegate, ACTFFlag* Flag, ETeam CapturingTeam, ACTFPlayerState* Player)
{
	struct _Script_CaptureTheFlagGAS_eventFlagCapturedDelegate_Parms
	{
		ACTFFlag* Flag;
		ETeam CapturingTeam;
		ACTFPlayerState* Player;
	};
	_Script_CaptureTheFlagGAS_eventFlagCapturedDelegate_Parms Parms;
	Parms.Flag=Flag;
	Parms.CapturingTeam=CapturingTeam;
	Parms.Player=Player;
	FlagCapturedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FFlagCapturedDelegate ***************************************************

// ********** Begin Class ACTFFlag Function CanBePickedUpBy ****************************************
struct Z_Construct_UFunction_ACTFFlag_CanBePickedUpBy_Statics
{
	struct CTFFlag_eventCanBePickedUpBy_Parms
	{
		const ACTFPlayerState* Player;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Flag Interaction\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag Interaction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFFlag_CanBePickedUpBy_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventCanBePickedUpBy_Parms, Player), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player_MetaData), NewProp_Player_MetaData) };
void Z_Construct_UFunction_ACTFFlag_CanBePickedUpBy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFFlag_eventCanBePickedUpBy_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACTFFlag_CanBePickedUpBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFFlag_eventCanBePickedUpBy_Parms), &Z_Construct_UFunction_ACTFFlag_CanBePickedUpBy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFFlag_CanBePickedUpBy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_CanBePickedUpBy_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_CanBePickedUpBy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_CanBePickedUpBy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_CanBePickedUpBy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "CanBePickedUpBy", Z_Construct_UFunction_ACTFFlag_CanBePickedUpBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_CanBePickedUpBy_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFFlag_CanBePickedUpBy_Statics::CTFFlag_eventCanBePickedUpBy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_CanBePickedUpBy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_CanBePickedUpBy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFFlag_CanBePickedUpBy_Statics::CTFFlag_eventCanBePickedUpBy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFFlag_CanBePickedUpBy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_CanBePickedUpBy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execCanBePickedUpBy)
{
	P_GET_OBJECT(ACTFPlayerState,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanBePickedUpBy(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function CanBePickedUpBy ******************************************

// ********** Begin Class ACTFFlag Function GetBaseLocation ****************************************
struct Z_Construct_UFunction_ACTFFlag_GetBaseLocation_Statics
{
	struct CTFFlag_eventGetBaseLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACTFFlag_GetBaseLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventGetBaseLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFFlag_GetBaseLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_GetBaseLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_GetBaseLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_GetBaseLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "GetBaseLocation", Z_Construct_UFunction_ACTFFlag_GetBaseLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_GetBaseLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFFlag_GetBaseLocation_Statics::CTFFlag_eventGetBaseLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_GetBaseLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_GetBaseLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFFlag_GetBaseLocation_Statics::CTFFlag_eventGetBaseLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFFlag_GetBaseLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_GetBaseLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execGetBaseLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetBaseLocation();
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function GetBaseLocation ******************************************

// ********** Begin Class ACTFFlag Function GetCarrier *********************************************
struct Z_Construct_UFunction_ACTFFlag_GetCarrier_Statics
{
	struct CTFFlag_eventGetCarrier_Parms
	{
		ACTFPlayerState* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Carrier Management\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Carrier Management" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFFlag_GetCarrier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventGetCarrier_Parms, ReturnValue), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFFlag_GetCarrier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_GetCarrier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_GetCarrier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_GetCarrier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "GetCarrier", Z_Construct_UFunction_ACTFFlag_GetCarrier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_GetCarrier_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFFlag_GetCarrier_Statics::CTFFlag_eventGetCarrier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_GetCarrier_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_GetCarrier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFFlag_GetCarrier_Statics::CTFFlag_eventGetCarrier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFFlag_GetCarrier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_GetCarrier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execGetCarrier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACTFPlayerState**)Z_Param__Result=P_THIS->GetCarrier();
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function GetCarrier ***********************************************

// ********** Begin Class ACTFFlag Function GetDistanceFromBase ************************************
struct Z_Construct_UFunction_ACTFFlag_GetDistanceFromBase_Statics
{
	struct CTFFlag_eventGetDistanceFromBase_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACTFFlag_GetDistanceFromBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventGetDistanceFromBase_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFFlag_GetDistanceFromBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_GetDistanceFromBase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_GetDistanceFromBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_GetDistanceFromBase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "GetDistanceFromBase", Z_Construct_UFunction_ACTFFlag_GetDistanceFromBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_GetDistanceFromBase_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFFlag_GetDistanceFromBase_Statics::CTFFlag_eventGetDistanceFromBase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_GetDistanceFromBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_GetDistanceFromBase_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFFlag_GetDistanceFromBase_Statics::CTFFlag_eventGetDistanceFromBase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFFlag_GetDistanceFromBase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_GetDistanceFromBase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execGetDistanceFromBase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDistanceFromBase();
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function GetDistanceFromBase **************************************

// ********** Begin Class ACTFFlag Function GetFlagState *******************************************
struct Z_Construct_UFunction_ACTFFlag_GetFlagState_Statics
{
	struct CTFFlag_eventGetFlagState_Parms
	{
		EFlagState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFFlag_GetFlagState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFFlag_GetFlagState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventGetFlagState_Parms, ReturnValue), Z_Construct_UEnum_CaptureTheFlagGAS_EFlagState, METADATA_PARAMS(0, nullptr) }; // 1543361479
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFFlag_GetFlagState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_GetFlagState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_GetFlagState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_GetFlagState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_GetFlagState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "GetFlagState", Z_Construct_UFunction_ACTFFlag_GetFlagState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_GetFlagState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFFlag_GetFlagState_Statics::CTFFlag_eventGetFlagState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_GetFlagState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_GetFlagState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFFlag_GetFlagState_Statics::CTFFlag_eventGetFlagState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFFlag_GetFlagState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_GetFlagState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execGetFlagState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EFlagState*)Z_Param__Result=P_THIS->GetFlagState();
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function GetFlagState *********************************************

// ********** Begin Class ACTFFlag Function GetOwningTeam ******************************************
struct Z_Construct_UFunction_ACTFFlag_GetOwningTeam_Statics
{
	struct CTFFlag_eventGetOwningTeam_Parms
	{
		ETeam ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Team Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Team Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFFlag_GetOwningTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFFlag_GetOwningTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventGetOwningTeam_Parms, ReturnValue), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFFlag_GetOwningTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_GetOwningTeam_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_GetOwningTeam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_GetOwningTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_GetOwningTeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "GetOwningTeam", Z_Construct_UFunction_ACTFFlag_GetOwningTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_GetOwningTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFFlag_GetOwningTeam_Statics::CTFFlag_eventGetOwningTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_GetOwningTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_GetOwningTeam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFFlag_GetOwningTeam_Statics::CTFFlag_eventGetOwningTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFFlag_GetOwningTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_GetOwningTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execGetOwningTeam)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETeam*)Z_Param__Result=P_THIS->GetOwningTeam();
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function GetOwningTeam ********************************************

// ********** Begin Class ACTFFlag Function GetReturnProgress **************************************
struct Z_Construct_UFunction_ACTFFlag_GetReturnProgress_Statics
{
	struct CTFFlag_eventGetReturnProgress_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACTFFlag_GetReturnProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventGetReturnProgress_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFFlag_GetReturnProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_GetReturnProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_GetReturnProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_GetReturnProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "GetReturnProgress", Z_Construct_UFunction_ACTFFlag_GetReturnProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_GetReturnProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFFlag_GetReturnProgress_Statics::CTFFlag_eventGetReturnProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_GetReturnProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_GetReturnProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFFlag_GetReturnProgress_Statics::CTFFlag_eventGetReturnProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFFlag_GetReturnProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_GetReturnProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execGetReturnProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetReturnProgress();
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function GetReturnProgress ****************************************

// ********** Begin Class ACTFFlag Function GetReturnTimer *****************************************
struct Z_Construct_UFunction_ACTFFlag_GetReturnTimer_Statics
{
	struct CTFFlag_eventGetReturnTimer_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return Timer\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return Timer" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACTFFlag_GetReturnTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventGetReturnTimer_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFFlag_GetReturnTimer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_GetReturnTimer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_GetReturnTimer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_GetReturnTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "GetReturnTimer", Z_Construct_UFunction_ACTFFlag_GetReturnTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_GetReturnTimer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFFlag_GetReturnTimer_Statics::CTFFlag_eventGetReturnTimer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_GetReturnTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_GetReturnTimer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFFlag_GetReturnTimer_Statics::CTFFlag_eventGetReturnTimer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFFlag_GetReturnTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_GetReturnTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execGetReturnTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetReturnTimer();
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function GetReturnTimer *******************************************

// ********** Begin Class ACTFFlag Function IsAtBase ***********************************************
struct Z_Construct_UFunction_ACTFFlag_IsAtBase_Statics
{
	struct CTFFlag_eventIsAtBase_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACTFFlag_IsAtBase_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFFlag_eventIsAtBase_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACTFFlag_IsAtBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFFlag_eventIsAtBase_Parms), &Z_Construct_UFunction_ACTFFlag_IsAtBase_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFFlag_IsAtBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_IsAtBase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_IsAtBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_IsAtBase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "IsAtBase", Z_Construct_UFunction_ACTFFlag_IsAtBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_IsAtBase_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFFlag_IsAtBase_Statics::CTFFlag_eventIsAtBase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_IsAtBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_IsAtBase_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFFlag_IsAtBase_Statics::CTFFlag_eventIsAtBase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFFlag_IsAtBase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_IsAtBase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execIsAtBase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAtBase();
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function IsAtBase *************************************************

// ********** Begin Class ACTFFlag Function IsCarried **********************************************
struct Z_Construct_UFunction_ACTFFlag_IsCarried_Statics
{
	struct CTFFlag_eventIsCarried_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACTFFlag_IsCarried_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFFlag_eventIsCarried_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACTFFlag_IsCarried_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFFlag_eventIsCarried_Parms), &Z_Construct_UFunction_ACTFFlag_IsCarried_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFFlag_IsCarried_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_IsCarried_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_IsCarried_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_IsCarried_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "IsCarried", Z_Construct_UFunction_ACTFFlag_IsCarried_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_IsCarried_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFFlag_IsCarried_Statics::CTFFlag_eventIsCarried_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_IsCarried_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_IsCarried_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFFlag_IsCarried_Statics::CTFFlag_eventIsCarried_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFFlag_IsCarried()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_IsCarried_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execIsCarried)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCarried();
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function IsCarried ************************************************

// ********** Begin Class ACTFFlag Function IsDropped **********************************************
struct Z_Construct_UFunction_ACTFFlag_IsDropped_Statics
{
	struct CTFFlag_eventIsDropped_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACTFFlag_IsDropped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFFlag_eventIsDropped_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACTFFlag_IsDropped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFFlag_eventIsDropped_Parms), &Z_Construct_UFunction_ACTFFlag_IsDropped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFFlag_IsDropped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_IsDropped_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_IsDropped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_IsDropped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "IsDropped", Z_Construct_UFunction_ACTFFlag_IsDropped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_IsDropped_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFFlag_IsDropped_Statics::CTFFlag_eventIsDropped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_IsDropped_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_IsDropped_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFFlag_IsDropped_Statics::CTFFlag_eventIsDropped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFFlag_IsDropped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_IsDropped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execIsDropped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDropped();
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function IsDropped ************************************************

// ********** Begin Class ACTFFlag Function OnCapturedEvent ****************************************
struct CTFFlag_eventOnCapturedEvent_Parms
{
	ETeam CapturingTeam;
	ACTFPlayerState* Player;
};
static FName NAME_ACTFFlag_OnCapturedEvent = FName(TEXT("OnCapturedEvent"));
void ACTFFlag::OnCapturedEvent(ETeam CapturingTeam, ACTFPlayerState* Player)
{
	CTFFlag_eventOnCapturedEvent_Parms Parms;
	Parms.CapturingTeam=CapturingTeam;
	Parms.Player=Player;
	UFunction* Func = FindFunctionChecked(NAME_ACTFFlag_OnCapturedEvent);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACTFFlag_OnCapturedEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CapturingTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CapturingTeam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFFlag_OnCapturedEvent_Statics::NewProp_CapturingTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFFlag_OnCapturedEvent_Statics::NewProp_CapturingTeam = { "CapturingTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventOnCapturedEvent_Parms, CapturingTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFFlag_OnCapturedEvent_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventOnCapturedEvent_Parms, Player), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFFlag_OnCapturedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_OnCapturedEvent_Statics::NewProp_CapturingTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_OnCapturedEvent_Statics::NewProp_CapturingTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_OnCapturedEvent_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_OnCapturedEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_OnCapturedEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "OnCapturedEvent", Z_Construct_UFunction_ACTFFlag_OnCapturedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_OnCapturedEvent_Statics::PropPointers), sizeof(CTFFlag_eventOnCapturedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_OnCapturedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_OnCapturedEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CTFFlag_eventOnCapturedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFFlag_OnCapturedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_OnCapturedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACTFFlag Function OnCapturedEvent ******************************************

// ********** Begin Class ACTFFlag Function OnDropped **********************************************
struct Z_Construct_UFunction_ACTFFlag_OnDropped_Statics
{
	struct CTFFlag_eventOnDropped_Parms
	{
		ACTFPlayerState* DroppingPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DroppingPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFFlag_OnDropped_Statics::NewProp_DroppingPlayer = { "DroppingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventOnDropped_Parms, DroppingPlayer), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFFlag_OnDropped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_OnDropped_Statics::NewProp_DroppingPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_OnDropped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_OnDropped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "OnDropped", Z_Construct_UFunction_ACTFFlag_OnDropped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_OnDropped_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFFlag_OnDropped_Statics::CTFFlag_eventOnDropped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_OnDropped_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_OnDropped_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFFlag_OnDropped_Statics::CTFFlag_eventOnDropped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFFlag_OnDropped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_OnDropped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execOnDropped)
{
	P_GET_OBJECT(ACTFPlayerState,Z_Param_DroppingPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDropped(Z_Param_DroppingPlayer);
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function OnDropped ************************************************

// ********** Begin Class ACTFFlag Function OnDroppedEvent *****************************************
struct CTFFlag_eventOnDroppedEvent_Parms
{
	FVector DropLocation;
};
static FName NAME_ACTFFlag_OnDroppedEvent = FName(TEXT("OnDroppedEvent"));
void ACTFFlag::OnDroppedEvent(FVector DropLocation)
{
	CTFFlag_eventOnDroppedEvent_Parms Parms;
	Parms.DropLocation=DropLocation;
	UFunction* Func = FindFunctionChecked(NAME_ACTFFlag_OnDroppedEvent);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACTFFlag_OnDroppedEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DropLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACTFFlag_OnDroppedEvent_Statics::NewProp_DropLocation = { "DropLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventOnDroppedEvent_Parms, DropLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFFlag_OnDroppedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_OnDroppedEvent_Statics::NewProp_DropLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_OnDroppedEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_OnDroppedEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "OnDroppedEvent", Z_Construct_UFunction_ACTFFlag_OnDroppedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_OnDroppedEvent_Statics::PropPointers), sizeof(CTFFlag_eventOnDroppedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_OnDroppedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_OnDroppedEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CTFFlag_eventOnDroppedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFFlag_OnDroppedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_OnDroppedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACTFFlag Function OnDroppedEvent *******************************************

// ********** Begin Class ACTFFlag Function OnInteractionSphereBeginOverlap ************************
struct Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics
{
	struct CTFFlag_eventOnInteractionSphereBeginOverlap_Parms
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
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventOnInteractionSphereBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventOnInteractionSphereBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventOnInteractionSphereBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventOnInteractionSphereBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((CTFFlag_eventOnInteractionSphereBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFFlag_eventOnInteractionSphereBeginOverlap_Parms), &Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventOnInteractionSphereBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "OnInteractionSphereBeginOverlap", Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics::CTFFlag_eventOnInteractionSphereBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics::CTFFlag_eventOnInteractionSphereBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execOnInteractionSphereBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInteractionSphereBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function OnInteractionSphereBeginOverlap **************************

// ********** Begin Class ACTFFlag Function OnPickedUpEvent ****************************************
struct CTFFlag_eventOnPickedUpEvent_Parms
{
	ACTFPlayerState* Player;
};
static FName NAME_ACTFFlag_OnPickedUpEvent = FName(TEXT("OnPickedUpEvent"));
void ACTFFlag::OnPickedUpEvent(ACTFPlayerState* Player)
{
	CTFFlag_eventOnPickedUpEvent_Parms Parms;
	Parms.Player=Player;
	UFunction* Func = FindFunctionChecked(NAME_ACTFFlag_OnPickedUpEvent);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACTFFlag_OnPickedUpEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFFlag_OnPickedUpEvent_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventOnPickedUpEvent_Parms, Player), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFFlag_OnPickedUpEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_OnPickedUpEvent_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_OnPickedUpEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_OnPickedUpEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "OnPickedUpEvent", Z_Construct_UFunction_ACTFFlag_OnPickedUpEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_OnPickedUpEvent_Statics::PropPointers), sizeof(CTFFlag_eventOnPickedUpEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_OnPickedUpEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_OnPickedUpEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CTFFlag_eventOnPickedUpEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFFlag_OnPickedUpEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_OnPickedUpEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACTFFlag Function OnPickedUpEvent ******************************************

// ********** Begin Class ACTFFlag Function OnRep_Carrier ******************************************
struct Z_Construct_UFunction_ACTFFlag_OnRep_Carrier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_OnRep_Carrier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "OnRep_Carrier", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_OnRep_Carrier_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_OnRep_Carrier_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFFlag_OnRep_Carrier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_OnRep_Carrier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execOnRep_Carrier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Carrier();
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function OnRep_Carrier ********************************************

// ********** Begin Class ACTFFlag Function OnRep_FlagState ****************************************
struct Z_Construct_UFunction_ACTFFlag_OnRep_FlagState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replication Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replication Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_OnRep_FlagState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "OnRep_FlagState", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_OnRep_FlagState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_OnRep_FlagState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFFlag_OnRep_FlagState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_OnRep_FlagState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execOnRep_FlagState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_FlagState();
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function OnRep_FlagState ******************************************

// ********** Begin Class ACTFFlag Function OnRep_ReturnTimer **************************************
struct Z_Construct_UFunction_ACTFFlag_OnRep_ReturnTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_OnRep_ReturnTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "OnRep_ReturnTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_OnRep_ReturnTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_OnRep_ReturnTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFFlag_OnRep_ReturnTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_OnRep_ReturnTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execOnRep_ReturnTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ReturnTimer();
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function OnRep_ReturnTimer ****************************************

// ********** Begin Class ACTFFlag Function OnReturnedEvent ****************************************
static FName NAME_ACTFFlag_OnReturnedEvent = FName(TEXT("OnReturnedEvent"));
void ACTFFlag::OnReturnedEvent()
{
	UFunction* Func = FindFunctionChecked(NAME_ACTFFlag_OnReturnedEvent);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACTFFlag_OnReturnedEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_OnReturnedEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "OnReturnedEvent", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_OnReturnedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_OnReturnedEvent_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFFlag_OnReturnedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_OnReturnedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACTFFlag Function OnReturnedEvent ******************************************

// ********** Begin Class ACTFFlag Function OnStateChanged *****************************************
struct CTFFlag_eventOnStateChanged_Parms
{
	EFlagState OldState;
	EFlagState NewState;
};
static FName NAME_ACTFFlag_OnStateChanged = FName(TEXT("OnStateChanged"));
void ACTFFlag::OnStateChanged(EFlagState OldState, EFlagState NewState)
{
	CTFFlag_eventOnStateChanged_Parms Parms;
	Parms.OldState=OldState;
	Parms.NewState=NewState;
	UFunction* Func = FindFunctionChecked(NAME_ACTFFlag_OnStateChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACTFFlag_OnStateChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OldState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFFlag_OnStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFFlag_OnStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventOnStateChanged_Parms, OldState), Z_Construct_UEnum_CaptureTheFlagGAS_EFlagState, METADATA_PARAMS(0, nullptr) }; // 1543361479
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFFlag_OnStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFFlag_OnStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventOnStateChanged_Parms, NewState), Z_Construct_UEnum_CaptureTheFlagGAS_EFlagState, METADATA_PARAMS(0, nullptr) }; // 1543361479
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFFlag_OnStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_OnStateChanged_Statics::NewProp_OldState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_OnStateChanged_Statics::NewProp_OldState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_OnStateChanged_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_OnStateChanged_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_OnStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_OnStateChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "OnStateChanged", Z_Construct_UFunction_ACTFFlag_OnStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_OnStateChanged_Statics::PropPointers), sizeof(CTFFlag_eventOnStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_OnStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_OnStateChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CTFFlag_eventOnStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFFlag_OnStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_OnStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACTFFlag Function OnStateChanged *******************************************

// ********** Begin Class ACTFFlag Function ResetFlag **********************************************
struct Z_Construct_UFunction_ACTFFlag_ResetFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Utility\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_ResetFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "ResetFlag", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_ResetFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_ResetFlag_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFFlag_ResetFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_ResetFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execResetFlag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetFlag();
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function ResetFlag ************************************************

// ********** Begin Class ACTFFlag Function ReturnToBase *******************************************
struct Z_Construct_UFunction_ACTFFlag_ReturnToBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_ReturnToBase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "ReturnToBase", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_ReturnToBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_ReturnToBase_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFFlag_ReturnToBase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_ReturnToBase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execReturnToBase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReturnToBase();
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function ReturnToBase *********************************************

// ********** Begin Class ACTFFlag Function ReturnToCenter *****************************************
struct Z_Construct_UFunction_ACTFFlag_ReturnToCenter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_ReturnToCenter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "ReturnToCenter", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_ReturnToCenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_ReturnToCenter_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFFlag_ReturnToCenter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_ReturnToCenter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execReturnToCenter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReturnToCenter();
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function ReturnToCenter *******************************************

// ********** Begin Class ACTFFlag Function SetBaseLocation ****************************************
struct Z_Construct_UFunction_ACTFFlag_SetBaseLocation_Statics
{
	struct CTFFlag_eventSetBaseLocation_Parms
	{
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Position Management\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Position Management" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACTFFlag_SetBaseLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventSetBaseLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFFlag_SetBaseLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_SetBaseLocation_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_SetBaseLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_SetBaseLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "SetBaseLocation", Z_Construct_UFunction_ACTFFlag_SetBaseLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_SetBaseLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFFlag_SetBaseLocation_Statics::CTFFlag_eventSetBaseLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_SetBaseLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_SetBaseLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFFlag_SetBaseLocation_Statics::CTFFlag_eventSetBaseLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFFlag_SetBaseLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_SetBaseLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execSetBaseLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBaseLocation(Z_Param_Out_Location);
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function SetBaseLocation ******************************************

// ********** Begin Class ACTFFlag Function SetCarrier *********************************************
struct Z_Construct_UFunction_ACTFFlag_SetCarrier_Statics
{
	struct CTFFlag_eventSetCarrier_Parms
	{
		ACTFPlayerState* NewCarrier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCarrier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFFlag_SetCarrier_Statics::NewProp_NewCarrier = { "NewCarrier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventSetCarrier_Parms, NewCarrier), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFFlag_SetCarrier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_SetCarrier_Statics::NewProp_NewCarrier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_SetCarrier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_SetCarrier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "SetCarrier", Z_Construct_UFunction_ACTFFlag_SetCarrier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_SetCarrier_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFFlag_SetCarrier_Statics::CTFFlag_eventSetCarrier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_SetCarrier_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_SetCarrier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFFlag_SetCarrier_Statics::CTFFlag_eventSetCarrier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFFlag_SetCarrier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_SetCarrier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execSetCarrier)
{
	P_GET_OBJECT(ACTFPlayerState,Z_Param_NewCarrier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCarrier(Z_Param_NewCarrier);
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function SetCarrier ***********************************************

// ********** Begin Class ACTFFlag Function SetFlagState *******************************************
struct Z_Construct_UFunction_ACTFFlag_SetFlagState_Statics
{
	struct CTFFlag_eventSetFlagState_Parms
	{
		EFlagState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Flag State Management\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag State Management" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACTFFlag_SetFlagState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACTFFlag_SetFlagState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventSetFlagState_Parms, NewState), Z_Construct_UEnum_CaptureTheFlagGAS_EFlagState, METADATA_PARAMS(0, nullptr) }; // 1543361479
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFFlag_SetFlagState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_SetFlagState_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_SetFlagState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_SetFlagState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_SetFlagState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "SetFlagState", Z_Construct_UFunction_ACTFFlag_SetFlagState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_SetFlagState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFFlag_SetFlagState_Statics::CTFFlag_eventSetFlagState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_SetFlagState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_SetFlagState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFFlag_SetFlagState_Statics::CTFFlag_eventSetFlagState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFFlag_SetFlagState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_SetFlagState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execSetFlagState)
{
	P_GET_ENUM(EFlagState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFlagState(EFlagState(Z_Param_NewState));
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function SetFlagState *********************************************

// ********** Begin Class ACTFFlag Function TryCapture *********************************************
struct Z_Construct_UFunction_ACTFFlag_TryCapture_Statics
{
	struct CTFFlag_eventTryCapture_Parms
	{
		ACTFPlayerState* CapturingPlayer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapturingPlayer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFFlag_TryCapture_Statics::NewProp_CapturingPlayer = { "CapturingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventTryCapture_Parms, CapturingPlayer), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACTFFlag_TryCapture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFFlag_eventTryCapture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACTFFlag_TryCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFFlag_eventTryCapture_Parms), &Z_Construct_UFunction_ACTFFlag_TryCapture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFFlag_TryCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_TryCapture_Statics::NewProp_CapturingPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_TryCapture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_TryCapture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_TryCapture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "TryCapture", Z_Construct_UFunction_ACTFFlag_TryCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_TryCapture_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFFlag_TryCapture_Statics::CTFFlag_eventTryCapture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_TryCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_TryCapture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFFlag_TryCapture_Statics::CTFFlag_eventTryCapture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFFlag_TryCapture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_TryCapture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execTryCapture)
{
	P_GET_OBJECT(ACTFPlayerState,Z_Param_CapturingPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryCapture(Z_Param_CapturingPlayer);
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function TryCapture ***********************************************

// ********** Begin Class ACTFFlag Function TryPickUp **********************************************
struct Z_Construct_UFunction_ACTFFlag_TryPickUp_Statics
{
	struct CTFFlag_eventTryPickUp_Parms
	{
		ACTFPlayerState* Player;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFFlag_TryPickUp_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventTryPickUp_Parms, Player), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACTFFlag_TryPickUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFFlag_eventTryPickUp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACTFFlag_TryPickUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFFlag_eventTryPickUp_Parms), &Z_Construct_UFunction_ACTFFlag_TryPickUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFFlag_TryPickUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_TryPickUp_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_TryPickUp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_TryPickUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_TryPickUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "TryPickUp", Z_Construct_UFunction_ACTFFlag_TryPickUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_TryPickUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFFlag_TryPickUp_Statics::CTFFlag_eventTryPickUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_TryPickUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_TryPickUp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFFlag_TryPickUp_Statics::CTFFlag_eventTryPickUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFFlag_TryPickUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_TryPickUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execTryPickUp)
{
	P_GET_OBJECT(ACTFPlayerState,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryPickUp(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function TryPickUp ************************************************

// ********** Begin Class ACTFFlag Function ValidateCapture ****************************************
struct Z_Construct_UFunction_ACTFFlag_ValidateCapture_Statics
{
	struct CTFFlag_eventValidateCapture_Parms
	{
		ACTFPlayerState* Player;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Validation Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Validation Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACTFFlag_ValidateCapture_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFFlag_eventValidateCapture_Parms, Player), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACTFFlag_ValidateCapture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFFlag_eventValidateCapture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACTFFlag_ValidateCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFFlag_eventValidateCapture_Parms), &Z_Construct_UFunction_ACTFFlag_ValidateCapture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACTFFlag_ValidateCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_ValidateCapture_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACTFFlag_ValidateCapture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_ValidateCapture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_ValidateCapture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "ValidateCapture", Z_Construct_UFunction_ACTFFlag_ValidateCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_ValidateCapture_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACTFFlag_ValidateCapture_Statics::CTFFlag_eventValidateCapture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_ValidateCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_ValidateCapture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACTFFlag_ValidateCapture_Statics::CTFFlag_eventValidateCapture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACTFFlag_ValidateCapture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_ValidateCapture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execValidateCapture)
{
	P_GET_OBJECT(ACTFPlayerState,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ValidateCapture(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function ValidateCapture ******************************************

// ********** Begin Class ACTFFlag Function ValidateState ******************************************
struct Z_Construct_UFunction_ACTFFlag_ValidateState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACTFFlag_ValidateState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACTFFlag, nullptr, "ValidateState", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACTFFlag_ValidateState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACTFFlag_ValidateState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACTFFlag_ValidateState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACTFFlag_ValidateState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACTFFlag::execValidateState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ValidateState();
	P_NATIVE_END;
}
// ********** End Class ACTFFlag Function ValidateState ********************************************

// ********** Begin Class ACTFFlag *****************************************************************
void ACTFFlag::StaticRegisterNativesACTFFlag()
{
	UClass* Class = ACTFFlag::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanBePickedUpBy", &ACTFFlag::execCanBePickedUpBy },
		{ "GetBaseLocation", &ACTFFlag::execGetBaseLocation },
		{ "GetCarrier", &ACTFFlag::execGetCarrier },
		{ "GetDistanceFromBase", &ACTFFlag::execGetDistanceFromBase },
		{ "GetFlagState", &ACTFFlag::execGetFlagState },
		{ "GetOwningTeam", &ACTFFlag::execGetOwningTeam },
		{ "GetReturnProgress", &ACTFFlag::execGetReturnProgress },
		{ "GetReturnTimer", &ACTFFlag::execGetReturnTimer },
		{ "IsAtBase", &ACTFFlag::execIsAtBase },
		{ "IsCarried", &ACTFFlag::execIsCarried },
		{ "IsDropped", &ACTFFlag::execIsDropped },
		{ "OnDropped", &ACTFFlag::execOnDropped },
		{ "OnInteractionSphereBeginOverlap", &ACTFFlag::execOnInteractionSphereBeginOverlap },
		{ "OnRep_Carrier", &ACTFFlag::execOnRep_Carrier },
		{ "OnRep_FlagState", &ACTFFlag::execOnRep_FlagState },
		{ "OnRep_ReturnTimer", &ACTFFlag::execOnRep_ReturnTimer },
		{ "ResetFlag", &ACTFFlag::execResetFlag },
		{ "ReturnToBase", &ACTFFlag::execReturnToBase },
		{ "ReturnToCenter", &ACTFFlag::execReturnToCenter },
		{ "SetBaseLocation", &ACTFFlag::execSetBaseLocation },
		{ "SetCarrier", &ACTFFlag::execSetCarrier },
		{ "SetFlagState", &ACTFFlag::execSetFlagState },
		{ "TryCapture", &ACTFFlag::execTryCapture },
		{ "TryPickUp", &ACTFFlag::execTryPickUp },
		{ "ValidateCapture", &ACTFFlag::execValidateCapture },
		{ "ValidateState", &ACTFFlag::execValidateState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACTFFlag;
UClass* ACTFFlag::GetPrivateStaticClass()
{
	using TClass = ACTFFlag;
	if (!Z_Registration_Info_UClass_ACTFFlag.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CTFFlag"),
			Z_Registration_Info_UClass_ACTFFlag.InnerSingleton,
			StaticRegisterNativesACTFFlag,
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
	return Z_Registration_Info_UClass_ACTFFlag.InnerSingleton;
}
UClass* Z_Construct_UClass_ACTFFlag_NoRegister()
{
	return ACTFFlag::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACTFFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Gameplay/CTFFlag.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFlagPickedUp_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event Delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event Delegates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFlagDropped_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFlagReturned_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFlagCaptured_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootSceneComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionSphere_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "Flag" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replicated Properties\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated Properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Carrier_MetaData[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseLocation_MetaData[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnTimer_MetaData[] = {
		{ "Category", "Flag" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningTeam_MetaData[] = {
		{ "Category", "Flag" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Team Configuration\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Team Configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoReturnTime_MetaData[] = {
		{ "Category", "Configuration" },
		{ "ClampMax", "120.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionRadius_MetaData[] = {
		{ "Category", "Configuration" },
		{ "ClampMax", "500.0" },
		{ "ClampMin", "50.0" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagCarrierEffect_MetaData[] = {
		{ "Category", "Configuration" },
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedGameState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Internal State\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal State" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidationTimer_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fixed: Per-instance validation timer instead of static\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/CTFFlag.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fixed: Per-instance validation timer instead of static" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFlagPickedUp;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFlagDropped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFlagReturned;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFlagCaptured;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootSceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlagMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionSphere;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Carrier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnTimer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OwningTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OwningTeam;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoReturnTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionRadius;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FlagCarrierEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedGameState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DropTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ValidationTimer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACTFFlag_CanBePickedUpBy, "CanBePickedUpBy" }, // 2134669087
		{ &Z_Construct_UFunction_ACTFFlag_GetBaseLocation, "GetBaseLocation" }, // 3683075504
		{ &Z_Construct_UFunction_ACTFFlag_GetCarrier, "GetCarrier" }, // 39676323
		{ &Z_Construct_UFunction_ACTFFlag_GetDistanceFromBase, "GetDistanceFromBase" }, // 1852100736
		{ &Z_Construct_UFunction_ACTFFlag_GetFlagState, "GetFlagState" }, // 1471136964
		{ &Z_Construct_UFunction_ACTFFlag_GetOwningTeam, "GetOwningTeam" }, // 2775895670
		{ &Z_Construct_UFunction_ACTFFlag_GetReturnProgress, "GetReturnProgress" }, // 4167957304
		{ &Z_Construct_UFunction_ACTFFlag_GetReturnTimer, "GetReturnTimer" }, // 2312860903
		{ &Z_Construct_UFunction_ACTFFlag_IsAtBase, "IsAtBase" }, // 2117006276
		{ &Z_Construct_UFunction_ACTFFlag_IsCarried, "IsCarried" }, // 2722842620
		{ &Z_Construct_UFunction_ACTFFlag_IsDropped, "IsDropped" }, // 703481035
		{ &Z_Construct_UFunction_ACTFFlag_OnCapturedEvent, "OnCapturedEvent" }, // 3869527409
		{ &Z_Construct_UFunction_ACTFFlag_OnDropped, "OnDropped" }, // 1833623332
		{ &Z_Construct_UFunction_ACTFFlag_OnDroppedEvent, "OnDroppedEvent" }, // 456892861
		{ &Z_Construct_UFunction_ACTFFlag_OnInteractionSphereBeginOverlap, "OnInteractionSphereBeginOverlap" }, // 2419124342
		{ &Z_Construct_UFunction_ACTFFlag_OnPickedUpEvent, "OnPickedUpEvent" }, // 2420899187
		{ &Z_Construct_UFunction_ACTFFlag_OnRep_Carrier, "OnRep_Carrier" }, // 675742971
		{ &Z_Construct_UFunction_ACTFFlag_OnRep_FlagState, "OnRep_FlagState" }, // 3698688858
		{ &Z_Construct_UFunction_ACTFFlag_OnRep_ReturnTimer, "OnRep_ReturnTimer" }, // 1939094730
		{ &Z_Construct_UFunction_ACTFFlag_OnReturnedEvent, "OnReturnedEvent" }, // 3464807428
		{ &Z_Construct_UFunction_ACTFFlag_OnStateChanged, "OnStateChanged" }, // 2895018062
		{ &Z_Construct_UFunction_ACTFFlag_ResetFlag, "ResetFlag" }, // 2370240963
		{ &Z_Construct_UFunction_ACTFFlag_ReturnToBase, "ReturnToBase" }, // 1504655559
		{ &Z_Construct_UFunction_ACTFFlag_ReturnToCenter, "ReturnToCenter" }, // 1863709727
		{ &Z_Construct_UFunction_ACTFFlag_SetBaseLocation, "SetBaseLocation" }, // 3100921902
		{ &Z_Construct_UFunction_ACTFFlag_SetCarrier, "SetCarrier" }, // 2855264129
		{ &Z_Construct_UFunction_ACTFFlag_SetFlagState, "SetFlagState" }, // 1606918571
		{ &Z_Construct_UFunction_ACTFFlag_TryCapture, "TryCapture" }, // 121330272
		{ &Z_Construct_UFunction_ACTFFlag_TryPickUp, "TryPickUp" }, // 8867477
		{ &Z_Construct_UFunction_ACTFFlag_ValidateCapture, "ValidateCapture" }, // 2256694640
		{ &Z_Construct_UFunction_ACTFFlag_ValidateState, "ValidateState" }, // 3210610061
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACTFFlag>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACTFFlag_Statics::NewProp_OnFlagPickedUp = { "OnFlagPickedUp", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFFlag, OnFlagPickedUp), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagPickedUpDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFlagPickedUp_MetaData), NewProp_OnFlagPickedUp_MetaData) }; // 115166690
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACTFFlag_Statics::NewProp_OnFlagDropped = { "OnFlagDropped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFFlag, OnFlagDropped), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagDroppedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFlagDropped_MetaData), NewProp_OnFlagDropped_MetaData) }; // 1157658571
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACTFFlag_Statics::NewProp_OnFlagReturned = { "OnFlagReturned", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFFlag, OnFlagReturned), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagReturnedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFlagReturned_MetaData), NewProp_OnFlagReturned_MetaData) }; // 3754384218
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACTFFlag_Statics::NewProp_OnFlagCaptured = { "OnFlagCaptured", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFFlag, OnFlagCaptured), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_FlagCapturedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFlagCaptured_MetaData), NewProp_OnFlagCaptured_MetaData) }; // 879428387
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACTFFlag_Statics::NewProp_RootSceneComponent = { "RootSceneComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFFlag, RootSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootSceneComponent_MetaData), NewProp_RootSceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACTFFlag_Statics::NewProp_FlagMesh = { "FlagMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFFlag, FlagMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagMesh_MetaData), NewProp_FlagMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACTFFlag_Statics::NewProp_InteractionSphere = { "InteractionSphere", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFFlag, InteractionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionSphere_MetaData), NewProp_InteractionSphere_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACTFFlag_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACTFFlag_Statics::NewProp_CurrentState = { "CurrentState", "OnRep_FlagState", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFFlag, CurrentState), Z_Construct_UEnum_CaptureTheFlagGAS_EFlagState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 1543361479
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACTFFlag_Statics::NewProp_Carrier = { "Carrier", "OnRep_Carrier", (EPropertyFlags)0x0124080100000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFFlag, Carrier), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Carrier_MetaData), NewProp_Carrier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACTFFlag_Statics::NewProp_BaseLocation = { "BaseLocation", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFFlag, BaseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseLocation_MetaData), NewProp_BaseLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACTFFlag_Statics::NewProp_ReturnTimer = { "ReturnTimer", "OnRep_ReturnTimer", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFFlag, ReturnTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnTimer_MetaData), NewProp_ReturnTimer_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACTFFlag_Statics::NewProp_OwningTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACTFFlag_Statics::NewProp_OwningTeam = { "OwningTeam", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFFlag, OwningTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningTeam_MetaData), NewProp_OwningTeam_MetaData) }; // 576107608
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACTFFlag_Statics::NewProp_AutoReturnTime = { "AutoReturnTime", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFFlag, AutoReturnTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoReturnTime_MetaData), NewProp_AutoReturnTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACTFFlag_Statics::NewProp_InteractionRadius = { "InteractionRadius", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFFlag, InteractionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionRadius_MetaData), NewProp_InteractionRadius_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACTFFlag_Statics::NewProp_FlagCarrierEffect = { "FlagCarrierEffect", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFFlag, FlagCarrierEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagCarrierEffect_MetaData), NewProp_FlagCarrierEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACTFFlag_Statics::NewProp_CachedGameState = { "CachedGameState", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFFlag, CachedGameState), Z_Construct_UClass_ACTFGameState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedGameState_MetaData), NewProp_CachedGameState_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACTFFlag_Statics::NewProp_DropTime = { "DropTime", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFFlag, DropTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropTime_MetaData), NewProp_DropTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACTFFlag_Statics::NewProp_ValidationTimer = { "ValidationTimer", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACTFFlag, ValidationTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidationTimer_MetaData), NewProp_ValidationTimer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACTFFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFFlag_Statics::NewProp_OnFlagPickedUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFFlag_Statics::NewProp_OnFlagDropped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFFlag_Statics::NewProp_OnFlagReturned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFFlag_Statics::NewProp_OnFlagCaptured,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFFlag_Statics::NewProp_RootSceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFFlag_Statics::NewProp_FlagMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFFlag_Statics::NewProp_InteractionSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFFlag_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFFlag_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFFlag_Statics::NewProp_Carrier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFFlag_Statics::NewProp_BaseLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFFlag_Statics::NewProp_ReturnTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFFlag_Statics::NewProp_OwningTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFFlag_Statics::NewProp_OwningTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFFlag_Statics::NewProp_AutoReturnTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFFlag_Statics::NewProp_InteractionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFFlag_Statics::NewProp_FlagCarrierEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFFlag_Statics::NewProp_CachedGameState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFFlag_Statics::NewProp_DropTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACTFFlag_Statics::NewProp_ValidationTimer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACTFFlag_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACTFFlag_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACTFFlag_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACTFFlag_Statics::ClassParams = {
	&ACTFFlag::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACTFFlag_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACTFFlag_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACTFFlag_Statics::Class_MetaDataParams), Z_Construct_UClass_ACTFFlag_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACTFFlag()
{
	if (!Z_Registration_Info_UClass_ACTFFlag.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACTFFlag.OuterSingleton, Z_Construct_UClass_ACTFFlag_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACTFFlag.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ACTFFlag::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_CurrentState(TEXT("CurrentState"));
	static FName Name_Carrier(TEXT("Carrier"));
	static FName Name_BaseLocation(TEXT("BaseLocation"));
	static FName Name_ReturnTimer(TEXT("ReturnTimer"));
	const bool bIsValid = true
		&& Name_CurrentState == ClassReps[(int32)ENetFields_Private::CurrentState].Property->GetFName()
		&& Name_Carrier == ClassReps[(int32)ENetFields_Private::Carrier].Property->GetFName()
		&& Name_BaseLocation == ClassReps[(int32)ENetFields_Private::BaseLocation].Property->GetFName()
		&& Name_ReturnTimer == ClassReps[(int32)ENetFields_Private::ReturnTimer].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACTFFlag"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ACTFFlag);
ACTFFlag::~ACTFFlag() {}
// ********** End Class ACTFFlag *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFFlag_h__Script_CaptureTheFlagGAS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACTFFlag, ACTFFlag::StaticClass, TEXT("ACTFFlag"), &Z_Registration_Info_UClass_ACTFFlag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACTFFlag), 2803044547U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFFlag_h__Script_CaptureTheFlagGAS_4032848964(TEXT("/Script/CaptureTheFlagGAS"),
	Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFFlag_h__Script_CaptureTheFlagGAS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFFlag_h__Script_CaptureTheFlagGAS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
