#include "SettingObject_Enum_CameraPreset.h"

USettingObject_Enum_CameraPreset::USettingObject_Enum_CameraPreset() {
    this->m_DisplayName = FText::FromString(TEXT("Camera preset"));
    this->m_ValueNames.AddDefaulted(2);
    this->m_ShouldValueWrapAround = true;
}


