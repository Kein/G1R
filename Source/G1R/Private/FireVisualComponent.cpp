#include "FireVisualComponent.h"

UFireVisualComponent::UFireVisualComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_InteractiveComponent = NULL;
    this->m_StartActive = false;
    this->m_CanSkipInitialSwitchOn = true;
    this->m_StopWithRain = false;
    this->m_AttenuatedWithRain = false;
    this->m_HoursForUnLite = 0.00f;
    this->m_StopWithSpell = false;
    this->m_TimeRange = NULL;
    this->m_SaveState = false;
    this->m_InteractiveSubsystem = NULL;
}

void UFireVisualComponent::StartLit(bool check, bool isPlayer) {
}

void UFireVisualComponent::SpellEndLit() {
}

void UFireVisualComponent::MoreFlame() {
}

void UFireVisualComponent::LessFlame() {
}

bool UFireVisualComponent::IsFireOn() const {
    return false;
}

void UFireVisualComponent::ImpactFire(FVector Direction, bool isFireAttack) {
}

void UFireVisualComponent::HandleWeatherTransition(EWeatherEvent PreviousWeather, EWeatherEvent NewWeather, float Time) {
}

void UFireVisualComponent::HandleWeatherChanged(EWeather PreviousWeather, EWeather NewWeather) {
}

void UFireVisualComponent::EndLitTimer() {
}

void UFireVisualComponent::EndLit(bool check, bool isPlayer) {
}

void UFireVisualComponent::CheckTimeRangeBase() {
}


