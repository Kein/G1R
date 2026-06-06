#include "SettingObject_Enum_ShadowQuality.h"

USettingObject_Enum_ShadowQuality::USettingObject_Enum_ShadowQuality() {
    this->m_DisplayName = FText::FromString(TEXT("Shadow quality"));
    this->m_ValueNames.AddDefaulted(5);
}


