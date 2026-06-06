#include "BarrierEffectHandler.h"

UBarrierEffectHandler::UBarrierEffectHandler() {
    this->Amount = 0;
    this->RandomFactor = 0.00f;
    this->RecalculateDistanceSquaredBias = 0.00f;
    this->Character = NULL;
    this->m_FeetRayParticleSystem = NULL;
}

void UBarrierEffectHandler::UpdateRays() {
}


