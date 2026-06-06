#include "GestureSet.h"

UGestureSet::UGestureSet() {
    this->PoseMatchingRandomness = 2.00f;
    this->MaxPoseDifference = 120.00f;
    this->WorstAcceptedPoseDifferenceMultiplier = 1.50f;
    this->AllowedDurationMinMultiplier = 0.50f;
    this->AllowedDurationMaxMultiplier = 3.00f;
    this->AdditionalAnimationStartTimeSecondsForPoseSearch.AddDefaulted(2);
    this->AnimSlotIdleAnimations = TEXT("FullBodyDialogIdles");
    this->AnimSlotGestureAnimations = TEXT("FullBodyDialogGestures");
}


