#include "GothicTrajectoryErrorWarping_MotionSimphony.h"

UGothicTrajectoryErrorWarping_MotionSimphony::UGothicTrajectoryErrorWarping_MotionSimphony(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WarpRateStrafe = 0.00f;
    this->WarpRateLocomotion = 0.00f;
}

void UGothicTrajectoryErrorWarping_MotionSimphony::ApplyTrajectoryErrorWarpingLocal(const float DeltaTime, const float PlaybackSpeed) {
}


