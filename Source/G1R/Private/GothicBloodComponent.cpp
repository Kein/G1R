#include "GothicBloodComponent.h"

UGothicBloodComponent::UGothicBloodComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkeletalMesh = NULL;
    this->MaterialsComponent = NULL;
    this->WeatherComponent = NULL;
    this->HitBloodAmount = 1.00f;
    this->CustomRadius = 50.00f;
    this->BloodFadeTimeSeconds = 600.00f;
    this->BloodInWaterFadeInSeconds = 20.00f;
    this->BloodParticlesTime = 1.50f;
    this->FliesStartMinFactor = 0.70f;
    this->MaxFlies = 15;
    this->DeathDecalSize = 70.00f;
    this->DeathDecalDurationInSeconds = 800.00f;
    this->m_DecalMID = NULL;
    this->m_DeathDecal = NULL;
    this->m_BloodHitVector = NULL;
    this->m_HasBlood = true;
    this->m_CanDecompose = true;
    this->WaterNiagaraComponent = NULL;
    this->FliesNiagaraComponent = NULL;
}

void UGothicBloodComponent::StartBloodPoolOnDeathAnimation() {
}

void UGothicBloodComponent::SpawnBloodPoolOnDeath(bool IsJustSpawned) {
}

void UGothicBloodComponent::SetVerticalBloodHeight(float Height, FLinearColor BloodColor) {
}

void UGothicBloodComponent::SetDecomposition(FInGameTime DecompositionStart) {
}

void UGothicBloodComponent::SetBloodColor(const FLinearColor& Color) {
}

void UGothicBloodComponent::RegisterHit(const FVector& hitWorldLocation, float Radius, float normalizedRelativeDamage) {
}

void UGothicBloodComponent::RegisterCustomHit() {
}

void UGothicBloodComponent::ReduceVerticalBloodHeight(float Height) {
}

void UGothicBloodComponent::OnResurrect() {
}

void UGothicBloodComponent::OnDeadStateChanged(const FGameplayTag Tag, int32 NewCount) {
}

void UGothicBloodComponent::InitializeBloodHit(FVisualHitData& BloodHitData, const FVector& HitLocation, const float HitRadius, const int32 Index) const {
}

void UGothicBloodComponent::HandleDecomposition(bool IsJustSpawned, FInGameTime DecompositionStart) {
}

void UGothicBloodComponent::HandleDeathState(bool IsJustSpawned) {
}

UMaterialInterface* UGothicBloodComponent::GetBloodDecal() const {
    return NULL;
}

FLinearColor UGothicBloodComponent::GetBloodColor() const {
    return FLinearColor{};
}

void UGothicBloodComponent::DisableWaterParticles() {
}

void UGothicBloodComponent::ClearBlood() {
}


