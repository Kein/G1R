#include "GameplayAbilityReceiveItemFromCharacter.h"

UGameplayAbilityReceiveItemFromCharacter::UGameplayAbilityReceiveItemFromCharacter() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->m_TickEnabled = true;
    this->m_bCanEverTick = true;
    this->m_ShouldResetInteractiveLogic = false;
    this->PlayingMontageInstance = NULL;
}


