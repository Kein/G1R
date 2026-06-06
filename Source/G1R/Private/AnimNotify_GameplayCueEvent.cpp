#include "AnimNotify_GameplayCueEvent.h"

UAnimNotify_GameplayCueEvent::UAnimNotify_GameplayCueEvent() {
    this->m_Event = EGameplayCueEvent::OnActive;
    this->m_ShouldConsiderChildTags = false;
    this->m_Level = 0.00f;
}


