#include "GameplayAbilityGiveItemToCharacter.h"

UGameplayAbilityGiveItemToCharacter::UGameplayAbilityGiveItemToCharacter() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->m_ShouldResetInteractiveLogic = false;
    this->bNotifyReached = false;
    this->bAllowedToTransferItem = false;
}

void UGameplayAbilityGiveItemToCharacter::WaitForReceiverToFinish() {
}


