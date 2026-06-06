#include "LightingMagnetHandle.h"

FLightingMagnetHandle::FLightingMagnetHandle() {
    this->Timer = 0.00f;
    this->CallAfterTime = 0.00f;
    this->LastIndex = 0;
    this->NextSelection = ESelectionType::Next;
}

