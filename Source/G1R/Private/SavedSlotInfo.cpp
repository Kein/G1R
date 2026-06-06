#include "SavedSlotInfo.h"

USavedSlotInfo::USavedSlotInfo() {
    this->m_IsPlayerSaveNameCustom = false;
    this->TimePlayed = 0.00f;
    this->Chapter = 0;
    this->IsQuicksave = false;
    this->IsAutosave = false;
    this->SizeX = 0;
    this->SizeY = 0;
}

UTexture2D* USavedSlotInfo::GetImage() {
    return NULL;
}


