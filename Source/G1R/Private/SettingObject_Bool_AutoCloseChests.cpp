#include "SettingObject_Bool_AutoCloseChests.h"

USettingObject_Bool_AutoCloseChests::USettingObject_Bool_AutoCloseChests() {
    this->m_DisplayName = FText::FromString(TEXT("Auto-close chests"));
    this->m_DefaultValue = true;
}


