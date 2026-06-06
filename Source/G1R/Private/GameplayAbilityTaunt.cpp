#include "GameplayAbilityTaunt.h"

UGameplayAbilityTaunt::UGameplayAbilityTaunt() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->AbilityTriggers.AddDefaulted(1);
}


