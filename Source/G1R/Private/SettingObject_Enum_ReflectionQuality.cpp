#include "SettingObject_Enum_ReflectionQuality.h"

USettingObject_Enum_ReflectionQuality::USettingObject_Enum_ReflectionQuality() {
    this->m_DisplayName = FText::FromString(TEXT("Reflection quality"));
    this->m_ValueNames.AddDefaulted(5);
}


