#include "JumpConfig.h"

UJumpConfig::UJumpConfig() {
    this->m_JumpZVelocity = 200.00f;
    this->m_JumpGravityScale = 1.50f;
    this->m_FallGravityScale = 2.00f;
    this->m_ShouldUseJumpPrediction = false;
}


