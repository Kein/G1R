#include "BaseGothicAnimInstance.h"

UBaseGothicAnimInstance::UBaseGothicAnimInstance() {
    this->m_Character = NULL;
    this->m_DataModule_Animation = NULL;
    this->m_AbilitySystemComponent = NULL;
    this->m_LODLevel = 0;
}

void UBaseGothicAnimInstance::OnMontageHasStarted(UAnimMontage* Montage) {
}

float UBaseGothicAnimInstance::GetMontagePosition(const UAnimMontage* Montage) const {
    return 0.0f;
}

UAnimMontage* UBaseGothicAnimInstance::GetCurrentActiveMontageInSlot(FName Name) const {
    return NULL;
}


