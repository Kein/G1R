#include "SettingObject_Enum_OverallQualityPreset.h"
#include "ESettingObject_Enum_WidgetType.h"

USettingObject_Enum_OverallQualityPreset::USettingObject_Enum_OverallQualityPreset() {
    this->m_DisplayName = FText::FromString(TEXT("Quality preset"));
    this->m_WidgetType = ESettingObject_Enum_WidgetType::Dropdown;
    this->m_ValueNames.AddDefaulted(7);
}


