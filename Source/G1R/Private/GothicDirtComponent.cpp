#include "GothicDirtComponent.h"

UGothicDirtComponent::UGothicDirtComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_SkeletalMesh = NULL;
    this->m_MaterialsComponent = NULL;
    this->m_BloodComponent = NULL;
    this->m_WeatherComponent = NULL;
    this->m_AllowDebug = false;
    this->m_CurrentDirt = 0.00f;
    this->m_DirtParticlesTime = 1.50f;
    this->m_DirtFadeTimeSeconds = 3000.00f;
    this->m_DirtInWaterFadeInSeconds = 20.00f;
    this->Radius = 100.00f;
    this->m_DirtSeedScalar = NULL;
    this->m_WaterNiagaraComponent = NULL;
}

void UGothicDirtComponent::SetDirt(float Amount) {
}

void UGothicDirtComponent::RandomizePoints(bool Initialize) {
}

void UGothicDirtComponent::InitializeDirtHit(FVisualHitData& DirtHitData, const FVector& HitLocation, const float HitRadius, const int32 Index) const {
}

void UGothicDirtComponent::DisableWaterParticles() {
}


