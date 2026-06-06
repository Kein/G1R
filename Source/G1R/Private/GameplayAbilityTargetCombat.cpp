#include "GameplayAbilityTargetCombat.h"

UGameplayAbilityTargetCombat::UGameplayAbilityTargetCombat() {
    this->AbilityTriggers.AddDefaulted(1);
    this->m_FinishOnInputReleased = true;
    this->m_EffectToApply = NULL;
    this->m_TargetConfig = NULL;
    this->m_UpdateTargetTask = NULL;
}

void UGameplayAbilityTargetCombat::SetNetExecutionPolicy(TEnumAsByte<EGameplayAbilityNetExecutionPolicy::Type> NetExPolicy) {
}

void UGameplayAbilityTargetCombat::OnTargetVisualLost_Scriptable_Implementation() {
}

void UGameplayAbilityTargetCombat::OnTargetDie() {
}

void UGameplayAbilityTargetCombat::OnTargetDefeated() {
}

bool UGameplayAbilityTargetCombat::OnCanActivateAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo) const {
    return false;
}

void UGameplayAbilityTargetCombat::GameplayTagCallback(FGameplayTag InTag, int32 NewCount) {
}

bool UGameplayAbilityTargetCombat::CanInputTargetRelease_Scriptable_Implementation() {
    return false;
}


