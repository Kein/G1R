#include "GameplayAbilityOpenContainer.h"

UGameplayAbilityOpenContainer::UGameplayAbilityOpenContainer() {
    this->AbilityTriggers.AddDefaulted(1);
    this->m_TaskLootContainer = NULL;
    this->HUDOpenContainerController = NULL;
}

void UGameplayAbilityOpenContainer::OnLocalCloseRequested() {
}


