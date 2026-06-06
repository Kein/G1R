#include "SwimConfig.h"

USwimConfig::USwimConfig() {
    this->m_SwimToDiveHeight = 200.00f;
    this->m_DiveToSwimHeight = 180.00f;
    this->m_WalkToSwimHeight = 100.00f;
    this->m_SwimToWalkHeight = 50.00f;
    this->m_CrouchableWaterHeight = 50.00f;
    this->m_CapsuleSwimmingHalfHeight = 45.00f;
    this->m_WaterWalkingHeight = 100.00f;
    this->m_MaxPotentialDiveDepth = 2000.00f;
    this->m_WaterWalkingEffect = NULL;
    this->m_SwimmingEffect = NULL;
    this->m_DivingEffect = NULL;
    this->m_bEnableWaterEntryForce = true;
    this->m_WaterEntryVelocityThreshold = 100.00f;
    this->m_WaterEntryImpactDuration = 0.30f;
    this->m_WaterImpactFrictionMultiplier = 2.50f;
    this->m_WaterImpactDragMultiplier = 3.00f;
    this->m_WaterGlideFrictionReduction = 0.60f;
    this->m_WaterEntryGlideDuration = 0.70f;
}


