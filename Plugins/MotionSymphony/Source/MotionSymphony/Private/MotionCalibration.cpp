#include "MotionCalibration.h"

UMotionCalibration::UMotionCalibration() {
    this->MotionMatchConfig = NULL;
    this->bOverrideDefaults = false;
    this->QualityVsResponsivenessRatio = 0.50f;
    this->Weight_Momentum = 1.00f;
    this->Weight_AngularMomentum = 1.00f;
    this->JointPosition_DefaultWeight = 1.00f;
    this->JointVelocity_DefaultWeight = 1.00f;
    this->TrajectoryPosition_DefaultWeight = 5.00f;
    this->TrajectoryFacing_DefaultWeight = 3.00f;
}

void UMotionCalibration::SetTrajectoryWeightSet(int32 Index, float Weight_Pos, float Weight_Facing) {
}

void UMotionCalibration::SetBoneWeightSet(FName BoneName, float Weight_Pos, float Weight_Vel) {
}

void UMotionCalibration::OnGenerateTrajectoryWeightings_Implementation() {
}

void UMotionCalibration::OnGeneratePoseWeightings_Implementation() {
}

void UMotionCalibration::OnGenerateJointWeightings_Implementation() {
}


