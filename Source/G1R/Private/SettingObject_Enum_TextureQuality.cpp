#include "SettingObject_Enum_TextureQuality.h"

USettingObject_Enum_TextureQuality::USettingObject_Enum_TextureQuality() {
    this->m_DisplayName = FText::FromString(TEXT("Texture quality"));
    this->m_ValueNames.AddDefaulted(5);
}


