#include "PhysicsDefinition.h"

UPhysicsDefinition::UPhysicsDefinition() {
    this->m_ShouldBounce = false;
    this->m_Bounciness = 0.30f;
    this->m_Friction = 0.30f;
    this->m_BounceVelocityStop = 0.30f;
    this->m_ThrowSpeed = 1000.00f;
    this->m_ThrowDistance = 500.00f;
}


