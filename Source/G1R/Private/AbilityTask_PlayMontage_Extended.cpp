#include "AbilityTask_PlayMontage_Extended.h"

UAbilityTask_PlayMontage_Extended::UAbilityTask_PlayMontage_Extended() {
    this->MontageToPlay = NULL;
    this->bAllowInterruptAfterBlendOut = true;
    this->Rate = 0.00f;
    this->AnimRootMotionTranslationScale = 0.00f;
    this->bStopWhenAbilityEnds = false;
    this->StartTimeSeconds = 0.00f;
}

bool UAbilityTask_PlayMontage_Extended::StopPlayingMontage(float OverrideBlendOutTime) {
    return false;
}

void UAbilityTask_PlayMontage_Extended::SetNextSectionAfterCurrent(FName SectionName) {
}

void UAbilityTask_PlayMontage_Extended::ReplaceNextSectionOf(FName changeNextOf, FName ToSectionName) {
}

void UAbilityTask_PlayMontage_Extended::PerformSyncToLeader(const UAnimInstance* animInstanceFollower) const {
}

void UAbilityTask_PlayMontage_Extended::OnMontageInterrupted() {
}

void UAbilityTask_PlayMontage_Extended::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UAbilityTask_PlayMontage_Extended::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

void UAbilityTask_PlayMontage_Extended::OnMontageBlendingInEnded(UAnimMontage* Montage) {
}

bool UAbilityTask_PlayMontage_Extended::MontageSyncFollow(UAnimInstance* OtherAnimInstance, const UAnimMontage* MontageFollower) const {
    return false;
}

void UAbilityTask_PlayMontage_Extended::JumpToSection(FName SectionName) {
}

bool UAbilityTask_PlayMontage_Extended::IsPlayingMontage(const UAnimMontage* Montage) const {
    return false;
}

bool UAbilityTask_PlayMontage_Extended::HasSection(FName SectionName) const {
    return false;
}

float UAbilityTask_PlayMontage_Extended::GetSectionPlayedRatioAtPosition(FName Section, float position) const {
    return 0.0f;
}

float UAbilityTask_PlayMontage_Extended::GetSectionPlayedRatio(FName Section) const {
    return 0.0f;
}

float UAbilityTask_PlayMontage_Extended::GetSectionDuration(FName Section) const {
    return 0.0f;
}

FName UAbilityTask_PlayMontage_Extended::GetNextSectionOf(FName Section) const {
    return NAME_None;
}

float UAbilityTask_PlayMontage_Extended::GetCurrentSectionPlayedRatio() const {
    return 0.0f;
}

FName UAbilityTask_PlayMontage_Extended::GetCurrentSection() const {
    return NAME_None;
}

float UAbilityTask_PlayMontage_Extended::GetCurrentPosition() const {
    return 0.0f;
}

UAbilityTask_PlayMontage_Extended* UAbilityTask_PlayMontage_Extended::CreatePlayMontageExtendedProxy(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* NewMontageToPlay, float NewRate, FName NewStartSection, bool NewBStopWhenAbilityEnds, float NewAnimRootMotionTranslationScale, float NewStartTimeSeconds) {
    return NULL;
}

UAbilityTask_PlayMontage_Extended* UAbilityTask_PlayMontage_Extended::CreatePlayMontageExtended(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* NewMontageToPlay, float NewRate, FName NewStartSection, bool NewBStopWhenAbilityEnds, float NewAnimRootMotionTranslationScale, float NewStartTimeSeconds) {
    return NULL;
}


