#include "OutlineSubsystemConfig.h"

UOutlineSubsystemConfig::UOutlineSubsystemConfig() {
    this->OutlineClosestAlpha = 0.05f;
    this->OutlineFarthestAlpha = 0.10f;
    this->OutlineClosestThickness = 0.50f;
    this->OutlineFarthestThickness = 1.00f;
    this->OutlineClosestDistance = 1.00f;
    this->OutlineFarthestDistance = 5000.00f;
    this->OutlineFadeTime = 0.30f;
}

void UOutlineSubsystemConfig::UpdateSimulationSystem(UWorld* World) const {
}

void UOutlineSubsystemConfig::UpdateColorTable(UWorld* World) {
}

void UOutlineSubsystemConfig::SetEffectState(UWorld* World, bool State) const {
}

float UOutlineSubsystemConfig::GetOutlineFadeTime() const {
    return 0.0f;
}

bool UOutlineSubsystemConfig::GetEffectState(UWorld* World) const {
    return false;
}


