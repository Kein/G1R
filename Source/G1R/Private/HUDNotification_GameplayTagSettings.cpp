#include "HUDNotification_GameplayTagSettings.h"

FHUDNotification_GameplayTagSettings::FHUDNotification_GameplayTagSettings() {
    this->m_EventType = 0;
    this->m_TagType = ENotificationGameplayTagType::ExactTag;
    this->m_DesiredTimeOverride = 0.00f;
}

