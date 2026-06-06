#include "GameplayAbilityCrouch.h"

UGameplayAbilityCrouch::UGameplayAbilityCrouch() {
    this->AbilityTriggers.AddDefaulted(2);
    this->m_FinishOnInputReleased = true;
}

void UGameplayAbilityCrouch::OnStanceChanged(EStance NewStance) {
}

void UGameplayAbilityCrouch::OnMovementModeChanged(TEnumAsByte<EMovementMode> NewMovementMode) {
}


