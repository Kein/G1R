#include "GameplayAbilityMovement.h"

UGameplayAbilityMovement::UGameplayAbilityMovement() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalOnly;
    this->m_PathFollowing = NULL;
}

void UGameplayAbilityMovement::InputMoveLeftRight(const FInputActionInstance& Instance) {
}

void UGameplayAbilityMovement::InputMoveForwardBackwards(const FInputActionInstance& Instance) {
}


