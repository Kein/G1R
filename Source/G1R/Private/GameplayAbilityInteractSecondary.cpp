#include "GameplayAbilityInteractSecondary.h"

UGameplayAbilityInteractSecondary::UGameplayAbilityInteractSecondary() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalOnly;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_InteractionActor = NULL;
}

void UGameplayAbilityInteractSecondary::EndAndCall() {
}


