#include "GameplayAbilityPet.h"

UGameplayAbilityPet::UGameplayAbilityPet() {
    this->AbilityTriggers.AddDefaulted(1);
    this->m_UseCameraTarget = false;
    this->m_PlayMontageTask = NULL;
}

void UGameplayAbilityPet::OnPetMontageEnded() {
}


