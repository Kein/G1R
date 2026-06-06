#include "GameplayAbilityMemory.h"

UGameplayAbilityMemory::UGameplayAbilityMemory() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->m_ActivateAbilityOnGranted = true;
}

ULongTermMemoryComponent* UGameplayAbilityMemory::GetLongTermMemory() const {
    return NULL;
}

AGothicCharacterState* UGameplayAbilityMemory::GetAvatarCharacterState() const {
    return NULL;
}

AGothicCharacter* UGameplayAbilityMemory::GetAvatarCharacter() const {
    return NULL;
}



