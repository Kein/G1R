#include "WeaponMeleeDefinition.h"

UWeaponMeleeDefinition::UWeaponMeleeDefinition() {
    this->m_FeedbackData = NULL;
    this->m_DamageReduction = 0.00f;
    this->m_StartRegenerateSc = 0.00f;
    this->m_HpRegenerateTick = 0.00f;
    this->m_BlockSuperArmorMultiplier = 1.00f;
}

float UWeaponMeleeDefinition::GetStartRegenerateSc() const {
    return 0.0f;
}

float UWeaponMeleeDefinition::GetHpRegenerateTick() const {
    return 0.0f;
}

UFeedbackData* UWeaponMeleeDefinition::GetFeedbackControl() const {
    return NULL;
}

float UWeaponMeleeDefinition::GetDamageReduction() const {
    return 0.0f;
}

float UWeaponMeleeDefinition::GetBlockSuperArmorMultiplier() const {
    return 0.0f;
}


