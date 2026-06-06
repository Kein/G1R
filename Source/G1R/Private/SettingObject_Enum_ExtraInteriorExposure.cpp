#include "SettingObject_Enum_ExtraInteriorExposure.h"

USettingObject_Enum_ExtraInteriorExposure::USettingObject_Enum_ExtraInteriorExposure() {
    this->m_DisplayName = FText::FromString(TEXT("Extra Interior Exposure"));
    this->m_ValueNames.AddDefaulted(3);
}


