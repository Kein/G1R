#include "GameplayAbilityInteract.h"

UGameplayAbilityInteract::UGameplayAbilityInteract() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalOnly;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_ShouldResetInteractiveLogic = false;
    this->m_InteractionActor = NULL;
}

void UGameplayAbilityInteract::EndAndCall() {
}


