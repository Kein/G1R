#include "GothicInputComponent.h"

UGothicInputComponent::UGothicInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_GothicInputConfig = NULL;
    this->m_GothicASC = NULL;
    this->m_IMCPriority = 100;
}

void UGothicInputComponent::OnWindowFocusChanged(bool bIsFocused) {
}


