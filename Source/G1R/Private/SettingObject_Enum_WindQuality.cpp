#include "SettingObject_Enum_WindQuality.h"

USettingObject_Enum_WindQuality::USettingObject_Enum_WindQuality() {
    this->m_DisplayName = FText::FromString(TEXT("Wind Quality"));
    this->m_ValueNames.AddDefaulted(2);
    this->m_ShouldValueWrapAround = true;
}


