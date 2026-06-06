#include "SettingObject_Enum_AntiAliasingQuality.h"

USettingObject_Enum_AntiAliasingQuality::USettingObject_Enum_AntiAliasingQuality() {
    this->m_DisplayName = FText::FromString(TEXT("Anti-aliasing quality"));
    this->m_ValueNames.AddDefaulted(5);
}


