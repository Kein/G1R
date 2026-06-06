#include "GameplayAbilityHitRiposte.h"

UGameplayAbilityHitRiposte::UGameplayAbilityHitRiposte() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_OnHitEffect = NULL;
}


