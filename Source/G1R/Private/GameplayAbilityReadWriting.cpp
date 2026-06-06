#include "GameplayAbilityReadWriting.h"

UGameplayAbilityReadWriting::UGameplayAbilityReadWriting() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_WritingDefinition = NULL;
}

void UGameplayAbilityReadWriting::BookClosed() {
}


