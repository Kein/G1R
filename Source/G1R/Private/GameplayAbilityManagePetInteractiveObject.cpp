#include "GameplayAbilityManagePetInteractiveObject.h"

UGameplayAbilityManagePetInteractiveObject::UGameplayAbilityManagePetInteractiveObject() {
    this->m_ActivateAbilityOnGranted = true;
    this->m_InteractiveObjectDefinition = NULL;
}

void UGameplayAbilityManagePetInteractiveObject::RemoveInteractiveObject() {
}

void UGameplayAbilityManagePetInteractiveObject::OnTagEventRegistered(const FGameplayTag InTag, int32 NewCount) {
}

void UGameplayAbilityManagePetInteractiveObject::CreateInteractiveObject() {
}


