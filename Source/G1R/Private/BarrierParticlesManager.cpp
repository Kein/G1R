#include "BarrierParticlesManager.h"

ABarrierParticlesManager::ABarrierParticlesManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ParticleActor = NULL;
    this->m_ActivationDistance = 3000.00f;
    this->m_ChecksPerFrame = 0;
    this->m_SphereTraceRadius = 0.00f;
    this->m_UpDisplacement = 0.00f;
}

TArray<FParticlePoint> ABarrierParticlesManager::GetLandscapePoints() {
    return TArray<FParticlePoint>();
}


