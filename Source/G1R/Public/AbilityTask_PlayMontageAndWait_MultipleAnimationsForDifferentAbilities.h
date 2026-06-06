#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "AbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities.generated.h"

class UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities;
class UAnimMontage;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMontageWaitSimpleDelegate OnCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FMontageWaitSimpleDelegate OnBlendInEnded;
    
    UPROPERTY(BlueprintAssignable)
    FMontageWaitSimpleDelegate OnBlendOut;
    
    UPROPERTY(BlueprintAssignable)
    FMontageWaitSimpleDelegate OnInterrupted;
    
    UPROPERTY(BlueprintAssignable)
    FMontageWaitSimpleDelegate OnCancelled;
    
private:
    UPROPERTY()
    UAnimMontage* MontageToPlay;
    
    UPROPERTY()
    bool bAllowInterruptAfterBlendOut;
    
    UPROPERTY()
    float Rate;
    
    UPROPERTY()
    FName StartSection;
    
    UPROPERTY()
    float AnimRootMotionTranslationScale;
    
    UPROPERTY()
    float StartTimeSeconds;
    
    UPROPERTY()
    bool bStopWhenAbilityEnds;
    
public:
    UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities();

    UFUNCTION()
    void SetNextSectionAfterCurrent(UAnimMontage* Montage, FName SectionName);
    
    UFUNCTION()
    void ReplaceNextSectionOf(FName changeNextOf, FName ToSectionName);
    
    UFUNCTION()
    void PlayMontage();
    
    UFUNCTION()
    void OnMontageInterrupted();
    
    UFUNCTION()
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION()
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION()
    void OnMontageBlendingInEnded(UAnimMontage* Montage);
    
    UFUNCTION()
    void JumpToSection(FName SectionName);
    
    UFUNCTION()
    bool IsPlaying() const;
    
    UFUNCTION()
    bool HasSection(FName SectionName) const;
    
    UFUNCTION()
    float GetSectionPlayedRatioAtPosition(FName Section, float position) const;
    
    UFUNCTION()
    float GetSectionPlayedRatio(FName Section) const;
    
    UFUNCTION()
    float GetCurrentSectionPlayedRatio() const;
    
    UFUNCTION()
    FName GetCurrentSection(const UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities* CreatePlayMontageAndWaitProxyExtended(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* NewMontageToPlay, float NewRate, FName NewStartSection, bool NewBStopWhenAbilityEnds, float NewAnimRootMotionTranslationScale, float NewStartTimeSeconds);
    
};

