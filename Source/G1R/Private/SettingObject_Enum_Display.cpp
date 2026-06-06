#include "SettingObject_Enum_Display.h"
#include "ESettingObject_Enum_WidgetType.h"

USettingObject_Enum_Display::USettingObject_Enum_Display() {
    this->m_DisplayName = FText::FromString(TEXT("Display"));
    this->m_WidgetType = ESettingObject_Enum_WidgetType::Dropdown;
}


