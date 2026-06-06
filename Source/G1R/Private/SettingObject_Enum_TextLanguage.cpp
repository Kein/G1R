#include "SettingObject_Enum_TextLanguage.h"

USettingObject_Enum_TextLanguage::USettingObject_Enum_TextLanguage() {
    this->m_DisplayName = FText::FromString(TEXT("Text language"));
    this->m_ShouldValueWrapAround = true;
}


