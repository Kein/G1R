#include "WaterConfig.h"

UWaterConfig::UWaterConfig() {
    this->m_Buoyancy = 2.00f;
    this->m_RagdollUnderWaterHeight = 100.00f;
    this->m_SurfaceWaterMinHeight = 0.10f;
    this->m_MidWaterMinHeight = 70.00f;
    this->m_DeepWaterMinHeight = 130.00f;
    this->m_IsWaterVelocityInfluencingWalkingSpeed = false;
    this->m_WaterVelocityInfluencesWalkingSpeedMinWaterDepth = 70.00f;
    this->m_WaterVelocityInfluencesWalkingSpeedMinWaterSpeed = 100.00f;
    this->m_SurfaceWaterEffect = NULL;
    this->m_MidWaterEffect = NULL;
    this->m_DeepWaterEffect = NULL;
}


