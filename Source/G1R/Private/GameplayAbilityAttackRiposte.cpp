#include "GameplayAbilityAttackRiposte.h"

UGameplayAbilityAttackRiposte::UGameplayAbilityAttackRiposte() {
    this->AbilityTriggers.AddDefaulted(1);
    this->m_UpdateMagnetTask = NULL;
    this->m_UpdateRotationTask = NULL;
}


