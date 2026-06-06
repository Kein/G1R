#include "WeaponArcheryDefinition.h"

UWeaponArcheryDefinition::UWeaponArcheryDefinition() {
    this->m_ArrowGravityModifier = 1.00f;
    this->m_ArrowDefinition = NULL;
    this->m_MaxRange = 10000.00f;
    this->m_FeedbackData = NULL;
}

UFeedbackData* UWeaponArcheryDefinition::GetFeedbackControl() const {
    return NULL;
}


