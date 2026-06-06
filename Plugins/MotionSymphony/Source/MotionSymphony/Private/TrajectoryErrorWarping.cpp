#include "TrajectoryErrorWarping.h"

UTrajectoryErrorWarping::UTrajectoryErrorWarping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WarpMode = ETrajectoryErrorWarpMode::Standard;
    this->WarpRate = 60.00f;
    this->MinTrajectoryLength = 0.75f;
}

float UTrajectoryErrorWarping::CalculateTrajectoryErrorWarping(const float DeltaTime, const float PlaybackSpeed) const {
    return 0.0f;
}

void UTrajectoryErrorWarping::ApplyTrajectoryErrorWarping(const float DeltaTime, const float PlaybackSpeed) {
}


