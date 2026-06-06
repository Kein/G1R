#include "ConversationCameraHeightAdjustSpeaker.h"

UConversationCameraHeightAdjustSpeaker::UConversationCameraHeightAdjustSpeaker() {
    this->bDoObstructionCheckListener = false;
    this->bDoObstructionCheckMiddle = false;
    this->MinPitchToListener = -35.00f;
    this->MaxPitchToListener = 35.00f;
    this->PitchToListenerMultiplier = 1.00f;
    this->PitchFocusPoint = TEXT("face_C_noseBridge");
}


