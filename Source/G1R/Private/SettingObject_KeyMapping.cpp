#include "SettingObject_KeyMapping.h"

USettingObject_KeyMapping::USettingObject_KeyMapping() {
    this->m_InputMappingContext = NULL;
    this->m_InputAction = NULL;
    this->m_UserSettings = NULL;
    this->m_KeySettings = NULL;
}

void USettingObject_KeyMapping::SetValue(EPlayerMappableKeySlot _Slot, FKey _NewValue, bool _CheckCollisions) {
}

FKey USettingObject_KeyMapping::GetValue(EPlayerMappableKeySlot _Slot) const {
    return FKey{};
}

FKey USettingObject_KeyMapping::GetDefaultValue(EPlayerMappableKeySlot _Slot) const {
    return FKey{};
}


