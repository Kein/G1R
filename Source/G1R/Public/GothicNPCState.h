#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MuCO/CustomizableObjectInstance.h"
#include "Engine/EngineTypes.h"
#include "CharacterSignificanceSettings.h"
#include "ENPCSpawnState.h"
#include "GothicCharacterState.h"
#include "GothicCharacterStateCharacterVisualsDestroyedDelegate.h"
#include "GothicCharacterStateCharacterVisualsSpawnedDelegate.h"
#include "InGameTime.h"
#include "Templates/SubclassOf.h"
#include "GothicNPCState.generated.h"

class AActor;
class AGothicCharacter;
class AGothicNPCState;
class UAIState_DailyRoutine;
class UCharacterVisualFeaturesDefinition;
class UCustomizableObjectInstance;
class UDailyRoutineSimulationComponent;
class UGameplayAbility_CharacterAI;
class UObject;

UCLASS(Config=Engine)
class G1R_API AGothicNPCState : public AGothicCharacterState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UAIState_DailyRoutine* DailyRoutineTemplate;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAIState_DailyRoutine* DailyRoutineTemplateAtSpawn;
    
    UPROPERTY(BlueprintReadOnly)
    FInGameTime DailyRoutineAssignedAtTime;
    
    UPROPERTY(BlueprintReadOnly)
    FVector DailyRoutineStartedAtLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UDailyRoutineSimulationComponent* DailyRoutineSimulation;
    
    UPROPERTY(BlueprintReadOnly)
    UGameplayAbility_CharacterAI* AIAbility;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FCharacterSignificanceSettings SpawningSettings;
    
    UPROPERTY(BlueprintAssignable)
    FGothicCharacterStateCharacterVisualsSpawned OnCharacterSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FGothicCharacterStateCharacterVisualsDestroyed OnCharacterDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    TSoftClassPtr<AGothicCharacter> VisualCharacterClass;
    
    UPROPERTY(BlueprintReadWrite)
    ENPCSpawnState SpawnState;
    
    UPROPERTY()
    UCustomizableObjectInstance* VisualCustomizableObjectInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForcedSignificanceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRemovedFromWorld;
    
    UPROPERTY(BlueprintReadWrite)
    float BlockingTaskTimeskipSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCharacterVisualFeaturesDefinition* VisualFeaturesDefinition;
    
    UPROPERTY(BlueprintReadOnly)
    AGothicCharacterState* SummonedBy;
    
    AGothicNPCState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void TryReviveInSimulationOrScheduleNewRequest(const FInGameTime& TimeReached);
    
public:
    UFUNCTION(BlueprintCallable)
    void TeleportAndExchangeDailyRoutineToClass(TSubclassOf<UAIState_DailyRoutine> NewDailyRoutine, const FTransform& TeleportTo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SubscribeToReviveClockEventIfNeeded();
    
public:
    UFUNCTION()
    void SimulateDailyRoutineIfNeeded(const FInGameTime& LastUpdateAt, float DeltaSeconds);
    
    UFUNCTION(BlueprintPure)
    bool ShouldHaveVisualsSpawned(float Significance) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReviveInSimulation();
    
public:
    UFUNCTION(BlueprintCallable)
    bool ReportTimeSkipWhateverIsLeft();
    
    UFUNCTION(BlueprintCallable)
    bool ReportTimeSkip(float SecondsThatWillBeSkipped);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromWorld();
    
    UFUNCTION(BlueprintPure)
    bool IsSignificantEnoughToSpawn(float Significance) const;
    
    UFUNCTION(BlueprintPure)
    bool IsSignificantEnoughToPreloadVisuals(float Significance) const;
    
    UFUNCTION(BlueprintPure)
    bool IsSignificantEnoughToKeepVisuals(float Significance) const;
    
protected:
    UFUNCTION()
    void HandleCharacterEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> Reason);
    
    UFUNCTION()
    void HandleCharacterCustomizableObjectInstanceUpdated(const FUpdateContext& Result);
    
public:
    UFUNCTION(BlueprintPure)
    AGothicCharacterState* GetSummonedBy() const;
    
    UFUNCTION(BlueprintPure)
    bool GetRemovedFromWorld() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGothicNPCState* FindNPCByUniqueName(const UObject* WorldContextObject, FName UniqueName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGothicNPCState* FindNPCByGlobalId(const UObject* WorldContextObject, FName GlobalId);
    
protected:
    UFUNCTION(BlueprintPure)
    UAIState_DailyRoutine* FindDefaultDailyRoutine(const FString& Suffix) const;
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AGothicNPCState*> FindAllNPCsByUniqueName(const UObject* WorldContextObject, FName UniqueName);
    
    UFUNCTION(BlueprintCallable)
    void ExchangeDailyRoutineToClass(TSubclassOf<UAIState_DailyRoutine> NewDailyRoutine);
    
    UFUNCTION(BlueprintCallable)
    void ExchangeDailyRoutine(UAIState_DailyRoutine* NewDailyRoutineTemplate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AssignDefaultDailyRoutine(const FString& Suffix);
    
};

