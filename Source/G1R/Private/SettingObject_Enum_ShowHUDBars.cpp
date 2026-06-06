#include "SettingObject_Enum_ShowHUDBars.h"

USettingObject_Enum_ShowHUDBars::USettingObject_Enum_ShowHUDBars() {
    this->m_DisplayName = FText::FromString(TEXT("Show HUD bars"));
    this->m_ValueNames.AddDefaulted(3);
}


