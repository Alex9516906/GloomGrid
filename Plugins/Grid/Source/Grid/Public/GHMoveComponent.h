// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GHSpawnGrid.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GHMoveComponent.generated.h"
DECLARE_LOG_CATEGORY_EXTERN(LogMoveComp, Log, All);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GRID_API UGHMoveComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	
	UGHMoveComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
protected:
	
	UPROPERTY(EditDefaultsOnly,Category = "Class Spawn Hex")
	TSubclassOf<AGHSpawnGrid> SpawnGridActor;
	
	UPROPERTY()
	ACharacter* CharacterOwner;
		
	UPROPERTY()
	AGHSpawnGrid* SpawnHexActor;
	
	virtual void BeginPlay() override;

	UFUNCTION()
	void StartMoving(AGHHexActor* HexEnd);
	
	UFUNCTION(BlueprintCallable)
	void StartCharacterMove(int32 DistanceInHexMaxMove);

	UFUNCTION(BlueprintCallable)
	void StopCharacterMove();
	
	void FindPath(AGHHexActor* StartHex, AGHHexActor* HexEnd);
	
	void Moving();

	void RetracePath(AGHHexActor* Start, AGHHexActor* End);

	UFUNCTION(NetMulticast,Reliable,WithValidation)
	void Multi_SetPosCharacter(bool bExit);
	bool Multi_SetPosCharacter_Validate(bool bExit);
	void Multi_SetPosCharacter_Implementation(bool bExit);

	UFUNCTION(Server,Reliable)
	void Server_SetPos(bool bExit);
	void Server_SetPos_Implementation(bool bExit);


	
public:
	
	bool bIsMoving = false;
	
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	AGHHexActor* ActorLocationHex;

	UPROPERTY()
	TArray<AGHHexActor*> HexWayArray;

	UPROPERTY()
	TArray<AGHHexActor*> HexWayCache;
	
	UFUNCTION(BlueprintCallable)
	void ShowMovableHex(int32 MaxHex);
	
	void Init();
	
	UFUNCTION(BlueprintCallable)
	void ShowPath(AGHHexActor* StartHex, AGHHexActor* HexEnd);

	UFUNCTION(BlueprintCallable)
	TArray<AGHHexActor*>& GetPath(AGHHexActor* StartHex, AGHHexActor* HexEnd);

	UFUNCTION(BlueprintCallable)
	AGHHexActor* GetPositionCharacter();
	
	UFUNCTION(BlueprintCallable)
	void ClearWay(AGHHexActor* ActorEnd);

	UFUNCTION(BlueprintCallable)
	void SetActorLocation(AGHHexActor* NewLocation);

	/*UFUNCTION(BlueprintCallable)
	TArray<AGHHexActor*> UseCircular(int32 NumberOfHex);*/
};




