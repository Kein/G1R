#include "GameplayAbilityRagdoll.h"

UGameplayAbilityRagdoll::UGameplayAbilityRagdoll() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_RagdollComponent = NULL;
}

void UGameplayAbilityRagdoll::OnPressMove(const FInputActionInstance& Instance) {
}


