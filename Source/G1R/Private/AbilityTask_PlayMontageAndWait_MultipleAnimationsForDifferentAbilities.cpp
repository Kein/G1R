#include "AbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities.h"

UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities::UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities() {
    this->MontageToPlay = NULL;
    this->bAllowInterruptAfterBlendOut = true;
    this->Rate = 1.00f;
    this->AnimRootMotionTranslationScale = 0.00f;
    this->StartTimeSeconds = 0.00f;
    this->bStopWhenAbilityEnds = true;
}

void UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities::SetNextSectionAfterCurrent(UAnimMontage* Montage, FName SectionName) {
}

void UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities::ReplaceNextSectionOf(FName changeNextOf, FName ToSectionName) {
}

void UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities::PlayMontage() {
}

void UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities::OnMontageInterrupted() {
}

void UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

void UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities::OnMontageBlendingInEnded(UAnimMontage* Montage) {
}

void UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities::JumpToSection(FName SectionName) {
}

bool UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities::IsPlaying() const {
    return false;
}

bool UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities::HasSection(FName SectionName) const {
    return false;
}

float UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities::GetSectionPlayedRatioAtPosition(FName Section, float position) const {
    return 0.0f;
}

float UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities::GetSectionPlayedRatio(FName Section) const {
    return 0.0f;
}

float UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities::GetCurrentSectionPlayedRatio() const {
    return 0.0f;
}

FName UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities::GetCurrentSection(const UAnimMontage* Montage) const {
    return NAME_None;
}

UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities* UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities::CreatePlayMontageAndWaitProxyExtended(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* NewMontageToPlay, float NewRate, FName NewStartSection, bool NewBStopWhenAbilityEnds, float NewAnimRootMotionTranslationScale, float NewStartTimeSeconds) {
    return NULL;
}


