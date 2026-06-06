#include "FloatingItemEffectComponent.h"

UFloatingItemEffectComponent::UFloatingItemEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_FloatingItemSelector = NULL;
    this->m_Activated = false;
    this->m_StopInmediateGoToHandTime = 0.20f;
}

void UFloatingItemEffectComponent::RestartVisuals() {
}

void UFloatingItemEffectComponent::OnDeactivateEffectCompleted() {
}


