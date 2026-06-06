#include "PathfollowModifyAvoidVelocitySettings.h"

FPathfollowModifyAvoidVelocitySettings::FPathfollowModifyAvoidVelocitySettings() {
    this->bUseBasicSpeedModification = false;
    this->MediumRangeVelocityMultiplier = 0.00f;
    this->ShortRangeVelocityMultiplier = 0.00f;
    this->bUseFastSpeedModification = false;
    this->FastSpeedVelocityMultiplier = 0.00f;
    this->bUseSlowdownNearCurves = false;
    this->SlowDownNearCurvesSpeed = 0.00f;
    this->SlowDownNearCurvesForecastTime = 0.00f;
    this->SteerSpeedAgentRadiusRangeMultiplier = 0.00f;
}

