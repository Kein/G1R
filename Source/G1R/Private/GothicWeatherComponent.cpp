#include "GothicWeatherComponent.h"

UGothicWeatherComponent::UGothicWeatherComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_Character = NULL;
}

void UGothicWeatherComponent::SetWetness(float NewWetness) {
}

void UGothicWeatherComponent::SetDesiredMinWetness(float NewMinWetness) {
}

void UGothicWeatherComponent::ReduceWetness(float DeltaTime, const UWeatherSubsystemConfig* WeatherConfig) {
}

void UGothicWeatherComponent::IncreaseWetness(float DeltaTime, const UWeatherSubsystemConfig* WeatherConfig) {
}

float UGothicWeatherComponent::GetWetness() const {
    return 0.0f;
}

float UGothicWeatherComponent::GetWaterHeightWorldPosition() const {
    return 0.0f;
}

float UGothicWeatherComponent::GetWaterHeight() const {
    return 0.0f;
}

bool UGothicWeatherComponent::GetIsInWater() const {
    return false;
}

float UGothicWeatherComponent::GetCreatureHeight() const {
    return 0.0f;
}


