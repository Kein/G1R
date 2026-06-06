#include "SettingObject_Enum_FoliageQuality.h"

USettingObject_Enum_FoliageQuality::USettingObject_Enum_FoliageQuality() {
    this->m_DisplayName = FText::FromString(TEXT("Foliage quality"));
    this->m_ValueNames.AddDefaulted(5);
}


