#include "SettingObject_Enum_BloodIntensity.h"

USettingObject_Enum_BloodIntensity::USettingObject_Enum_BloodIntensity() {
    this->m_DisplayName = FText::FromString(TEXT("Blood intensity"));
    this->m_ValueNames.AddDefaulted(4);
}


