// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/CTFTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCTFTypes() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAGGAS_API UEnum* Z_Construct_UEnum_CaptureTheFlagGAS_EFlagState();
CAPTURETHEFLAGGAS_API UEnum* Z_Construct_UEnum_CaptureTheFlagGAS_EGamePhase();
CAPTURETHEFLAGGAS_API UEnum* Z_Construct_UEnum_CaptureTheFlagGAS_ETeam();
CAPTURETHEFLAGGAS_API UScriptStruct* Z_Construct_UScriptStruct_FGameConfig();
CAPTURETHEFLAGGAS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStats();
CAPTURETHEFLAGGAS_API UScriptStruct* Z_Construct_UScriptStruct_FTeamInfo();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlagGAS();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ETeam *********************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETeam;
static UEnum* ETeam_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETeam.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETeam.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, (UObject*)Z_Construct_UPackage__Script_CaptureTheFlagGAS(), TEXT("ETeam"));
	}
	return Z_Registration_Info_UEnum_ETeam.OuterSingleton;
}
template<> CAPTURETHEFLAGGAS_API UEnum* StaticEnum<ETeam>()
{
	return ETeam_StaticEnum();
}
struct Z_Construct_UEnum_CaptureTheFlagGAS_ETeam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Blue.DisplayName", "Blue Team" },
		{ "Blue.Name", "ETeam::Blue" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/CTFTypes.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ETeam::None" },
		{ "Red.DisplayName", "Red Team" },
		{ "Red.Name", "ETeam::Red" },
		{ "Spectator.DisplayName", "Spectator" },
		{ "Spectator.Name", "ETeam::Spectator" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETeam::None", (int64)ETeam::None },
		{ "ETeam::Red", (int64)ETeam::Red },
		{ "ETeam::Blue", (int64)ETeam::Blue },
		{ "ETeam::Spectator", (int64)ETeam::Spectator },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CaptureTheFlagGAS_ETeam_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS,
	nullptr,
	"ETeam",
	"ETeam",
	Z_Construct_UEnum_CaptureTheFlagGAS_ETeam_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CaptureTheFlagGAS_ETeam_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CaptureTheFlagGAS_ETeam_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CaptureTheFlagGAS_ETeam()
{
	if (!Z_Registration_Info_UEnum_ETeam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETeam.InnerSingleton, Z_Construct_UEnum_CaptureTheFlagGAS_ETeam_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETeam.InnerSingleton;
}
// ********** End Enum ETeam ***********************************************************************

// ********** Begin Enum EGamePhase ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGamePhase;
static UEnum* EGamePhase_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGamePhase.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGamePhase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CaptureTheFlagGAS_EGamePhase, (UObject*)Z_Construct_UPackage__Script_CaptureTheFlagGAS(), TEXT("EGamePhase"));
	}
	return Z_Registration_Info_UEnum_EGamePhase.OuterSingleton;
}
template<> CAPTURETHEFLAGGAS_API UEnum* StaticEnum<EGamePhase>()
{
	return EGamePhase_StaticEnum();
}
struct Z_Construct_UEnum_CaptureTheFlagGAS_EGamePhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Aborted.DisplayName", "Aborted" },
		{ "Aborted.Name", "EGamePhase::Aborted" },
		{ "BlueprintType", "true" },
		{ "InProgress.DisplayName", "In Progress" },
		{ "InProgress.Name", "EGamePhase::InProgress" },
		{ "ModuleRelativePath", "Public/Core/CTFTypes.h" },
		{ "PostMatch.DisplayName", "Post Match" },
		{ "PostMatch.Name", "EGamePhase::PostMatch" },
		{ "WaitingToStart.DisplayName", "Waiting To Start" },
		{ "WaitingToStart.Name", "EGamePhase::WaitingToStart" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGamePhase::WaitingToStart", (int64)EGamePhase::WaitingToStart },
		{ "EGamePhase::InProgress", (int64)EGamePhase::InProgress },
		{ "EGamePhase::PostMatch", (int64)EGamePhase::PostMatch },
		{ "EGamePhase::Aborted", (int64)EGamePhase::Aborted },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CaptureTheFlagGAS_EGamePhase_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS,
	nullptr,
	"EGamePhase",
	"EGamePhase",
	Z_Construct_UEnum_CaptureTheFlagGAS_EGamePhase_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CaptureTheFlagGAS_EGamePhase_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CaptureTheFlagGAS_EGamePhase_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CaptureTheFlagGAS_EGamePhase_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CaptureTheFlagGAS_EGamePhase()
{
	if (!Z_Registration_Info_UEnum_EGamePhase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGamePhase.InnerSingleton, Z_Construct_UEnum_CaptureTheFlagGAS_EGamePhase_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGamePhase.InnerSingleton;
}
// ********** End Enum EGamePhase ******************************************************************

// ********** Begin Enum EFlagState ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlagState;
static UEnum* EFlagState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFlagState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFlagState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CaptureTheFlagGAS_EFlagState, (UObject*)Z_Construct_UPackage__Script_CaptureTheFlagGAS(), TEXT("EFlagState"));
	}
	return Z_Registration_Info_UEnum_EFlagState.OuterSingleton;
}
template<> CAPTURETHEFLAGGAS_API UEnum* StaticEnum<EFlagState>()
{
	return EFlagState_StaticEnum();
}
struct Z_Construct_UEnum_CaptureTheFlagGAS_EFlagState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AtBase.DisplayName", "At Base" },
		{ "AtBase.Name", "EFlagState::AtBase" },
		{ "BlueprintType", "true" },
		{ "Carried.DisplayName", "Carried" },
		{ "Carried.Name", "EFlagState::Carried" },
		{ "Dropped.DisplayName", "Dropped" },
		{ "Dropped.Name", "EFlagState::Dropped" },
		{ "ModuleRelativePath", "Public/Core/CTFTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFlagState::AtBase", (int64)EFlagState::AtBase },
		{ "EFlagState::Carried", (int64)EFlagState::Carried },
		{ "EFlagState::Dropped", (int64)EFlagState::Dropped },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CaptureTheFlagGAS_EFlagState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS,
	nullptr,
	"EFlagState",
	"EFlagState",
	Z_Construct_UEnum_CaptureTheFlagGAS_EFlagState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CaptureTheFlagGAS_EFlagState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CaptureTheFlagGAS_EFlagState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CaptureTheFlagGAS_EFlagState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CaptureTheFlagGAS_EFlagState()
{
	if (!Z_Registration_Info_UEnum_EFlagState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlagState.InnerSingleton, Z_Construct_UEnum_CaptureTheFlagGAS_EFlagState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFlagState.InnerSingleton;
}
// ********** End Enum EFlagState ******************************************************************

// ********** Begin ScriptStruct FTeamInfo *********************************************************
static_assert(std::is_polymorphic<FTeamInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTeamInfo cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTeamInfo;
class UScriptStruct* FTeamInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTeamInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTeamInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTeamInfo, (UObject*)Z_Construct_UPackage__Script_CaptureTheFlagGAS(), TEXT("TeamInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FTeamInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTeamInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/CTFTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamName_MetaData[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "Public/Core/CTFTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamColor_MetaData[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "Public/Core/CTFTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "Public/Core/CTFTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "Public/Core/CTFTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_TeamName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TeamColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTeamInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_TeamName = { "TeamName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTeamInfo, TeamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamName_MetaData), NewProp_TeamName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_TeamColor = { "TeamColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTeamInfo, TeamColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamColor_MetaData), NewProp_TeamColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTeamInfo, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTeamInfo, MaxPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlayers_MetaData), NewProp_MaxPlayers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTeamInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_TeamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_TeamColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_MaxPlayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTeamInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"TeamInfo",
	Z_Construct_UScriptStruct_FTeamInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamInfo_Statics::PropPointers),
	sizeof(FTeamInfo),
	alignof(FTeamInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTeamInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTeamInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FTeamInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTeamInfo.InnerSingleton, Z_Construct_UScriptStruct_FTeamInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTeamInfo.InnerSingleton;
}
// ********** End ScriptStruct FTeamInfo ***********************************************************

// ********** Begin ScriptStruct FPlayerStats ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPlayerStats;
class UScriptStruct* FPlayerStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPlayerStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPlayerStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerStats, (UObject*)Z_Construct_UPackage__Script_CaptureTheFlagGAS(), TEXT("PlayerStats"));
	}
	return Z_Registration_Info_UScriptStruct_FPlayerStats.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPlayerStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/CTFTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Captures_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Core/CTFTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Returns_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Core/CTFTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Kills_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Core/CTFTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Deaths_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Core/CTFTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeWithFlag_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/Core/CTFTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Captures;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Returns;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Kills;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Deaths;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeWithFlag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_Captures = { "Captures", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStats, Captures), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Captures_MetaData), NewProp_Captures_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_Returns = { "Returns", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStats, Returns), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Returns_MetaData), NewProp_Returns_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_Kills = { "Kills", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStats, Kills), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Kills_MetaData), NewProp_Kills_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_Deaths = { "Deaths", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStats, Deaths), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Deaths_MetaData), NewProp_Deaths_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_TimeWithFlag = { "TimeWithFlag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStats, TimeWithFlag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeWithFlag_MetaData), NewProp_TimeWithFlag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_Captures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_Returns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_Kills,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_Deaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_TimeWithFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS,
	nullptr,
	&NewStructOps,
	"PlayerStats",
	Z_Construct_UScriptStruct_FPlayerStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStats_Statics::PropPointers),
	sizeof(FPlayerStats),
	alignof(FPlayerStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerStats()
{
	if (!Z_Registration_Info_UScriptStruct_FPlayerStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPlayerStats.InnerSingleton, Z_Construct_UScriptStruct_FPlayerStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPlayerStats.InnerSingleton;
}
// ********** End ScriptStruct FPlayerStats ********************************************************

// ********** Begin ScriptStruct FGameConfig *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGameConfig;
class UScriptStruct* FGameConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGameConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGameConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameConfig, (UObject*)Z_Construct_UPackage__Script_CaptureTheFlagGAS(), TEXT("GameConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FGameConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGameConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/CTFTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreLimit_MetaData[] = {
		{ "Category", "Game Rules" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Core/CTFTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeLimit_MetaData[] = {
		{ "Category", "Game Rules" },
		{ "ClampMax", "3600" },
		{ "ClampMin", "60" },
		{ "ModuleRelativePath", "Public/Core/CTFTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayersPerTeam_MetaData[] = {
		{ "Category", "Game Rules" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 10 minutes\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/CTFTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "10 minutes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagReturnTime_MetaData[] = {
		{ "Category", "Game Rules" },
		{ "ClampMax", "60" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Core/CTFTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnDelay_MetaData[] = {
		{ "Category", "Game Rules" },
		{ "ClampMax", "60" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Core/CTFTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ScoreLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLimit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayersPerTeam;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlagReturnTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameConfig_Statics::NewProp_ScoreLimit = { "ScoreLimit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameConfig, ScoreLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreLimit_MetaData), NewProp_ScoreLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameConfig_Statics::NewProp_TimeLimit = { "TimeLimit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameConfig, TimeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeLimit_MetaData), NewProp_TimeLimit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameConfig_Statics::NewProp_MaxPlayersPerTeam = { "MaxPlayersPerTeam", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameConfig, MaxPlayersPerTeam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlayersPerTeam_MetaData), NewProp_MaxPlayersPerTeam_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameConfig_Statics::NewProp_FlagReturnTime = { "FlagReturnTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameConfig, FlagReturnTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagReturnTime_MetaData), NewProp_FlagReturnTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameConfig_Statics::NewProp_RespawnDelay = { "RespawnDelay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameConfig, RespawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnDelay_MetaData), NewProp_RespawnDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameConfig_Statics::NewProp_ScoreLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameConfig_Statics::NewProp_TimeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameConfig_Statics::NewProp_MaxPlayersPerTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameConfig_Statics::NewProp_FlagReturnTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameConfig_Statics::NewProp_RespawnDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS,
	nullptr,
	&NewStructOps,
	"GameConfig",
	Z_Construct_UScriptStruct_FGameConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameConfig_Statics::PropPointers),
	sizeof(FGameConfig),
	alignof(FGameConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FGameConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGameConfig.InnerSingleton, Z_Construct_UScriptStruct_FGameConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGameConfig.InnerSingleton;
}
// ********** End ScriptStruct FGameConfig *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Core_CTFTypes_h__Script_CaptureTheFlagGAS_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETeam_StaticEnum, TEXT("ETeam"), &Z_Registration_Info_UEnum_ETeam, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 576107608U) },
		{ EGamePhase_StaticEnum, TEXT("EGamePhase"), &Z_Registration_Info_UEnum_EGamePhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1253027156U) },
		{ EFlagState_StaticEnum, TEXT("EFlagState"), &Z_Registration_Info_UEnum_EFlagState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1543361479U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTeamInfo::StaticStruct, Z_Construct_UScriptStruct_FTeamInfo_Statics::NewStructOps, TEXT("TeamInfo"), &Z_Registration_Info_UScriptStruct_FTeamInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTeamInfo), 1693386140U) },
		{ FPlayerStats::StaticStruct, Z_Construct_UScriptStruct_FPlayerStats_Statics::NewStructOps, TEXT("PlayerStats"), &Z_Registration_Info_UScriptStruct_FPlayerStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerStats), 2464396412U) },
		{ FGameConfig::StaticStruct, Z_Construct_UScriptStruct_FGameConfig_Statics::NewStructOps, TEXT("GameConfig"), &Z_Registration_Info_UScriptStruct_FGameConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameConfig), 3624988173U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Core_CTFTypes_h__Script_CaptureTheFlagGAS_17562950(TEXT("/Script/CaptureTheFlagGAS"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Core_CTFTypes_h__Script_CaptureTheFlagGAS_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Core_CTFTypes_h__Script_CaptureTheFlagGAS_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Core_CTFTypes_h__Script_CaptureTheFlagGAS_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Core_CTFTypes_h__Script_CaptureTheFlagGAS_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
