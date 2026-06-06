#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "CharacterAIState.h"
#include "DailyRoutineTaskDescription.h"
#include "EDailyRoutineTeleportMode.h"
#include "EGenericTaskResult.h"
#include "EWeather.h"
#include "InGameTime.h"
#include "PersonalAreaOwnershipSettings.h"
#include "PersonalItemOwnershipSettings.h"
#include "Templates/SubclassOf.h"
#include "WaynetRelevantInterface.h"
#include "AIState_DailyRoutine.generated.h"

class UAIAssessmentResponseModule;
class UAIState_DailyRoutine;
class UAIWorldEvent;
class UAbilityTaskGeneric;
class UActivePersonalRelationshipModifier;
class UNavArea;
class UPreferredLocationComponent;
class UTerritoryConfig;

UCLASS(EditInlineNew)
class G1R_API UAIState_DailyRoutine : public UCharacterAIState, public IWaynetRelevantInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float ScheduleTimeOffsetMinutesMin;
    
    UPROPERTY(EditDefaultsOnly)
    float ScheduleTimeOffsetMinutesMax;
    
    UPROPERTY(EditDefaultsOnly)
    float WeatherPerceptionDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float WeatherPerceptionDelayVariance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FDailyRoutineTaskDescription> SortedTaskList;
    
    UPROPERTY()
    FDailyRoutineTaskDescription CurrentTaskDesc;
    
    UPROPERTY()
    UCharacterAIState* CurrentTask;
    
    UPROPERTY()
    FDailyRoutineTaskDescription ScheduledTaskDesc;
    
    UPROPERTY()
    int32 ScheduledTaskForTheDayIndex;
    
    UPROPERTY()
    UCharacterAIState* ScheduledTask;
    
    UPROPERTY(BlueprintReadOnly)
    UCharacterAIState* InterruptState;
    
    UPROPERTY()
    FInGameTime NextPotentialTaskSwitchScheduledAt;
    
    UPROPERTY()
    FInGameTime CurrentTaskStartedAtTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCharacterAIState> FallbackTaskClass;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, FName> KnownPlaces;
    
    UPROPERTY(EditDefaultsOnly)
    EDailyRoutineTeleportMode TeleportToCurrentTaskWhen;
    
    UPROPERTY(EditDefaultsOnly)
    bool bSimulateRoutineTasksFromStartTime;
    
    UPROPERTY()
    bool bReactsToWeather;
    
    UPROPERTY()
    bool bIsPendingScheduleCheck;
    
    UPROPERTY(BlueprintReadOnly)
    FBox CurrentMovementBoundsEstimation;
    
    UPROPERTY(Transient)
    TSet<TSubclassOf<UAIWorldEvent>> ReactsToWorldEventsOfClass;
    
    UPROPERTY(EditDefaultsOnly)
    FInGameTime AutoSwitchAfterTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UAIState_DailyRoutine> AutoSwitchToRoutine;
    
public:
    UPROPERTY(EditDefaultsOnly)
    UAIAssessmentResponseModule* PassiveAssessmentModule;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UActivePersonalRelationshipModifier>> RelationshipModifiersToApply;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer RolesWhileAssigned;
    
    UPROPERTY(EditDefaultsOnly)
    FPersonalAreaOwnershipSettings AreaOwnership;
    
    UPROPERTY(EditDefaultsOnly)
    FPersonalItemOwnershipSettings ItemOwnership;
    
    UPROPERTY(EditDefaultsOnly)
    FInGameTime RestoreAttributesAfterTimespan;
    
    UPROPERTY(EditDefaultsOnly)
    FInGameTime TryReviveAfterTimespan;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer TryReviveIfDeathMemoryHasAnyOf;
    
    UPROPERTY(EditDefaultsOnly)
    bool bForceSimulationUpdateEveryTick;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer AssociatedCrimeAreas;
    
    UAIState_DailyRoutine();

protected:
    UFUNCTION()
    void UpdateRoutineTaskExecution();
    
    UFUNCTION()
    bool StartScheduledTaskIfPossible();
    
    UFUNCTION()
    bool ShouldDoDifferentTaskNow() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ScheduleRemoveAllForEvent(TSubclassOf<UAIWorldEvent> EventClass);
    
    UFUNCTION(BlueprintCallable)
    void ScheduleIfRainingL3(int32 StartHour, int32 StartMinute, UCharacterAIState* Task, FName AtWaypoint, float WaypointRadius, TSubclassOf<UNavArea> InNavArea, UTerritoryConfig* Territory);
    
    UFUNCTION(BlueprintCallable)
    void ScheduleIfRainingL2(int32 StartHour, int32 StartMinute, UCharacterAIState* Task, FName AtWaypoint, float WaypointRadius, TSubclassOf<UNavArea> InNavArea, UTerritoryConfig* Territory);
    
    UFUNCTION(BlueprintCallable)
    void ScheduleIfRaining(int32 StartHour, int32 StartMinute, UCharacterAIState* Task, FName AtWaypoint, float WaypointRadius, TSubclassOf<UNavArea> InNavArea, UTerritoryConfig* Territory);
    
    UFUNCTION(BlueprintCallable)
    void ScheduleIfCloudy(int32 StartHour, int32 StartMinute, UCharacterAIState* Task, FName AtWaypoint, float WaypointRadius, TSubclassOf<UNavArea> InNavArea, UTerritoryConfig* Territory);
    
    UFUNCTION(BlueprintCallable)
    void ScheduleDuringEvent(TSubclassOf<UAIWorldEvent> EventClass, int32 StartHour, int32 StartMinute, UCharacterAIState* Task, FName AtWaypoint, float WaypointRadius, UTerritoryConfig* Territory);
    
    UFUNCTION(BlueprintCallable)
    void ScheduleAnyWeather(int32 StartHour, int32 StartMinute, UCharacterAIState* Task, FName AtWaypoint, float WaypointRadius, TSubclassOf<UNavArea> InNavArea, UTerritoryConfig* Territory);
    
    UFUNCTION(BlueprintCallable)
    void Schedule(int32 StartHour, int32 StartMinute, UCharacterAIState* Task, FName AtWaypoint, float WaypointRadius, TSubclassOf<UNavArea> InNavArea, UTerritoryConfig* Territory);
    
    UFUNCTION(BlueprintCallable)
    void RestoreAttributes();
    
    UFUNCTION(BlueprintCallable)
    void RequestDailyRoutineScheduleUpdateWithRandomTimeOffset();
    
    UFUNCTION(BlueprintCallable)
    void RequestDailyRoutineScheduleUpdate();
    
protected:
    UFUNCTION()
    void OnSubtaskEndedExitDailyRoutine(UAbilityTaskGeneric* Task, EGenericTaskResult Result);
    
    UFUNCTION()
    void OnSubtaskEnded(UAbilityTaskGeneric* Task, EGenericTaskResult Result);
    
    UFUNCTION()
    void OnPotentialTaskSwitch(const FInGameTime& Time);
    
public:
    UFUNCTION(BlueprintPure)
    bool NeedsAttributeRestore() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDoingInterruptState() const;
    
protected:
    UFUNCTION()
    void HandleWeatherChange(EWeather PreviousWeather, EWeather NewWeather);
    
    UFUNCTION()
    void HandleNewDayStarted();
    
public:
    UFUNCTION(BlueprintPure)
    EWeather GetWeather() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetScheduleSecondsRandomOffset(int32 Day) const;
    
    UFUNCTION()
    UTerritoryConfig* FindTerritoryOverrideOfCurrentlyScheduledTask() const;
    
    UFUNCTION(BlueprintCallable)
    void DoInterruptStateOfClass(TSubclassOf<UCharacterAIState> StateClass);
    
    UFUNCTION(BlueprintCallable)
    void DoInterruptState(UCharacterAIState* StateTemplate);
    
protected:
    UFUNCTION()
    void CheckIfReactsToWeather();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    bool BP_OverridePreferredLocationForRoutineTask(const FDailyRoutineTaskDescription& Desc, UPreferredLocationComponent* PreferredLocation) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_HandleWeatherChange(EWeather PreviousWeather, EWeather NewWeather);
    
    UFUNCTION(BlueprintCallable)
    void AddRoutineTaskEx(const FDailyRoutineTaskDescription& TaskDesc);
    

    // Fix for true pure virtual functions not being implemented
};

