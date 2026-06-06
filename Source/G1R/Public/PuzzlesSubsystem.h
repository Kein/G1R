#pragma once
#include "CoreMinimal.h"
#include "BaseClasses/ScriptGameInstanceSubsystem.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "GameplayTagContainer.h"
#include "EPuzzleEvent.h"
#include "GothicBasicVerbMessage.h"
#include "PuzzleCreatureCounter.h"
#include "PuzzleStepsCounter.h"
#include "Templates/SubclassOf.h"
#include "PuzzlesSubsystem.generated.h"

class UObject;
class UPuzzleCountExtraData;
class UWorld;

UCLASS(Abstract)
class G1R_API UPuzzlesSubsystem : public UScriptGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FGameplayMessageListenerHandle m_OnDeathCreature;
    
    UPROPERTY()
    FGameplayMessageListenerHandle m_OnPuzzlePosition;
    
    UPROPERTY()
    FGameplayMessageListenerHandle m_OnPuzzleDoor;
    
    UPROPERTY(EditAnywhere)
    TArray<FPuzzleCreatureCounter> m_PuzzleCreatureArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FPuzzleStepsCounter> m_PuzzleStepArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_FinishedPuzzles;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, int32> m_CreatureKillCounterSaved;
    
public:
    UPuzzlesSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetCreatureKillCounterMap(const TMap<FName, int32>& NewKillMap);
    
protected:
    UFUNCTION()
    void OnPuzzlePositionsMessage(FGameplayTag Channel, const FGothicBasicVerbMessage& Payload);
    
    UFUNCTION()
    void OnDoorTriggers(FGameplayTag Channel, const FGothicBasicVerbMessage& Payload);
    
    UFUNCTION()
    void OnDeathCreature(FGameplayTag Channel, const FGothicBasicVerbMessage& Payload);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GlobalUnlockDoor(const UObject* WorldContextObject, FName DoorName);
    
    UFUNCTION(BlueprintCallable)
    static void GlobalOpenDoorWorld(UWorld* World, FName connected);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GlobalOpenDoor(const UObject* WorldContextObject, FName connected);
    
    UFUNCTION(BlueprintCallable)
    static void GlobalCloseDoorWorld(UWorld* World, FName connected);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GlobalCloseDoor(const UObject* WorldContextObject, FName connected);
    
    UFUNCTION(BlueprintCallable)
    static void GlobalCallGameplayMessage(UWorld* World, FGameplayTag Channel, FName connected);
    
    UFUNCTION(BlueprintPure)
    TMap<FName, int32> GetCreatureKillCounterMap() const;
    
    UFUNCTION(BlueprintCallable)
    FName FindCreatureUniqueNameByDoorToOpenName(FName DoorToOpenName);
    
    UFUNCTION(BlueprintCallable)
    void CheckPuzzles(FPuzzleCreatureCounter& counter);
    
    UFUNCTION(BlueprintCallable)
    static void CallGlobalEvent(UWorld* World, FName connected);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CallGameplayMessage(const UObject* WorldContextObject, FGameplayTag Channel, FName connected);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_DoorTriggers(FGameplayTag Channel, const FGothicBasicVerbMessage& Payload);
    
    //FIXME
    UFUNCTION(BlueprintCallable)
    void AddPuzzleEntryData(const FName& creatureName, const int32 requiredKills, const EPuzzleEvent puzzleEvent, const UClass* extraData);
    
    UFUNCTION(BlueprintCallable)
    void AddPuzzleEntry(const FName& creatureName, const FName& DoorName, const FName& SaveState, int32 requiredKills, EPuzzleEvent puzzleEvent);
    
    UFUNCTION(BlueprintCallable)
    void AddPuzzleCount(const TSubclassOf<UPuzzleCountExtraData>& extraData);
    
};

