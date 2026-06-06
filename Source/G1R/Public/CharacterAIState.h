#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AbilityTaskCoroutine.h"
#include "EGenericTaskResult.h"
#include "EWalkSpeed.h"
#include "OwnedLooseGameplayTags.h"
#include "PerceptionShortTermMemory.h"
#include "RememberedPerception.h"
#include "Templates/SubclassOf.h"
#include "CharacterAIState.generated.h"

class AActor;
class AGothicAIController;
class AGothicCharacter;
class AGothicCharacterState;
class AGothicNPCState;
class UAIAssessmentResponseModule;
class UAIWorldEventExplicit;
class UCharacterAIState;
class UCharacterPerceptionComponent;
class UGameplayAbility_CharacterAI;

UCLASS(Abstract, EditInlineNew)
class G1R_API UCharacterAIState : public UAbilityTaskCoroutine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<AGothicCharacter*> Others;
    
    UPROPERTY(BlueprintReadWrite)
    bool bShouldExitState;
    
    UPROPERTY(BlueprintReadWrite)
    bool bSupportsSimulatedSteps;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UAIAssessmentResponseModule> AssessmentModuleClass;
    
    UPROPERTY(BlueprintReadOnly)
    UAIAssessmentResponseModule* AssessmentModule;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UAIWorldEventExplicit> WorldEventToActivate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName IdleFocusSpotName;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer GameplayTagEventSubscriptions;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer OwnedGameplayTags;
    
    UPROPERTY()
    FOwnedLooseGameplayTags DynamicOwnedLooseGameplayTags;
    
    UPROPERTY()
    EWalkSpeed requestedWalkSpeed;
    
public:
    UCharacterAIState();

    UFUNCTION(BlueprintCallable)
    void SetWalkSpeed(EWalkSpeed WalkSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetOther(AGothicCharacter* Other);
    
    UFUNCTION(BlueprintCallable)
    void RestartState();
    
    UFUNCTION(BlueprintCallable)
    void ResetWalkSpeed();
    
    UFUNCTION(BlueprintCallable)
    void RemoveDynamicOwnedGameplayTagFromOwner(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool PrefersGracefulExit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGracefulExitRequested();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool MayDoGracefulExitNow() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsSubStateOf(TSubclassOf<UCharacterAIState> Class);
    
    UFUNCTION(BlueprintCallable)
    bool IsInSubStateOfClass(TSubclassOf<UCharacterAIState> Class);
    
    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetSelf() const;
    
    UFUNCTION(BlueprintPure)
    UCharacterAIState* GetParentState() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetOther() const;
    
    UFUNCTION(BlueprintPure)
    AGothicNPCState* GetNPCState() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FVector GetMoveGoalOffsetFor(const AActor* TargetActor) const;
    
    UFUNCTION(BlueprintPure)
    UCharacterAIState* GetCurrentSubstate() const;
    
    UFUNCTION(BlueprintPure)
    AGothicAIController* GetController() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacterState* GetCharacterState() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FBox EstimateMovementBoundingBox() const;
    
    UFUNCTION(BlueprintCallable)
    static UCharacterAIState* CreateFromClass(TSubclassOf<UCharacterAIState> Class, UGameplayAbility_CharacterAI* OwningAI);
    
    UFUNCTION(BlueprintCallable)
    int32 CancelSubStatesOfClass(TSubclassOf<UCharacterAIState> Class);
    
    UFUNCTION(BlueprintNativeEvent)
    bool BP_ShouldShowTaskInfoInImGui();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_SetupPerceptions(UCharacterPerceptionComponent* Perception);
    
    UFUNCTION(BlueprintNativeEvent)
    void BP_OnGameplayTagEvent(const FGameplayTag Tag, const FGameplayEventData& EventData);
    
    UFUNCTION(BlueprintNativeEvent)
    void BP_OnAnyPerceptionReceived(AActor* Instigator, FGameplayTag Tag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_HandleStateEnded(EGenericTaskResult Result);
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<FName> BP_GetSimulationPreferredLocationLoop() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_DrawStateImGui();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_DisplayOverheadImGui();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_DisplayImGui();
    
    UFUNCTION(BlueprintCallable)
    void AssessEventFromPerception(const FRememberedPerception& Perception, const FPerceptionShortTermMemory& Memory, FGameplayTag Assess);
    
    UFUNCTION(BlueprintCallable)
    void AddDynamicOwnedGameplayTagToOwner(const FGameplayTag& Tag);
    
};

