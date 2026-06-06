#include "SettingObject_Int.h"

USettingObject_Int::USettingObject_Int() {
    this->m_DefaultValue = 0;
    this->m_MinValue = 0;
    this->m_MaxValue = 5;
}

void USettingObject_Int::SetValue(int32 _NewValue) {
}

int32 USettingObject_Int::SanitizeValue(float _Value) const {
    return 0;
}

int32 USettingObject_Int::GetValue() const {
    return 0;
}

int32 USettingObject_Int::GetMinValue() const {
    return 0;
}

int32 USettingObject_Int::GetMaxValue() const {
    return 0;
}

int32 USettingObject_Int::GetDefaultValue() const {
    return 0;
}


