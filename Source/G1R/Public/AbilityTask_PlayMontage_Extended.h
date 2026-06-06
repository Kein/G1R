#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "AbilityTaskBase.h"
#include "AbilityTask_PlayMontage_Extended.generated.h"

class UAbilityTask_PlayMontage_Extended;
class UAnimInstance;
class UAnimMontage;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_PlayMontage_Extended : public UAbilityTaskBase {
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
    bool bStopWhenAbilityEnds;
    
    UPROPERTY()
    float StartTimeSeconds;
    
public:
    UAbilityTask_PlayMontage_Extended();

    UFUNCTION()
    bool StopPlayingMontage(float OverrideBlendOutTime);
    
    UFUNCTION()
    void SetNextSectionAfterCurrent(FName SectionName);
    
    UFUNCTION()
    void ReplaceNextSectionOf(FName changeNextOf, FName ToSectionName);
    
    UFUNCTION()
    void PerformSyncToLeader(const UAnimInstance* animInstanceFollower) const;
    
    UFUNCTION()
    void OnMontageInterrupted();
    
    UFUNCTION()
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION()
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION()
    void OnMontageBlendingInEnded(UAnimMontage* Montage);
    
    UFUNCTION()
    bool MontageSyncFollow(UAnimInstance* OtherAnimInstance, const UAnimMontage* MontageFollower) const;
    
    UFUNCTION()
    void JumpToSection(FName SectionName);
    
    UFUNCTION()
    bool IsPlayingMontage(const UAnimMontage* Montage) const;
    
    UFUNCTION()
    bool HasSection(FName SectionName) const;
    
    UFUNCTION()
    float GetSectionPlayedRatioAtPosition(FName Section, float position) const;
    
    UFUNCTION()
    float GetSectionPlayedRatio(FName Section) const;
    
    UFUNCTION()
    float GetSectionDuration(FName Section) const;
    
    UFUNCTION()
    FName GetNextSectionOf(FName Section) const;
    
    UFUNCTION()
    float GetCurrentSectionPlayedRatio() const;
    
    UFUNCTION()
    FName GetCurrentSection() const;
    
    UFUNCTION()
    float GetCurrentPosition() const;
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_PlayMontage_Extended* CreatePlayMontageExtendedProxy(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* NewMontageToPlay, float NewRate, FName NewStartSection, bool NewBStopWhenAbilityEnds, float NewAnimRootMotionTranslationScale, float NewStartTimeSeconds);
    
    UFUNCTION()
    static UAbilityTask_PlayMontage_Extended* CreatePlayMontageExtended(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* NewMontageToPlay, float NewRate, FName NewStartSection, bool NewBStopWhenAbilityEnds, float NewAnimRootMotionTranslationScale, float NewStartTimeSeconds);
    
};

