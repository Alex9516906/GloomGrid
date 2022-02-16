// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Grid/Public/GHMoveComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGHMoveComponent() {}
// Cross Module References
	GRID_API UClass* Z_Construct_UClass_UGHMoveComponent_NoRegister();
	GRID_API UClass* Z_Construct_UClass_UGHMoveComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Grid();
	GRID_API UClass* Z_Construct_UClass_AGHHexActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GRID_API UClass* Z_Construct_UClass_AGHSpawnGrid_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGHMoveComponent::execSetActorLocation)
	{
		P_GET_OBJECT(AGHHexActor,Z_Param_NewLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActorLocation(Z_Param_NewLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGHMoveComponent::execClearWay)
	{
		P_GET_OBJECT(AGHHexActor,Z_Param_ActorEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearWay(Z_Param_ActorEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGHMoveComponent::execGetPositionCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGHHexActor**)Z_Param__Result=P_THIS->GetPositionCharacter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGHMoveComponent::execGetPath)
	{
		P_GET_OBJECT(AGHHexActor,Z_Param_StartHex);
		P_GET_OBJECT(AGHHexActor,Z_Param_HexEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AGHHexActor*>*)Z_Param__Result=P_THIS->GetPath(Z_Param_StartHex,Z_Param_HexEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGHMoveComponent::execShowPath)
	{
		P_GET_OBJECT(AGHHexActor,Z_Param_StartHex);
		P_GET_OBJECT(AGHHexActor,Z_Param_HexEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowPath(Z_Param_StartHex,Z_Param_HexEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGHMoveComponent::execShowMovableHex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxHex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowMovableHex(Z_Param_MaxHex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGHMoveComponent::execServer_SetPos)
	{
		P_GET_UBOOL(Z_Param_bExit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetPos_Implementation(Z_Param_bExit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGHMoveComponent::execMulti_SetPosCharacter)
	{
		P_GET_UBOOL(Z_Param_bExit);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multi_SetPosCharacter_Validate(Z_Param_bExit))
		{
			RPC_ValidateFailed(TEXT("Multi_SetPosCharacter_Validate"));
			return;
		}
		P_THIS->Multi_SetPosCharacter_Implementation(Z_Param_bExit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGHMoveComponent::execStopCharacterMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopCharacterMove();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGHMoveComponent::execStartCharacterMove)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DistanceInHexMaxMove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCharacterMove(Z_Param_DistanceInHexMaxMove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGHMoveComponent::execStartMoving)
	{
		P_GET_OBJECT(AGHHexActor,Z_Param_HexEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartMoving(Z_Param_HexEnd);
		P_NATIVE_END;
	}
	static FName NAME_UGHMoveComponent_Multi_SetPosCharacter = FName(TEXT("Multi_SetPosCharacter"));
	void UGHMoveComponent::Multi_SetPosCharacter(bool bExit)
	{
		GHMoveComponent_eventMulti_SetPosCharacter_Parms Parms;
		Parms.bExit=bExit ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGHMoveComponent_Multi_SetPosCharacter),&Parms);
	}
	static FName NAME_UGHMoveComponent_Server_SetPos = FName(TEXT("Server_SetPos"));
	void UGHMoveComponent::Server_SetPos(bool bExit)
	{
		GHMoveComponent_eventServer_SetPos_Parms Parms;
		Parms.bExit=bExit ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGHMoveComponent_Server_SetPos),&Parms);
	}
	void UGHMoveComponent::StaticRegisterNativesUGHMoveComponent()
	{
		UClass* Class = UGHMoveComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearWay", &UGHMoveComponent::execClearWay },
			{ "GetPath", &UGHMoveComponent::execGetPath },
			{ "GetPositionCharacter", &UGHMoveComponent::execGetPositionCharacter },
			{ "Multi_SetPosCharacter", &UGHMoveComponent::execMulti_SetPosCharacter },
			{ "Server_SetPos", &UGHMoveComponent::execServer_SetPos },
			{ "SetActorLocation", &UGHMoveComponent::execSetActorLocation },
			{ "ShowMovableHex", &UGHMoveComponent::execShowMovableHex },
			{ "ShowPath", &UGHMoveComponent::execShowPath },
			{ "StartCharacterMove", &UGHMoveComponent::execStartCharacterMove },
			{ "StartMoving", &UGHMoveComponent::execStartMoving },
			{ "StopCharacterMove", &UGHMoveComponent::execStopCharacterMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGHMoveComponent_ClearWay_Statics
	{
		struct GHMoveComponent_eventClearWay_Parms
		{
			AGHHexActor* ActorEnd;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorEnd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGHMoveComponent_ClearWay_Statics::NewProp_ActorEnd = { "ActorEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GHMoveComponent_eventClearWay_Parms, ActorEnd), Z_Construct_UClass_AGHHexActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGHMoveComponent_ClearWay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGHMoveComponent_ClearWay_Statics::NewProp_ActorEnd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGHMoveComponent_ClearWay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GHMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGHMoveComponent_ClearWay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGHMoveComponent, nullptr, "ClearWay", nullptr, nullptr, sizeof(GHMoveComponent_eventClearWay_Parms), Z_Construct_UFunction_UGHMoveComponent_ClearWay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGHMoveComponent_ClearWay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGHMoveComponent_ClearWay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGHMoveComponent_ClearWay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGHMoveComponent_ClearWay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGHMoveComponent_ClearWay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGHMoveComponent_GetPath_Statics
	{
		struct GHMoveComponent_eventGetPath_Parms
		{
			AGHHexActor* StartHex;
			AGHHexActor* HexEnd;
			TArray<AGHHexActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartHex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HexEnd;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGHMoveComponent_GetPath_Statics::NewProp_StartHex = { "StartHex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GHMoveComponent_eventGetPath_Parms, StartHex), Z_Construct_UClass_AGHHexActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGHMoveComponent_GetPath_Statics::NewProp_HexEnd = { "HexEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GHMoveComponent_eventGetPath_Parms, HexEnd), Z_Construct_UClass_AGHHexActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGHMoveComponent_GetPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGHHexActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGHMoveComponent_GetPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GHMoveComponent_eventGetPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGHMoveComponent_GetPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGHMoveComponent_GetPath_Statics::NewProp_StartHex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGHMoveComponent_GetPath_Statics::NewProp_HexEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGHMoveComponent_GetPath_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGHMoveComponent_GetPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGHMoveComponent_GetPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GHMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGHMoveComponent_GetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGHMoveComponent, nullptr, "GetPath", nullptr, nullptr, sizeof(GHMoveComponent_eventGetPath_Parms), Z_Construct_UFunction_UGHMoveComponent_GetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGHMoveComponent_GetPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGHMoveComponent_GetPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGHMoveComponent_GetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGHMoveComponent_GetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGHMoveComponent_GetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGHMoveComponent_GetPositionCharacter_Statics
	{
		struct GHMoveComponent_eventGetPositionCharacter_Parms
		{
			AGHHexActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGHMoveComponent_GetPositionCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GHMoveComponent_eventGetPositionCharacter_Parms, ReturnValue), Z_Construct_UClass_AGHHexActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGHMoveComponent_GetPositionCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGHMoveComponent_GetPositionCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGHMoveComponent_GetPositionCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GHMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGHMoveComponent_GetPositionCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGHMoveComponent, nullptr, "GetPositionCharacter", nullptr, nullptr, sizeof(GHMoveComponent_eventGetPositionCharacter_Parms), Z_Construct_UFunction_UGHMoveComponent_GetPositionCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGHMoveComponent_GetPositionCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGHMoveComponent_GetPositionCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGHMoveComponent_GetPositionCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGHMoveComponent_GetPositionCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGHMoveComponent_GetPositionCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGHMoveComponent_Multi_SetPosCharacter_Statics
	{
		static void NewProp_bExit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGHMoveComponent_Multi_SetPosCharacter_Statics::NewProp_bExit_SetBit(void* Obj)
	{
		((GHMoveComponent_eventMulti_SetPosCharacter_Parms*)Obj)->bExit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGHMoveComponent_Multi_SetPosCharacter_Statics::NewProp_bExit = { "bExit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GHMoveComponent_eventMulti_SetPosCharacter_Parms), &Z_Construct_UFunction_UGHMoveComponent_Multi_SetPosCharacter_Statics::NewProp_bExit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGHMoveComponent_Multi_SetPosCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGHMoveComponent_Multi_SetPosCharacter_Statics::NewProp_bExit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGHMoveComponent_Multi_SetPosCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GHMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGHMoveComponent_Multi_SetPosCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGHMoveComponent, nullptr, "Multi_SetPosCharacter", nullptr, nullptr, sizeof(GHMoveComponent_eventMulti_SetPosCharacter_Parms), Z_Construct_UFunction_UGHMoveComponent_Multi_SetPosCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGHMoveComponent_Multi_SetPosCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGHMoveComponent_Multi_SetPosCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGHMoveComponent_Multi_SetPosCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGHMoveComponent_Multi_SetPosCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGHMoveComponent_Multi_SetPosCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGHMoveComponent_Server_SetPos_Statics
	{
		static void NewProp_bExit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGHMoveComponent_Server_SetPos_Statics::NewProp_bExit_SetBit(void* Obj)
	{
		((GHMoveComponent_eventServer_SetPos_Parms*)Obj)->bExit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGHMoveComponent_Server_SetPos_Statics::NewProp_bExit = { "bExit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GHMoveComponent_eventServer_SetPos_Parms), &Z_Construct_UFunction_UGHMoveComponent_Server_SetPos_Statics::NewProp_bExit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGHMoveComponent_Server_SetPos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGHMoveComponent_Server_SetPos_Statics::NewProp_bExit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGHMoveComponent_Server_SetPos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GHMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGHMoveComponent_Server_SetPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGHMoveComponent, nullptr, "Server_SetPos", nullptr, nullptr, sizeof(GHMoveComponent_eventServer_SetPos_Parms), Z_Construct_UFunction_UGHMoveComponent_Server_SetPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGHMoveComponent_Server_SetPos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGHMoveComponent_Server_SetPos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGHMoveComponent_Server_SetPos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGHMoveComponent_Server_SetPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGHMoveComponent_Server_SetPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGHMoveComponent_SetActorLocation_Statics
	{
		struct GHMoveComponent_eventSetActorLocation_Parms
		{
			AGHHexActor* NewLocation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGHMoveComponent_SetActorLocation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GHMoveComponent_eventSetActorLocation_Parms, NewLocation), Z_Construct_UClass_AGHHexActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGHMoveComponent_SetActorLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGHMoveComponent_SetActorLocation_Statics::NewProp_NewLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGHMoveComponent_SetActorLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GHMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGHMoveComponent_SetActorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGHMoveComponent, nullptr, "SetActorLocation", nullptr, nullptr, sizeof(GHMoveComponent_eventSetActorLocation_Parms), Z_Construct_UFunction_UGHMoveComponent_SetActorLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGHMoveComponent_SetActorLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGHMoveComponent_SetActorLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGHMoveComponent_SetActorLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGHMoveComponent_SetActorLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGHMoveComponent_SetActorLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGHMoveComponent_ShowMovableHex_Statics
	{
		struct GHMoveComponent_eventShowMovableHex_Parms
		{
			int32 MaxHex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxHex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGHMoveComponent_ShowMovableHex_Statics::NewProp_MaxHex = { "MaxHex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GHMoveComponent_eventShowMovableHex_Parms, MaxHex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGHMoveComponent_ShowMovableHex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGHMoveComponent_ShowMovableHex_Statics::NewProp_MaxHex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGHMoveComponent_ShowMovableHex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GHMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGHMoveComponent_ShowMovableHex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGHMoveComponent, nullptr, "ShowMovableHex", nullptr, nullptr, sizeof(GHMoveComponent_eventShowMovableHex_Parms), Z_Construct_UFunction_UGHMoveComponent_ShowMovableHex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGHMoveComponent_ShowMovableHex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGHMoveComponent_ShowMovableHex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGHMoveComponent_ShowMovableHex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGHMoveComponent_ShowMovableHex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGHMoveComponent_ShowMovableHex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGHMoveComponent_ShowPath_Statics
	{
		struct GHMoveComponent_eventShowPath_Parms
		{
			AGHHexActor* StartHex;
			AGHHexActor* HexEnd;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartHex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HexEnd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGHMoveComponent_ShowPath_Statics::NewProp_StartHex = { "StartHex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GHMoveComponent_eventShowPath_Parms, StartHex), Z_Construct_UClass_AGHHexActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGHMoveComponent_ShowPath_Statics::NewProp_HexEnd = { "HexEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GHMoveComponent_eventShowPath_Parms, HexEnd), Z_Construct_UClass_AGHHexActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGHMoveComponent_ShowPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGHMoveComponent_ShowPath_Statics::NewProp_StartHex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGHMoveComponent_ShowPath_Statics::NewProp_HexEnd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGHMoveComponent_ShowPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GHMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGHMoveComponent_ShowPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGHMoveComponent, nullptr, "ShowPath", nullptr, nullptr, sizeof(GHMoveComponent_eventShowPath_Parms), Z_Construct_UFunction_UGHMoveComponent_ShowPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGHMoveComponent_ShowPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGHMoveComponent_ShowPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGHMoveComponent_ShowPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGHMoveComponent_ShowPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGHMoveComponent_ShowPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGHMoveComponent_StartCharacterMove_Statics
	{
		struct GHMoveComponent_eventStartCharacterMove_Parms
		{
			int32 DistanceInHexMaxMove;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DistanceInHexMaxMove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGHMoveComponent_StartCharacterMove_Statics::NewProp_DistanceInHexMaxMove = { "DistanceInHexMaxMove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GHMoveComponent_eventStartCharacterMove_Parms, DistanceInHexMaxMove), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGHMoveComponent_StartCharacterMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGHMoveComponent_StartCharacterMove_Statics::NewProp_DistanceInHexMaxMove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGHMoveComponent_StartCharacterMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GHMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGHMoveComponent_StartCharacterMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGHMoveComponent, nullptr, "StartCharacterMove", nullptr, nullptr, sizeof(GHMoveComponent_eventStartCharacterMove_Parms), Z_Construct_UFunction_UGHMoveComponent_StartCharacterMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGHMoveComponent_StartCharacterMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGHMoveComponent_StartCharacterMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGHMoveComponent_StartCharacterMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGHMoveComponent_StartCharacterMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGHMoveComponent_StartCharacterMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGHMoveComponent_StartMoving_Statics
	{
		struct GHMoveComponent_eventStartMoving_Parms
		{
			AGHHexActor* HexEnd;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HexEnd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGHMoveComponent_StartMoving_Statics::NewProp_HexEnd = { "HexEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GHMoveComponent_eventStartMoving_Parms, HexEnd), Z_Construct_UClass_AGHHexActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGHMoveComponent_StartMoving_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGHMoveComponent_StartMoving_Statics::NewProp_HexEnd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGHMoveComponent_StartMoving_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GHMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGHMoveComponent_StartMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGHMoveComponent, nullptr, "StartMoving", nullptr, nullptr, sizeof(GHMoveComponent_eventStartMoving_Parms), Z_Construct_UFunction_UGHMoveComponent_StartMoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGHMoveComponent_StartMoving_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGHMoveComponent_StartMoving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGHMoveComponent_StartMoving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGHMoveComponent_StartMoving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGHMoveComponent_StartMoving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGHMoveComponent_StopCharacterMove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGHMoveComponent_StopCharacterMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GHMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGHMoveComponent_StopCharacterMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGHMoveComponent, nullptr, "StopCharacterMove", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGHMoveComponent_StopCharacterMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGHMoveComponent_StopCharacterMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGHMoveComponent_StopCharacterMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGHMoveComponent_StopCharacterMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGHMoveComponent_NoRegister()
	{
		return UGHMoveComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGHMoveComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnGridActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnGridActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnHexActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnHexActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorLocationHex_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorLocationHex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HexWayArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HexWayArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HexWayArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HexWayCache_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HexWayCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HexWayCache;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGHMoveComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Grid,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGHMoveComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGHMoveComponent_ClearWay, "ClearWay" }, // 862920907
		{ &Z_Construct_UFunction_UGHMoveComponent_GetPath, "GetPath" }, // 3148201442
		{ &Z_Construct_UFunction_UGHMoveComponent_GetPositionCharacter, "GetPositionCharacter" }, // 382000843
		{ &Z_Construct_UFunction_UGHMoveComponent_Multi_SetPosCharacter, "Multi_SetPosCharacter" }, // 887029
		{ &Z_Construct_UFunction_UGHMoveComponent_Server_SetPos, "Server_SetPos" }, // 1760521190
		{ &Z_Construct_UFunction_UGHMoveComponent_SetActorLocation, "SetActorLocation" }, // 1782318877
		{ &Z_Construct_UFunction_UGHMoveComponent_ShowMovableHex, "ShowMovableHex" }, // 3400958092
		{ &Z_Construct_UFunction_UGHMoveComponent_ShowPath, "ShowPath" }, // 2229965708
		{ &Z_Construct_UFunction_UGHMoveComponent_StartCharacterMove, "StartCharacterMove" }, // 1723915909
		{ &Z_Construct_UFunction_UGHMoveComponent_StartMoving, "StartMoving" }, // 1760793973
		{ &Z_Construct_UFunction_UGHMoveComponent_StopCharacterMove, "StopCharacterMove" }, // 1145917982
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGHMoveComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GHMoveComponent.h" },
		{ "ModuleRelativePath", "Public/GHMoveComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_SpawnGridActor_MetaData[] = {
		{ "Category", "Class Spawn Hex" },
		{ "ModuleRelativePath", "Public/GHMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_SpawnGridActor = { "SpawnGridActor", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGHMoveComponent, SpawnGridActor), Z_Construct_UClass_AGHSpawnGrid_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_SpawnGridActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_SpawnGridActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_CharacterOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/GHMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_CharacterOwner = { "CharacterOwner", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGHMoveComponent, CharacterOwner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_CharacterOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_CharacterOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_SpawnHexActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/GHMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_SpawnHexActor = { "SpawnHexActor", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGHMoveComponent, SpawnHexActor), Z_Construct_UClass_AGHSpawnGrid_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_SpawnHexActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_SpawnHexActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_ActorLocationHex_MetaData[] = {
		{ "Category", "GHMoveComponent" },
		{ "ModuleRelativePath", "Public/GHMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_ActorLocationHex = { "ActorLocationHex", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGHMoveComponent, ActorLocationHex), Z_Construct_UClass_AGHHexActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_ActorLocationHex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_ActorLocationHex_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_HexWayArray_Inner = { "HexWayArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGHHexActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_HexWayArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/GHMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_HexWayArray = { "HexWayArray", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGHMoveComponent, HexWayArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_HexWayArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_HexWayArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_HexWayCache_Inner = { "HexWayCache", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGHHexActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_HexWayCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/GHMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_HexWayCache = { "HexWayCache", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGHMoveComponent, HexWayCache), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_HexWayCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_HexWayCache_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGHMoveComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_SpawnGridActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_CharacterOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_SpawnHexActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_ActorLocationHex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_HexWayArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_HexWayArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_HexWayCache_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGHMoveComponent_Statics::NewProp_HexWayCache,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGHMoveComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGHMoveComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGHMoveComponent_Statics::ClassParams = {
		&UGHMoveComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGHMoveComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGHMoveComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGHMoveComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGHMoveComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGHMoveComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGHMoveComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGHMoveComponent, 2610301305);
	template<> GRID_API UClass* StaticClass<UGHMoveComponent>()
	{
		return UGHMoveComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGHMoveComponent(Z_Construct_UClass_UGHMoveComponent, &UGHMoveComponent::StaticClass, TEXT("/Script/Grid"), TEXT("UGHMoveComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGHMoveComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
