#include "SettingObjectWidget_Float.h"

USettingObjectWidget_Float::USettingObjectWidget_Float() {
    this->m_Setting = NULL;
}

void USettingObjectWidget_Float::SetValue(float _NewValue, bool _Force) {
}


FText USettingObjectWidget_Float::GetValueAsText() const {
    return FText::GetEmpty();
}

float USettingObjectWidget_Float::GetValue() const {
    return 0.0f;
}


