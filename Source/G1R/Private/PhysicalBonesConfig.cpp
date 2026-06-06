#include "PhysicalBonesConfig.h"

UPhysicalBonesConfig::UPhysicalBonesConfig() {
    this->m_SimulationLOD = 2;
    this->m_usePhysicalAnimation = false;
}

bool UPhysicalBonesConfig::UsesPhysicalAnimation() const {
    return false;
}

uint8 UPhysicalBonesConfig::GetSimulationLOD() const {
    return 0;
}

FPhysicalAnimationData UPhysicalBonesConfig::GetPhysicalAnimationData() const {
    return FPhysicalAnimationData{};
}

TArray<FName> UPhysicalBonesConfig::GetBones() const {
    return TArray<FName>();
}


