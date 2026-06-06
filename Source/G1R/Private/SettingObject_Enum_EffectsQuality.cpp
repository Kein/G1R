#include "SettingObject_Enum_EffectsQuality.h"

USettingObject_Enum_EffectsQuality::USettingObject_Enum_EffectsQuality() {
    this->m_DisplayName = FText::FromString(TEXT("Effects quality"));
    this->m_ValueNames.AddDefaulted(5);
}


