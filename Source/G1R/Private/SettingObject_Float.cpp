#include "SettingObject_Float.h"

USettingObject_Float::USettingObject_Float() {
    this->m_DefaultValue = 0.00f;
    this->m_MinValue = 0.00f;
    this->m_MaxValue = 100.00f;
    this->m_StepSize = 1.00f;
    this->m_AlwaysShowSign = false;
}

FText USettingObject_Float::ValueToText(float _Value) const {
    return FText::GetEmpty();
}

void USettingObject_Float::SetValue(float _NewValue) {
}

float USettingObject_Float::SanitizeValue(float _Value) const {
    return 0.0f;
}

float USettingObject_Float::GetValue() const {
    return 0.0f;
}

float USettingObject_Float::GetStepSize() const {
    return 0.0f;
}

float USettingObject_Float::GetMinValue() const {
    return 0.0f;
}

float USettingObject_Float::GetMaxValue() const {
    return 0.0f;
}

float USettingObject_Float::GetDefaultValue() const {
    return 0.0f;
}

int32 USettingObject_Float::GetDecimalPlaces() const {
    return 0;
}

bool USettingObject_Float::GetAlwaysShowSign() const {
    return false;
}


