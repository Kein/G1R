#include "SettingObject_Bool_EnableScreenshotOnSavegame.h"

USettingObject_Bool_EnableScreenshotOnSavegame::USettingObject_Bool_EnableScreenshotOnSavegame() {
    this->m_DisplayName = FText::FromString(TEXT("Screenshot When Saving"));
    this->m_DefaultValue = true;
}


