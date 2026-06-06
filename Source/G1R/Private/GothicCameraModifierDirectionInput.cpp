#include "GothicCameraModifierDirectionInput.h"

UGothicCameraModifierDirectionInput::UGothicCameraModifierDirectionInput() {
    this->MouseIdleThreshold = 10.00f;
    this->MousePercentageThreshold = 10.00f;
    this->StickPercentageThreshold = 10.00f;
    this->MaxYawChangeMouse = 4.00f;
    this->MaxPitchChangeMouse = 2.00f;
    this->MaxYawChangeStick = 2.00f;
    this->MaxPitchChangeStick = 1.00f;
    this->MoveTimeStick = 2.00f;
    this->MoveTimeMouse = 2.00f;
    this->EasyInExponent = 4.00f;
    this->CustomPriority = 10;
    this->LowestFramerate = 20;
    this->bModifierIsActive = true;
}


