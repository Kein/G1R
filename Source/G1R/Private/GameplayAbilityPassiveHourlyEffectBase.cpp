#include "GameplayAbilityPassiveHourlyEffectBase.h"

UGameplayAbilityPassiveHourlyEffectBase::UGameplayAbilityPassiveHourlyEffectBase() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->m_ActivateAbilityOnGranted = true;
    this->m_HourlyEffectClass = NULL;
}

void UGameplayAbilityPassiveHourlyEffectBase::OnNextHourlyEffectGameTimeReached(const FInGameTime& TimeReached) {
}


