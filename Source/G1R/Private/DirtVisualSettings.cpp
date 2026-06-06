#include "DirtVisualSettings.h"

FDirtVisualSettings::FDirtVisualSettings() {
    this->DirtAmount = EDirtAmountType::Low;
    this->HasDirt = false;
    this->DirtAlbedoIntensity = 0.00f;
    this->DirtAmountIntensity = 0.00f;
    this->DirtAmount0 = 0.00f;
    this->DirtRadius0 = 0.00f;
    this->DirtAmount1 = 0.00f;
    this->DirtRadius1 = 0.00f;
    this->DirtAmount2 = 0.00f;
    this->DirtRadius2 = 0.00f;
}

