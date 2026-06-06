#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CharacterAIState.h"
#include "EWalkSpeed.h"
#include "GlobalPathingInfo.h"
#include "Interaction.h"
#include "InteractionSpotHandle.h"
#include "Templates/SubclassOf.h"
#include "AIState_DailyRoutine_RandomInteractions.generated.h"

class UAbilityTaskGeneric;
class UAbilityTask_InteractWith;
class UItemDefinition;

UCLASS(Abstract, EditInlineNew)
class G1R_API UAIState_DailyRoutine_RandomInteractions : public UCharacterAIState {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FGameplayTagContainer CharactersActualPotentialInteractionsWithSpot;
    
    UPROPERTY(Transient)
    FGameplayTagContainer CharactersActualPotentialInteractionsInSimulation;
    
    UPROPERTY(Transient)
    FGameplayTagContainer CharactersActualPotentialInteractionsWithoutSpot;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FInteractionSpotHandle, FGameplayTagContainer> CharactersActualPotentialSpotHandles;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FInteractionSpotHandle, FGameplayTagContainer> CharactersSimulationSpotHandles;
    
    UPROPERTY(EditDefaultsOnly)
    UAbilityTaskGeneric* CurrentTask;
    
    UPROPERTY(EditAnywhere)
    TArray<FInteraction> Interactions;
    
    UPROPERTY(EditAnywhere)
    TArray<FInteraction> BackupInteractions;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, float> AdditionalLocationAndRadius;
    
    UPROPERTY(EditAnywhere)
    float WaitSecondsIfAllFails;
    
    UPROPERTY(EditAnywhere)
    float ChanceToDoActionOnSpot;
    
    UPROPERTY(EditAnywhere)
    float SpotReachRadius;
    
    UPROPERTY(EditAnywhere)
    int32 NumInteractionLimit;
    
    UPROPERTY(EditAnywhere)
    EWalkSpeed InitialWalkspeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UItemDefinition> TryTakeOutItemIfPossible;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAddItemToTakeOutToInventoryIfMissing;
    
    UPROPERTY()
    TMap<FInteractionSpotHandle, FGlobalPathingInfo> UnreachableSpotHandlesToPathingInfo;
    
    UPROPERTY()
    TMap<FInteractionSpotHandle, FGlobalPathingInfo> ReachableSpotHandlesToPathingInfo;
    
    UAIState_DailyRoutine_RandomInteractions();

protected:
    UFUNCTION()
    void HandleCurrentTaskTimeLimitReached(UAbilityTask_InteractWith* Task);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddInteraction(const FInteraction& Interaction);
    
    UFUNCTION(BlueprintCallable)
    void AddBackupInteraction(const FInteraction& Interaction);
    
};

