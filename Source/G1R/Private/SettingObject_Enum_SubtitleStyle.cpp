#include "SettingObject_Enum_SubtitleStyle.h"

USettingObject_Enum_SubtitleStyle::USettingObject_Enum_SubtitleStyle() {
    this->m_DisplayName = FText::FromString(TEXT("Subtitle size"));
    this->m_ValueNames.AddDefaulted(2);
    this->m_ShouldValueWrapAround = true;
}


