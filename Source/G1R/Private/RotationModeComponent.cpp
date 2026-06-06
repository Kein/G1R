#include "RotationModeComponent.h"

URotationModeComponent::URotationModeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_CarryComponent = NULL;
    this->m_AbilitySystemComponent = NULL;
}

void URotationModeComponent::OnAbilityActivated(UGameplayAbility* Ability) {
}


