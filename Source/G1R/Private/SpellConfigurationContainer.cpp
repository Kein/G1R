#include "SpellConfigurationContainer.h"

USpellConfigurationContainer::USpellConfigurationContainer() {
    this->m_SetStateLockMovementOnCast = true;
    this->m_SetStateLockMovementOnSpell = true;
    this->m_OnLaunchSpellCastFinishByAnimNotify = false;
    this->m_SuperArmorEffect = NULL;
    this->m_SuperArmorResistanceMultiplier = 1.00f;
    this->m_ShouldRestoreCameraBehaviour = false;
    this->m_CastStateLockMovementGameplayEffectClass = NULL;
    this->m_SpellStateLockMovementGameplayEffectClass = NULL;
    this->m_SpellConfigClass = NULL;
    this->m_AnimatorDirectorClass = NULL;
}

USpellConfig* USpellConfigurationContainer::GetSpellConfig() const {
    return NULL;
}


