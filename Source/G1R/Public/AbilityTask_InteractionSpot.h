#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AbilityTaskCoroutine.h"
#include "ClockTime.h"
#include "EGenericTaskResult.h"
#include "EInteractionEndBehavior.h"
#include "EInteractionInputKind.h"
#include "EInteractionSpotEntryDirection.h"
#include "InteractionSpotHandle.h"
#include "OwnedLooseGameplayTags.h"
#include "Templates/SubclassOf.h"
#include "AbilityTask_InteractionSpot.generated.h"

class AActor;
class AGothicCharacter;
class UAbilityTaskGeneric;
class UAbilityTask_InteractionSpot;

UCLASS()
class G1R_API UAbilityTask_InteractionSpot : public UAbilityTaskCoroutine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool bForceCrowdIdleBehaviourToIgnoreMe;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<AGothicCharacter>> DefaultForCharacterClass;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer DefaultInteractionForActions;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer TaskEndingTags;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer SupportedSubActions;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer SubtaskOf;
    
    UPROPERTY(BlueprintReadOnly)
    UAbilityTask_InteractionSpot* RequestedSubtaskTemplate;
    
    UPROPERTY(BlueprintReadOnly)
    UAbilityTask_InteractionSpot* ParentTask;
    
    UPROPERTY(BlueprintReadOnly)
    FClockTime StartedAtGameTime;
    
    UPROPERTY(BlueprintReadWrite)
    float SecondsToSkipOnActivation;
    
    UPROPERTY(BlueprintReadOnly)
    FInteractionSpotHandle Spot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag Action;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPossibleAnywhere;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bRequiresObjectToInteractWith;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer BlockedOwnedTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer RequiredOwnedTags;
    
    UPROPERTY(BlueprintReadOnly)
    TSet<EInteractionInputKind> InteractionInputs;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer OwnedTagsWhileActive;
    
    UPROPERTY()
    UAbilityTask_InteractionSpot* CurrentSubtask;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsPartOfNavigation;
    
    UPROPERTY(EditAnywhere)
    bool bPutAwayItemInHandsBeforeInteraction;
    
    UPROPERTY(EditAnywhere)
    EInteractionSpotEntryDirection PreferredExitDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInteractionEndBehavior EndInteractionBehavior;
    
    UPROPERTY(BlueprintReadWrite)
    EInteractionEndBehavior OtherInteractionEndBehaviorOnSwitch;
    
    UPROPERTY(EditAnywhere)
    bool bKeepCharacterZLocationForAlignment;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer GameplayTagEventSubscriptions;
    
    UPROPERTY(Transient)
    FOwnedLooseGameplayTags CurrentlyOwnedGameplayTags;
    
public:
    UAbilityTask_InteractionSpot();

protected:
    UFUNCTION()
    void TryUndrawItemThenFinishActivate();
    
    UFUNCTION(BlueprintCallable)
    void RemoveOwnedTagsFromASC(const FGameplayTagContainer& Tags);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOwnedTagFromASC(const FGameplayTag& Tag);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void PerformSubAction(FGameplayTag ActionTag);
    
    UFUNCTION(BlueprintPure)
    FVector InverseTransformVectorLocalToUsedSpot(const FVector& WorldSpaceDirectionVector) const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool HasOwnedGameplayTag(const FGameplayTag& Tag) const;
    
    UFUNCTION()
    void HandleSubtaskEnded(UAbilityTaskGeneric* Task, EGenericTaskResult Result);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void HandleMovementInput(const FVector& LocalInputDirection);
    
    UFUNCTION(BlueprintPure)
    AActor* GetUsedActor() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetSelf() const;
    
protected:
    UFUNCTION()
    void FinishActivate();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    bool CanSwitchToTaskNow(UAbilityTask_InteractionSpot* Task);
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanHandleSubActionNow(FGameplayTag ActionTag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_HandleTagEvent(const FGameplayTag Tag, const FGameplayEventData EventData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddOwnedTagToASC(const FGameplayTag& Tag);
    
};

