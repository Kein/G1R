#include "AmbientAnimInstance.h"

UAmbientAnimInstance::UAmbientAnimInstance() {
    this->m_Speed = 0.00f;
    this->m_MovementMode = MOVE_Walking;
    this->m_IsLanding = false;
    this->m_IsGrounded = true;
}


