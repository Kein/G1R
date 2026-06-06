#include "GameplayAbilityBase_Combat.h"

UGameplayAbilityBase_Combat::UGameplayAbilityBase_Combat() {
    this->m_CarryComponent = NULL;
    this->m_MoveComp = NULL;
    this->m_CombatConfig = NULL;
    this->m_UpdateRotationTask = NULL;
}


