#include "FireActorDefinition.h"

UFireActorDefinition::UFireActorDefinition() {
    this->m_StartActive = false;
    this->m_StopWithRain = false;
    this->m_AttenuatedWithRain = false;
    this->m_HoursForUnLite = 0.00f;
    this->m_StopWithSpell = false;
    this->m_TimeRange = NULL;
    this->m_SpellActivated = true;
}


