#include "GameplayAbilityGroundedMovement.h"

UGameplayAbilityGroundedMovement::UGameplayAbilityGroundedMovement() {
    this->AbilityTriggers.AddDefaulted(1);
    this->m_LandingMontageTask = NULL;
}

void UGameplayAbilityGroundedMovement::OnLandedCallback(const FHitResult& Hit) {
}


