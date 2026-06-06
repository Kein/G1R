#include "SettingObject_Enum_Test.h"

USettingObject_Enum_Test::USettingObject_Enum_Test() {
    this->m_DisplayName = FText::FromString(TEXT("Test Enum"));
    this->m_ValueNames.AddDefaulted(4);
}


