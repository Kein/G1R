#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "OnPlayerGoToSleepDelegate.h"
#include "GothicCharacterStateSubsystem.generated.h"

class AGothicCharacter;
class AGothicNPCState;
class UScriptStruct;

UCLASS(BlueprintType)
class G1R_API UGothicCharacterStateSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere)
    FOnPlayerGoToSleep OnPlayerGoToSleep;
    
protected:
    UPROPERTY()
    TMap<FGameplayTag, UScriptStruct*> OwnedTagToMassTagMap;
    
public:
    UGothicCharacterStateSubsystem();

protected:
    UFUNCTION()
    void HandleVisualsUnspawned(AGothicNPCState* NPCState);
    
    UFUNCTION()
    void HandleVisualsSpawned(AGothicNPCState* NPCState, AGothicCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable)
    void FlushNPCSpawningQueue();
    
};

