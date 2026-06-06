#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AbilityTask_InteractionSpot.h"
#include "EInteractionFastExitMode.h"
#include "EStance.h"
#include "InteractionAnimTransition.h"
#include "Templates/SubclassOf.h"
#include "AbilityTask_InteractionSpot_Montage.generated.h"

class UAbilityTask_MoveIntoPositionForInteraction;
class UAbilityTask_PlayMontage_Extended;
class UAbilityTask_TakeOutItem;
class UAnimMontage;
class UAnimSequence;
class UInteractiveObjectDefinition;
class UItemDefinition;

UCLASS()
class G1R_API UAbilityTask_InteractionSpot_Montage : public UAbilityTask_InteractionSpot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 m_LoadAssetsPriority;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SubtaskEntrySection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SubtaskExitSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString MontageLoopSectionPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MontageEntryFrontSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MontageEntryBackSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MontageEntryLeftSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MontageEntryRightSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MontageEntryHasItemInHandSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MontageExitFrontSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MontageExitBackSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MontageExitLeftSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MontageExitRightSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> MainMontage;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FName> SectionToPositioningSocketMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FName> ObjectSectionMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> ObjectMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> SimulationLoopAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AutoTransitionCheckSecondsMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AutoTransitionCheckSecondsMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowInterruptLoopOnCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowInterruptAtAnyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlockExitWhenNoExitSectionAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowInstantExitWhenBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInteractionFastExitMode QuickExitMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FInteractionAnimTransition> Transitions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, FInteractionAnimTransition> ExternalTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStance stance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float QuickExitAnimationRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName FastExitSectionName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag TakeOutItemWithSpecFromInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag TakeOutItemWithItemTypeFromInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer DisableAutoTransitionsForTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPutAwayItemInHandsAfterInteraction;
    
    UPROPERTY(BlueprintReadWrite)
    UAbilityTask_TakeOutItem* TakeOutItemTask;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UInteractiveObjectDefinition> ActAsInteractiveObjectWhileActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSetUsedActorAsViewTargetForPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldFocusInteractiveObject;
    
    UPROPERTY(BlueprintReadWrite)
    UAbilityTask_MoveIntoPositionForInteraction* MoveTask;
    
    UPROPERTY(BlueprintReadWrite)
    UAbilityTask_PlayMontage_Extended* MontageTask;
    
    UPROPERTY(BlueprintReadWrite)
    bool bStartWhileMoving;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimMontage* NowPlaying;
    
    UPROPERTY(Transient)
    float LastTimeTransitionHappened;
    
    UPROPERTY(Transient)
    float BlockTransitionsUntilSeconds;
    
    UPROPERTY(Transient)
    bool bIsDoingExternalCancel;
    
    UPROPERTY(BlueprintReadWrite)
    bool bTaskDisablesFootIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowTimeSkipAnimationNotifies;
    
    UPROPERTY(Instanced)
    UItemDefinition* CurrentVisuallyEquippedItem;
    
public:
    UAbilityTask_InteractionSpot_Montage();

protected:
    UFUNCTION(BlueprintCallable)
    bool TryStartMontage(UAnimMontage* Montage, FName StartSection, float Speed);
    
public:
    UFUNCTION(BlueprintCallable)
    bool TryPerformTransitionWithTag(const FGameplayTag& ActionTag, bool bAllowFromAnyMontageOrSection, bool bAllowExitTransitions, bool bForceNow);
    
    UFUNCTION(BlueprintPure)
    FInteractionAnimTransition TransitionToSection(TSoftObjectPtr<UAnimMontage> Montage, FName FromSection, FName ToSection, float Weight) const;
    
    UFUNCTION(BlueprintPure)
    FInteractionAnimTransition TransitionToMontage(TSoftObjectPtr<UAnimMontage> FromMontage, FName FromSection, TSoftObjectPtr<UAnimMontage> ToMontage, FName ToSection, float Weight) const;
    
    UFUNCTION(BlueprintPure)
    FInteractionAnimTransition TransitionStay(TSoftObjectPtr<UAnimMontage> Montage, FName InSection, float Weight) const;
    
    UFUNCTION(BlueprintPure)
    FInteractionAnimTransition TransitionExit(TSoftObjectPtr<UAnimMontage> Montage, FName InSection, FName ToSection, float Weight) const;
    
    UFUNCTION(BlueprintPure)
    FInteractionAnimTransition TransitionAfterMontageEnds(TSoftObjectPtr<UAnimMontage> FromMontage, TSoftObjectPtr<UAnimMontage> ToMontage, FName ToSection, float Weight) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetupTransitions();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool PerformNextTransition();
    
    UFUNCTION()
    void OnTargetLocationReached();
    
    UFUNCTION()
    void OnTakeOutItemTaskSucceded();
    
    UFUNCTION()
    void OnMontageInterrupted();
    
    UFUNCTION()
    void OnMontageCompleted();
    
    UFUNCTION()
    void OnMontageBlendOut();
    
    UFUNCTION()
    void OnLoadedMontage();
    
public:
    UFUNCTION(BlueprintPure)
    bool HasAnyTransitionFrom(TSoftObjectPtr<UAnimMontage> FromMontage, FName FromSection) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyTransitionFor(TSoftObjectPtr<UAnimMontage> FromMontage, FName FromSection, TSoftObjectPtr<UAnimMontage> ToMontage, FName ToSection) const;
    
    UFUNCTION(BlueprintNativeEvent)
    FName GetExitSection();
    
    UFUNCTION(BlueprintNativeEvent)
    FName GetEntrySection();
    
protected:
    UFUNCTION()
    void DoAutoTransitionCheck();
    
};

