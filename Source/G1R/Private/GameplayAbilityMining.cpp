#include "GameplayAbilityMining.h"

UGameplayAbilityMining::UGameplayAbilityMining() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_UnEquipBefore = false;
    this->m_CharMontageTask = NULL;
}

void UGameplayAbilityMining::Server_OnCloseRequested_Implementation() {
}


