// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGHHexActor;
#ifdef GRID_GHMoveComponent_generated_h
#error "GHMoveComponent.generated.h already included, missing '#pragma once' in GHMoveComponent.h"
#endif
#define GRID_GHMoveComponent_generated_h

#define GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_SPARSE_DATA
#define GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_RPC_WRAPPERS \
	virtual void Server_SetPos_Implementation(bool bExit); \
	virtual bool Multi_SetPosCharacter_Validate(bool ); \
	virtual void Multi_SetPosCharacter_Implementation(bool bExit); \
 \
	DECLARE_FUNCTION(execSetActorLocation); \
	DECLARE_FUNCTION(execClearWay); \
	DECLARE_FUNCTION(execGetPositionCharacter); \
	DECLARE_FUNCTION(execGetPath); \
	DECLARE_FUNCTION(execShowPath); \
	DECLARE_FUNCTION(execShowMovableHex); \
	DECLARE_FUNCTION(execServer_SetPos); \
	DECLARE_FUNCTION(execMulti_SetPosCharacter); \
	DECLARE_FUNCTION(execStopCharacterMove); \
	DECLARE_FUNCTION(execStartCharacterMove); \
	DECLARE_FUNCTION(execStartMoving);


#define GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetActorLocation); \
	DECLARE_FUNCTION(execClearWay); \
	DECLARE_FUNCTION(execGetPositionCharacter); \
	DECLARE_FUNCTION(execGetPath); \
	DECLARE_FUNCTION(execShowPath); \
	DECLARE_FUNCTION(execShowMovableHex); \
	DECLARE_FUNCTION(execServer_SetPos); \
	DECLARE_FUNCTION(execMulti_SetPosCharacter); \
	DECLARE_FUNCTION(execStopCharacterMove); \
	DECLARE_FUNCTION(execStartCharacterMove); \
	DECLARE_FUNCTION(execStartMoving);


#define GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_EVENT_PARMS \
	struct GHMoveComponent_eventMulti_SetPosCharacter_Parms \
	{ \
		bool bExit; \
	}; \
	struct GHMoveComponent_eventServer_SetPos_Parms \
	{ \
		bool bExit; \
	};


#define GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_CALLBACK_WRAPPERS
#define GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGHMoveComponent(); \
	friend struct Z_Construct_UClass_UGHMoveComponent_Statics; \
public: \
	DECLARE_CLASS(UGHMoveComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Grid"), NO_API) \
	DECLARE_SERIALIZER(UGHMoveComponent)


#define GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUGHMoveComponent(); \
	friend struct Z_Construct_UClass_UGHMoveComponent_Statics; \
public: \
	DECLARE_CLASS(UGHMoveComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Grid"), NO_API) \
	DECLARE_SERIALIZER(UGHMoveComponent)


#define GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGHMoveComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGHMoveComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGHMoveComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGHMoveComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGHMoveComponent(UGHMoveComponent&&); \
	NO_API UGHMoveComponent(const UGHMoveComponent&); \
public:


#define GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGHMoveComponent(UGHMoveComponent&&); \
	NO_API UGHMoveComponent(const UGHMoveComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGHMoveComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGHMoveComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGHMoveComponent)


#define GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnGridActor() { return STRUCT_OFFSET(UGHMoveComponent, SpawnGridActor); } \
	FORCEINLINE static uint32 __PPO__CharacterOwner() { return STRUCT_OFFSET(UGHMoveComponent, CharacterOwner); } \
	FORCEINLINE static uint32 __PPO__SpawnHexActor() { return STRUCT_OFFSET(UGHMoveComponent, SpawnHexActor); }


#define GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_11_PROLOG \
	GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_EVENT_PARMS


#define GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_SPARSE_DATA \
	GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_RPC_WRAPPERS \
	GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_CALLBACK_WRAPPERS \
	GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_INCLASS \
	GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_SPARSE_DATA \
	GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_CALLBACK_WRAPPERS \
	GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_INCLASS_NO_PURE_DECLS \
	GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRID_API UClass* StaticClass<class UGHMoveComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GridShared_Plugins_Grid_Source_Grid_Public_GHMoveComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
