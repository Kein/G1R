#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AIInteractionBinding.h"
#include "EGenericTaskResult.h"
#include "EGothicFocusPriority.h"
#include "EWalkSpeed.h"
#include "GameplayAbility_AI.h"
#include "PerceptionShortTermMemory.h"
#include "RememberedPerception.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbility_CharacterAI.generated.h"

class AActor;
class AGothicCharacter;
class AGothicCharacterState;
class UAIAssessmentResponseModule;
class UAIState_DailyRoutine;
class UAIState_SelfConversation;
class UAIValueSet;
class UAbilityTaskGeneric;
class UAbilityTask_AI;
class UCharacterAIState;
class UCharacterPerceptionComponent;
class UGothicAIGroup;
class USceneComponent;
class UTerritoryConfig;
class UWeaponArcheryDefinition;
class UWeaponDefinition;
class UWeaponMeleeDefinition;

UCLASS(Config=Game)
class G1R_API UGameplayAbility_CharacterAI : public UGameplayAbility_AI {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UAIState_DailyRoutine> InitialDailyRoutineClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCharacterAIState> ConversationAIStateClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UAIState_SelfConversation> SelfConversationAIStateClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCharacterAIState> AfterDefeatedAIStateClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCharacterAIState> DefeatedAIStateClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCharacterAIState> ControlledAIStateClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCharacterAIState> FoundSomeoneInMyBedAIStateClass;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<UCharacterAIState*> CurrentStateStack;
    
    UPROPERTY(BlueprintReadOnly)
    TSet<UAbilityTask_AI*> ActiveAITasks;
    
    UPROPERTY(BlueprintReadOnly)
    UCharacterAIState* ScheduledNextState;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UAIAssessmentResponseModule> HighPriorityAssessmentModuleClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UAIAssessmentResponseModule> AssessmentModuleClass;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<TSubclassOf<UGothicAIGroup>, UGothicAIGroup*> JoinedGroups;
    
    UPROPERTY(Config)
    TArray<FAIInteractionBinding> ActionsToBindAsFunctions;
    
    UPROPERTY()
    EWalkSpeed DesiredWalkSpeed;
    
    UPROPERTY()
    UAIState_DailyRoutine* DailyRoutineInstance;
    
    UPROPERTY()
    TMap<TSubclassOf<UAIValueSet>, UAIValueSet*> SpawnedStorageValueSets;
    
    UPROPERTY()
    TMap<TSubclassOf<UAIValueSet>, UAIValueSet*> PermanentStorageValueSets;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<TSubclassOf<UAIValueSet>, TSubclassOf<UAIValueSet>> AIValueSetRemap;
    
    UGameplayAbility_CharacterAI();

    UFUNCTION(BlueprintCallable)
    void SwitchToDailyRoutineIfNothingElseToDo();
    
    UFUNCTION(BlueprintCallable)
    void SwitchToDailyRoutine();
    
    UFUNCTION(BlueprintCallable)
    void SwitchToConversationState();
    
    UFUNCTION(BlueprintCallable)
    void SwitchAIStateWithOthersImmediately(UCharacterAIState* State, const TArray<AGothicCharacter*>& Others);
    
    UFUNCTION(BlueprintCallable)
    void SwitchAIStateWithOthers(UCharacterAIState* State, const TArray<AGothicCharacter*>& Others);
    
    UFUNCTION(BlueprintCallable)
    void SwitchAIStateImmediatelyToClass(TSubclassOf<UCharacterAIState> StateClass, AGothicCharacter* Other);
    
    UFUNCTION(BlueprintCallable)
    void SwitchAIStateImmediately(UCharacterAIState* State, AGothicCharacter* Other);
    
    UFUNCTION(BlueprintCallable)
    void SwitchAIState(UCharacterAIState* State, AGothicCharacter* Other);
    
    UFUNCTION(BlueprintCallable)
    void StopTargetingEnemy(EGothicFocusPriority FocusPriority);
    
protected:
    UFUNCTION()
    void StartScheduledNextState();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTargetEnemyComponent(USceneComponent* EnemyActorComponent, EGothicFocusPriority FocusPriority, UAbilityTaskGeneric* TaskLifeAnchor, FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetEnemy(AGothicCharacter* EnemyActor, EGothicFocusPriority FocusPriority, UAbilityTaskGeneric* TaskLifeAnchor);
    
    UFUNCTION(BlueprintPure)
    bool ResolveLocationByName(FName KnownLocationName, FVector& OutVector) const;
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromSpawnedStorage(TSubclassOf<UAIValueSet> ValueSetClass);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromPermanentStorage(TSubclassOf<UAIValueSet> ValueSetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float RateRangedWeaponStrength(UWeaponArcheryDefinition* Weapon);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float RateMeleeWeaponStrength(UWeaponMeleeDefinition* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void ProcessAllPendingAssessments();
    
protected:
    UFUNCTION()
    void OnGracefulEndRequestFulfilled(UAbilityTaskGeneric* State, EGenericTaskResult Result);
    
public:
    UFUNCTION(BlueprintCallable)
    void LeaveGroupsWithClass(TSubclassOf<UGothicAIGroup> GroupClass);
    
    UFUNCTION(BlueprintCallable)
    void LeaveAllGroups();
    
    UFUNCTION(BlueprintCallable)
    void JoinGroup(UGothicAIGroup* Group);
    
    UFUNCTION(BlueprintPure)
    bool IsUnconscious() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInState(TSubclassOf<UCharacterAIState> StateClass) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsFocusedBy(AGothicCharacter* Other);
    
    UFUNCTION(BlueprintPure)
    bool IsDoingDailyRoutine() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDoingConversationState() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDoingAITaskOfClass(TSubclassOf<UAbilityTask_AI> AITaskClass) const;
    
    UFUNCTION(BlueprintPure)
    bool HasPendingScheduledState() const;
    
    UFUNCTION(BlueprintPure)
    bool HasInSpawnedStorage(TSubclassOf<UAIValueSet> ValueSetClass) const;
    
    UFUNCTION(BlueprintPure)
    bool HasInPermanentStorage(TSubclassOf<UAIValueSet> ValueSetClass) const;
    
    UFUNCTION(BlueprintCallable)
    bool HasCurrentTerritoryOfClass(TSubclassOf<UTerritoryConfig> TerritoryClass);
    
    UFUNCTION()
    void HandleNewAvatarGameplayReady();
    
    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetTargetEnemy() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetSelf() const;
    
    UFUNCTION(BlueprintPure)
    UCharacterAIState* GetScheduledDailyRoutineAIStateTemplate() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetPersistentSelf() const;
    
    UFUNCTION(BlueprintPure)
    UGothicAIGroup* GetGroupStatus(TSubclassOf<UGothicAIGroup> GroupClass) const;
    
    UFUNCTION(BlueprintPure)
    UAIState_DailyRoutine* GetDailyRoutineTemplate() const;
    
    UFUNCTION(BlueprintPure)
    UAIState_DailyRoutine* GetDailyRoutineIfActive() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UTerritoryConfig> GetCurrentTerritoryClass() const;
    
    UFUNCTION(BlueprintPure)
    UTerritoryConfig* GetCurrentTerritory() const;
    
    UFUNCTION(BlueprintPure)
    UCharacterAIState* GetCurrentState() const;
    
    UFUNCTION(BlueprintPure)
    UCharacterAIState* GetCurrentRootState() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UAbilityTaskGeneric*> GetActiveTasksOfClass(TSubclassOf<UAbilityTaskGeneric> TaskClass);
    
    UFUNCTION(BlueprintCallable)
    TSet<UGothicAIGroup*> FindGroupInPerceivedCharacters(TSubclassOf<UGothicAIGroup> GroupClass);
    
    UFUNCTION(BlueprintCallable)
    TSet<UGothicAIGroup*> FindGroupInCharactersAtLocation(TSubclassOf<UGothicAIGroup> GroupClass, const FVector& Location, float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWeaponArcheryDefinition* FindBestRangedWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWeaponMeleeDefinition* FindBestMeleeWeapon();
    
    UFUNCTION(BlueprintPure)
    UCharacterAIState* FindActiveStateByClass(TSubclassOf<UCharacterAIState> StateClass) const;
    
    UFUNCTION(BlueprintCallable)
    void EndAllStatesAndTasks();
    
    UFUNCTION(BlueprintCallable)
    UGothicAIGroup* CreateAndJoinGroup(TSubclassOf<UGothicAIGroup> GroupClass);
    
    UFUNCTION(BlueprintCallable)
    int32 CancelStatesOfClass(TSubclassOf<UCharacterAIState> Class);
    
    UFUNCTION(BlueprintCallable)
    void CancelConversationStateAndDoDailyRoutine();
    
    UFUNCTION(BlueprintCallable)
    void CancelAllStatesAndTasks();
    
    UFUNCTION(BlueprintCallable)
    void CancelAllExceptRootState();
    
    UFUNCTION(BlueprintCallable)
    int32 CancelAITasksOfClass(TSubclassOf<UAbilityTask_AI> Class);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_SetupPerceptions(UCharacterPerceptionComponent* Perception);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_HandleRevivedInSimulation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_HandleKilledCharacter(AGothicCharacterState* KilledCharacter, TSubclassOf<UWeaponDefinition> UsedWeapon, FGameplayTagContainer& OutAdditionalMemoryTags);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    int64 BP_EvaluateAssessmentConditions(int64 RequiredConditionBits, const FGameplayTag& ForEvent, const FRememberedPerception& ForPerception);
    
    UFUNCTION(BlueprintCallable)
    bool AssessEventWithExtraTags(const FGameplayTag& AIEventTag, const FRememberedPerception& FromPerception, const FGameplayTagContainer& ExtraEventTags);
    
    UFUNCTION(BlueprintCallable)
    void AssessEventFromPerception(const FRememberedPerception& Perception, const FPerceptionShortTermMemory& Memory, FGameplayTag Assess);
    
    UFUNCTION(BlueprintCallable)
    bool AssessEvent(const FGameplayTag& AIEventTag, const FRememberedPerception& FromPerception);
    
};

