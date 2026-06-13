#include "SettingObject_Enum_ButtonGraphics.h"
#include "ESettingObject_Enum_WidgetType.h"

USettingObject_Enum_ButtonGraphics::USettingObject_Enum_ButtonGraphics() {
    this->m_WidgetType = ESettingObject_Enum_WidgetType::Dropdown;
    this->m_ValueNames.AddDefaulted(5);
}


