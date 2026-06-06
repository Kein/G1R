#include "AbilityTask_CheckClimb.h"

UAbilityTask_CheckClimb::UAbilityTask_CheckClimb() {
    this->m_ClimbingConfig = NULL;
    this->m_Character = NULL;
}

void UAbilityTask_CheckClimb::OnPressJump() {
}

void UAbilityTask_CheckClimb::OnJumpDown() {
}

void UAbilityTask_CheckClimb::OnAutoClimb() {
}

UAbilityTask_CheckClimb* UAbilityTask_CheckClimb::CreateUpdateClimb(UGameplayAbility* OwningAbility, FName TaskInstanceName) {
    return NULL;
}


