#include "PerceptionSightSettings.h"

FPerceptionSightSettings::FPerceptionSightSettings() {
    this->MinLightIntensity = 0.00f;
    this->MaxLightIntensity = 0.00f;
    this->MinLightModifier = 0.00f;
    this->MaxLightModifier = 0.00f;
    this->WeatherModifier[0] = 0.00f;
    this->WeatherModifier[1] = 0.00f;
    this->WeatherModifier[2] = 0.00f;
    this->WeatherModifier[3] = 0.00f;
    this->WeatherModifier[4] = 0.00f;
    this->MovementModeDefaultModifier = 0.00f;
    this->LoseAwarenessWithExcludingTags = false;
    this->SenseModifier = 0.00f;
    this->SenseModifierThreshold = 0.00f;
    this->AwarenessWearoffFactorNoLineOfSight = 0.00f;
    this->AwarenessWearoffFactorOutOfShape = 0.00f;
    this->bRequiresFreeLineOfSight = false;
    this->PeripheralHalfAngle = 0.00f;
    this->MiniMalFocusDistance = 0.00f;
    this->HeightParabolAlpha = 0.00f;
    this->HeightParabolOffsetY = 0.00f;
    this->HeightParabolOffsetZ = 0.00f;
    this->ParabolMultiplier = 0.00f;
}

