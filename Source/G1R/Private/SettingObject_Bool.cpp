#include "SettingObject_Bool.h"

USettingObject_Bool::USettingObject_Bool() {
    this->m_DefaultValue = false;
}

void USettingObject_Bool::SetValue(bool _NewValue) {
}

bool USettingObject_Bool::GetValue() const {
    return false;
}

bool USettingObject_Bool::GetDefaultValue() const {
    return false;
}


