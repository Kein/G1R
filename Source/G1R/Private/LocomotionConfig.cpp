#include "LocomotionConfig.h"

ULocomotionConfig::ULocomotionConfig() {
    this->m_ClimbingConfig = NULL;
    this->m_SpeedConfig = NULL;
    this->m_GroundConfig = NULL;
    this->m_WallWalkingConfig = NULL;
    this->m_LandingConfig = NULL;
    this->m_AirConfig = NULL;
    this->m_LookConfig = NULL;
    this->m_TransitionConfig = NULL;
    this->m_CollisionProfileName = TEXT("ALS_Character");
    this->m_GroundDetectionProfileName = TEXT("DetectGround_WalkSwimDive");
    this->m_SwimConfig = NULL;
    this->m_JumpConfig = NULL;
    this->m_WaterConfig = NULL;
    this->m_RagdollConfig = NULL;
    this->m_CurveConfig = NULL;
    this->m_flyConfig = NULL;
    this->m_MMConfig = NULL;
}


