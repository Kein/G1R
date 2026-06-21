#include "GameplayAbilityInteractionBase.h"

UGameplayAbilityInteractionBase::UGameplayAbilityInteractionBase() {
    this->m_AbilityEnded = false;
    this->m_ShouldResetInteractiveLogic = true;
}

void UGameplayAbilityInteractionBase::OnTargetLocationReached() {
}

void UGameplayAbilityInteractionBase::OnPreTargetLocationReached() {
}


