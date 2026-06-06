#include "GameplayAbilityTorchStartFire.h"

UGameplayAbilityTorchStartFire::UGameplayAbilityTorchStartFire() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_MoveToLocation = false;
    this->m_UnEquipBefore = false;
}

void UGameplayAbilityTorchStartFire::OnItemPicked(FGameplayEventData Payload) {
}

void UGameplayAbilityTorchStartFire::OnAnimFinished() {
}


