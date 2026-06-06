#include "SettingObject_Enum_GlobalIlluminationQuality.h"

USettingObject_Enum_GlobalIlluminationQuality::USettingObject_Enum_GlobalIlluminationQuality() {
    this->m_DisplayName = FText::FromString(TEXT("Global illumination quality"));
    this->m_ValueNames.AddDefaulted(5);
}


