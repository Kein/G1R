#include "SettingObject_Enum_DisplayMode.h"
#include "ESettingObject_Enum_WidgetType.h"

USettingObject_Enum_DisplayMode::USettingObject_Enum_DisplayMode() {
    this->m_DisplayName = FText::FromString(TEXT("Display mode"));
    this->m_WidgetType = ESettingObject_Enum_WidgetType::Dropdown;
    this->m_ValueNames.AddDefaulted(2);
}


