#include "SettingObject_Bool_ShowProjectileCount.h"

USettingObject_Bool_ShowProjectileCount::USettingObject_Bool_ShowProjectileCount() {
    this->m_DisplayName = FText::FromString(TEXT("Show ammunition amount"));
    this->m_DefaultValue = true;
}


