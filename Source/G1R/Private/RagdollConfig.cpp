#include "RagdollConfig.h"

URagdollConfig::URagdollConfig() {
    this->m_GetUpPlayRate = 1.00f;
    this->m_RagdollStartBlendOutTime = 0.20f;
    this->m_StopBonesMovementOnStart = false;
    this->m_GravityZFactorUnderwater = 0.01f;
    this->m_Ragdoll_Maxtime_Active = 7.00f;
    this->m_Ragdoll_Minvelocity_Active = 10.00f;
    this->m_Ragdoll_Seconds_At_Minvelocity = 3.00f;
    this->m_WaterResistance = 0.05f;
    this->m_BuySimStrength = 1.00f;
    this->m_FallingRagdollAbility = NULL;
}


