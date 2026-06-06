#include "WalkSpeedModifierComponent.h"

UWalkSpeedModifierComponent::UWalkSpeedModifierComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_SelectedClass = NULL;
    this->m_SelectedWalkSpeed = EWalkSpeed::Count;
}


