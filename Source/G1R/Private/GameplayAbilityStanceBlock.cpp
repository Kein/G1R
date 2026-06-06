#include "GameplayAbilityStanceBlock.h"

UGameplayAbilityStanceBlock::UGameplayAbilityStanceBlock() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_FinishOnInputReleased = true;
    this->m_BlockEffect = NULL;
    this->m_UnBlockEffect = NULL;
    this->m_AttackAxisTask = NULL;
    this->m_PlayMontageTask = NULL;
}

void UGameplayAbilityStanceBlock::StartEndTimer() {
}

void UGameplayAbilityStanceBlock::OnParryStart() {
}

void UGameplayAbilityStanceBlock::OnParryEnd() {
}

void UGameplayAbilityStanceBlock::OnMontageFinished() {
}

void UGameplayAbilityStanceBlock::OnMontageBlendIn() {
}

void UGameplayAbilityStanceBlock::OnHitMontageEnded(UAnimMontage* AnimMontage, bool Interrumped) {
}

void UGameplayAbilityStanceBlock::OnAttackInput(FGameplayTag Direction) {
}


