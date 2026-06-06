#include "BehaviorModuleComponent.h"

UBehaviorModuleComponent::UBehaviorModuleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ControlledActor = NULL;
}


