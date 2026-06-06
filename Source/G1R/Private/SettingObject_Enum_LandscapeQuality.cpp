#include "SettingObject_Enum_LandscapeQuality.h"

USettingObject_Enum_LandscapeQuality::USettingObject_Enum_LandscapeQuality() {
    this->m_DisplayName = FText::FromString(TEXT("Landscape quality"));
    this->m_ValueNames.AddDefaulted(5);
}


