#include "GameplayAbilitySpellCreaturePlayMontage.h"

UGameplayAbilitySpellCreaturePlayMontage::UGameplayAbilitySpellCreaturePlayMontage() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->m_ActivateAbilityOnGranted = true;
    this->m_StopWhenAbilityEnds = false;
    this->m_Rate = 1.00f;
    this->m_ShouldRestoreTickOptimizer = false;
    this->m_MontageTask = NULL;
}

void UGameplayAbilitySpellCreaturePlayMontage::PlayMontage() {
}

void UGameplayAbilitySpellCreaturePlayMontage::OnPlayMontageSuccessful_Scriptable_Implementation() {
}

void UGameplayAbilitySpellCreaturePlayMontage::OnPlayMontageFailed_Scriptable_Implementation() {
}

void UGameplayAbilitySpellCreaturePlayMontage::OnLaunchSpell_Scriptable_Implementation() {
}

void UGameplayAbilitySpellCreaturePlayMontage::OnLaunchSpell() {
}

void UGameplayAbilitySpellCreaturePlayMontage::OnInterruptedMontage_Scriptable_Implementation() {
}

void UGameplayAbilitySpellCreaturePlayMontage::OnInterruptedMontage() {
}

void UGameplayAbilitySpellCreaturePlayMontage::OnCompletedMontage_Scriptable_Implementation() {
}

void UGameplayAbilitySpellCreaturePlayMontage::OnCompletedMontage() {
}

void UGameplayAbilitySpellCreaturePlayMontage::OnCancelledMontage_Scriptable_Implementation() {
}

void UGameplayAbilitySpellCreaturePlayMontage::OnCancelledMontage() {
}

void UGameplayAbilitySpellCreaturePlayMontage::OnBlendOutMontage_Scriptable_Implementation() {
}

void UGameplayAbilitySpellCreaturePlayMontage::OnBlendOutMontage() {
}

void UGameplayAbilitySpellCreaturePlayMontage::JumpToSection(FName SectionName) {
}

UAnimMontage* UGameplayAbilitySpellCreaturePlayMontage::GetMontage() {
    return NULL;
}

void UGameplayAbilitySpellCreaturePlayMontage::ClientPlayMontage_Implementation(UAnimMontage* Montage) {
}

void UGameplayAbilitySpellCreaturePlayMontage::ClientJumpToSection_Implementation(FName SectionName) {
}


