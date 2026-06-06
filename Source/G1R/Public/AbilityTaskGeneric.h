#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "EGenericTaskResult.h"
#include "GothicPathfollowSettings.h"
#include "InGameTime.h"
#include "AbilityTaskGeneric.generated.h"

class AGothicAIController;
class AGothicCharacter;
class AGothicCharacterState;
class AGothicNPCState;
class APlayerController;
class UAbilityTaskGeneric;

UCLASS()
class G1R_API UAbilityTaskGeneric : public UAbilityTaskBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAbilityTaskEndedAnyResultDelegate, UAbilityTaskGeneric*, Task, EGenericTaskResult, Result);
    
    UPROPERTY(BlueprintReadOnly)
    FInGameTime TimeTaskActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite)
    FAbilityTaskEndedAnyResultDelegate OnTaskEnded;
    
    UPROPERTY(BlueprintReadWrite)
    EGenericTaskResult TaskResult;
    
    UPROPERTY()
    bool bHasCustomPathfollowSetting;
    
    UPROPERTY()
    bool bCouldNotPushPathfollowSetting;
    
    UPROPERTY()
    FGothicPathfollowSettings PathfollowSettingCache;
    
    UAbilityTaskGeneric();

    UFUNCTION(BlueprintCallable)
    void SetCustomPathfollowingSetting(const FGothicPathfollowSettings& PathfollowSetting);
    
    UFUNCTION(BlueprintCallable)
    bool ReportTimeSkipWhateverIsLeft();
    
    UFUNCTION(BlueprintCallable)
    bool ReportTimeSkip(float SecondsThatWillBeSkipped);
    
    UFUNCTION(BlueprintPure)
    bool IsInDailyRoutineSimulation() const;
    
    UFUNCTION(BlueprintPure)
    bool HasTaskJustStarted(float ThresholdRealtimeSeconds) const;
    
    UFUNCTION(BlueprintPure)
    bool HasBeenActivated() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void HandleTimeskipRequest();
    
    UFUNCTION(BlueprintPure)
    float GetTimeRequestedToSkip() const;
    
    UFUNCTION(BlueprintPure)
    float GetRuntimeSeconds() const;
    
    UFUNCTION(BlueprintPure)
    FInGameTime GetRuntimeInGame() const;
    
    UFUNCTION(BlueprintPure)
    FInGameTime GetInGameTimeNow() const;
    
    UFUNCTION(BlueprintPure)
    APlayerController* GetAvatarPlayerController() const;
    
    UFUNCTION(BlueprintPure)
    AGothicNPCState* GetAvatarNPCState() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacterState* GetAvatarCharacterState() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetAvatarCharacter() const;
    
    UFUNCTION(BlueprintPure)
    AGothicAIController* GetAvatarAIController() const;
    
    UFUNCTION(BlueprintCallable)
    void EndTaskWithResult(EGenericTaskResult Result);
    
    UFUNCTION(BlueprintCallable)
    void EndTaskAsSuccess();
    
    UFUNCTION(BlueprintCallable)
    void EndTaskAsFailure();
    
    UFUNCTION(BlueprintCallable)
    void EndTaskAsCancelled();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnExternalCancel();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_HandleAvatarChanged();
    
    UFUNCTION(BlueprintCallable)
    void BP_ExternalCancel();
    
};

