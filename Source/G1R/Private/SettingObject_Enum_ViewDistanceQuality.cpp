#include "SettingObject_Enum_ViewDistanceQuality.h"

USettingObject_Enum_ViewDistanceQuality::USettingObject_Enum_ViewDistanceQuality() {
    this->m_DisplayName = FText::FromString(TEXT("View distance quality"));
    this->m_ValueNames.AddDefaulted(5);
}


