#include "SettingObject_Enum_PostProcessingQuality.h"

USettingObject_Enum_PostProcessingQuality::USettingObject_Enum_PostProcessingQuality() {
    this->m_DisplayName = FText::FromString(TEXT("Post-processing quality"));
    this->m_ValueNames.AddDefaulted(5);
}


