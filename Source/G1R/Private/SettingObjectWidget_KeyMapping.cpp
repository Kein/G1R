#include "SettingObjectWidget_KeyMapping.h"

USettingObjectWidget_KeyMapping::USettingObjectWidget_KeyMapping() {
    this->m_Setting = NULL;
}

void USettingObjectWidget_KeyMapping::SetValue(EPlayerMappableKeySlot _Slot, FKey _NewValue, bool _Force) {
}


FKey USettingObjectWidget_KeyMapping::GetValue(EPlayerMappableKeySlot _Slot) const {
    return FKey{};
}


