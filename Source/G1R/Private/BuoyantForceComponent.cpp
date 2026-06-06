#include "BuoyantForceComponent.h"

UBuoyantForceComponent::UBuoyantForceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_MeshDensity = 600.00f;
    this->m_FluidDensity = 1025.00f;
    this->m_FluidLinearDamping = 1.00f;
    this->m_FluidAngularDamping = 1.00f;
    this->m_ClampMaxVelocity = false;
    this->m_MaxUnderwaterVelocity = 1000.00f;
    this->m_TestPointRadius = 10.00f;
    this->m_PointsUnderWater = 0;
    this->m_ApplyForceToBones = false;
    this->m_SnapToSurfaceIfNoPhysics = false;
    this->m_WaterVelocityMultiplier = 1.00f;
    this->m_DeactivationDistance = 5000.00f;
    this->m_ReactivationDistanceThreshold = 200.00f;
    this->m_SignificanceManager = NULL;
}


