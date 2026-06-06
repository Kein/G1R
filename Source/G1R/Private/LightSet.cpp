#include "LightSet.h"

FLightSet::FLightSet() {
    this->BarnDoorAngle = 0.00f;
    this->BarnDoorLength = 0.00f;
    this->VolumetricScatteringIntensity = 0.00f;
    this->IndirectLightingIntensity = 0.00f;
    this->LightUnitType = ELightUnits::Unitless;
    this->ShotMode = EConversationCameraShotMode::CloseShot;
    this->DiffuseColorBoost = 0.00f;
    this->MaxTraceDistance = 0.00f;
    this->EyeIntensity = 0.00f;
}

