#include "HUDNotificationSettings.h"

UHUDNotificationSettings::UHUDNotificationSettings() {
}

TSoftClassPtr<UHUDNotificationWidgetBase> UHUDNotificationSettings::GetNotificationWidgetClass(FName _Identifier) const {
    return NULL;
}

UHUDNotificationSettings* UHUDNotificationSettings::Get() {
    return NULL;
}


