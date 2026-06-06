#include "NPCHealthBarComponent.h"

UNPCHealthBarComponent::UNPCHealthBarComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_WidgetVisibility = true;
    this->m_CharacterTargeted = false;
}


