#include "CinematicsTesting.h"

ACinematicsTesting::ACinematicsTesting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsEnabled = false;
    this->SafeDistancePercentage = 0.00f;
    this->DistanceFromCameraToShotCenter = 0.00f;
    this->FadeRadius = 0.00f;
}


