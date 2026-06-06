#include "SettingObject_Enum.h"

USettingObject_Enum::USettingObject_Enum() {
    this->m_WidgetType = ESettingObject_Enum_WidgetType::Spinner;
    this->m_DefaultValue = 0;
    this->m_LastConfirmedValue = 0;
    this->m_ShouldValueWrapAround = false;
}

bool USettingObject_Enum::ShouldValueWrapAround() const {
    return false;
}

void USettingObject_Enum::SetValue(int32 _NewValue) {
}

int32 USettingObject_Enum::SanitizeValue(int32 _Value) const {
    return 0;
}

void USettingObject_Enum::Refresh() {
}

ESettingObject_Enum_WidgetType USettingObject_Enum::GetWidgetType() const {
    return ESettingObject_Enum_WidgetType::Spinner;
}

FText USettingObject_Enum::GetValueDisplayName(int32 _Value) const {
    return FText::GetEmpty();
}

int32 USettingObject_Enum::GetValue() const {
    return 0;
}

int32 USettingObject_Enum::GetNumValues() const {
    return 0;
}

int32 USettingObject_Enum::GetDefaultValue() const {
    return 0;
}


