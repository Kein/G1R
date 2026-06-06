#include "GothicDeveloperSettings.h"

UGothicDeveloperSettings::UGothicDeveloperSettings() {
    this->ShowMouseInPIEIfGamepadUsed = false;
    this->DontFlushPressedKeysOnFocusChangeByGamepad = true;
    this->NoNetTimeOut = false;
    this->NetUpdateFrequencyForSwitchesOutOfProcessingRange = 1000.00f;
}

void UGothicDeveloperSettings::WriteToINI() {
}

void UGothicDeveloperSettings::Reset() {
}


