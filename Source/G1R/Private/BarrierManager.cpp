#include "BarrierManager.h"

ABarrierManager::ABarrierManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BarrierLocalRadius = 49.75f;
    this->m_SafeZoneDistance = 15.00f;
    this->m_WarningZoneDistance = 10.00f;
    this->m_RedZoneDistance = 5.00f;
    this->m_Barrier = NULL;
    this->m_BarrierCollider = NULL;
    this->CloseDistanceBarrier = NULL;
    this->m_PostProcess = NULL;
    this->m_BarrierRayRandomFactor = 20.00f;
    this->m_GroundRayRandomFactor = 40.00f;
    this->m_MaxHeight = 400.00f;
    this->m_GroundRaysAmount = 2;
    this->m_BarrierRaysAmount = 3;
    this->m_NewRayBarrierDist = 1500.00f;
    this->m_NewRayGroundDist = 200.00f;
    this->m_MinBarrierRayDistance = 2000.00f;
    this->m_LightIntensity = 0.00f;
    this->m_LightVolumetricScattering = 0.00f;
    this->m_PostProcessFactor = 0.00f;
    this->m_LightFunctionMaterial = NULL;
    this->m_OrangeZoneEffect = NULL;
    this->m_RedZoneEffect = NULL;
    this->m_BarrierRayParticleSystem = NULL;
    this->m_FeetRayParticleSystem = NULL;
}

void ABarrierManager::SetActiveState(bool State) const {
}

FGameplayEffectSpecHandle ABarrierManager::CreateSpecFromGameplayEffect(const UGameplayEffect* GameplayEffect, const AGothicCharacter* Character) {
    return FGameplayEffectSpecHandle{};
}


