#include "ClimbingConfig.h"
#include "Templates/SubclassOf.h"

UClimbingConfig::UClimbingConfig() {
    this->m_CheckCapsuleStartTraceOffset = -35.00f;
    this->m_CheckSphereEndTraceOffset = -15.00f;
    this->m_limitClimbingAngle = 0.70f;
    this->m_MaxClimbableUnderWaterDepth = -95.00f;
    this->m_UnderWaterMidClimbHeight = 95.00f;
    this->m_MaxFallSpeedForFallingLow = -500.00f;
}

FClimbing_SearchEdgeSettings UClimbingConfig::GetWallSearchEdgeSettings() const {
    return FClimbing_SearchEdgeSettings{};
}

float UClimbingConfig::GetUnderWaterMidClimbHeight() const {
    return 0.0f;
}

FClimbing_SearchEdgeSettings UClimbingConfig::GetSwimmingSearchEdgeSettings() const {
    return FClimbing_SearchEdgeSettings{};
}

float UClimbingConfig::GetMaxClimbableUnderWaterDepth() const {
    return 0.0f;
}

FClimbing_SearchEdgeSettings UClimbingConfig::GetGroundSearchEdgeSettings() const {
    return FClimbing_SearchEdgeSettings{};
}

FJumpDown_SearchEdgeSettings UClimbingConfig::GetGroundJumpDownSearchSettings() const {
    return FJumpDown_SearchEdgeSettings{};
}

float UClimbingConfig::GetClimbingLimitAngle() const {
    return 0.0f;
}

float UClimbingConfig::GetCheckSphereEndTraceOffset() const {
    return 0.0f;
}

float UClimbingConfig::GetCheckCapsuleStartTraceOffset() const {
    return 0.0f;
}

FClimbing_SearchEdgeSettings UClimbingConfig::GetAirSearchEdgeSettings() const {
    return FClimbing_SearchEdgeSettings{};
}

void UClimbingConfig::AddClimbingAction(EClimbType Type, TSubclassOf<UClimbingAnimConfig> Action) const {
}


