#include "SettingObject.h"

USettingObject::USettingObject() {
    this->m_PlatformExclusivityMask = 0;
    this->m_InputAvailabilityMask = 0;
}

void USettingObject::RevertToLastConfirmedValue() {
}

bool USettingObject::IsSupported() const {
    return false;
}

bool USettingObject::IsPlattformSupported() const {
    return false;
}

bool USettingObject::IsInputModeSupported() const {
    return false;
}

bool USettingObject::IsAvailable() const {
    return false;
}

bool USettingObject::HideUnavailable() const {
    return false;
}

ESettingsType USettingObject::GetSettingsType() const {
    return ESettingsType::Invalid;
}

FText USettingObject::GetDisplayName() const {
    return FText::GetEmpty();
}

FSettingDescription USettingObject::GetDescription() const {
    return FSettingDescription{};
}

void USettingObject::ConfirmValue() {
}


