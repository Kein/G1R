#include "WeatherSubsystem.h"

UWeatherSubsystem::UWeatherSubsystem() {
    this->WeatherConfig = NULL;
    this->LightingMagnetsController = NULL;
}

void UWeatherSubsystem::UpdateWeatherSimulation(bool IsInstant) {
}

void UWeatherSubsystem::Unregister(AWeatherLightingMagnet* LightingMagnet) {
}

void UWeatherSubsystem::UnfreezeSkyTime() {
}

void UWeatherSubsystem::SetPlayerWeatherImmediate(const EWeather NewWeather) {
}

void UWeatherSubsystem::SetPlayerWeather(const EWeather NewWeather) {
}

void UWeatherSubsystem::SetLuminosity(int32 NewLuminosity) {
}

void UWeatherSubsystem::SetAllowScreenDroplets(bool Enable) {
}

void UWeatherSubsystem::Register(AWeatherLightingMagnet* LightingMagnet) {
}

void UWeatherSubsystem::OnScreenRainDropletsApplied() {
}

bool UWeatherSubsystem::IsTimeFrozen() const {
    return false;
}

bool UWeatherSubsystem::IsRaining(int32 Level) const {
    return false;
}

void UWeatherSubsystem::InvalidateCachedShadows() {
}

float UWeatherSubsystem::GetRainIntensity() const {
    return 0.0f;
}

EWeather UWeatherSubsystem::GetPlayerWeather() const {
    return EWeather::Sunny;
}

EBiome UWeatherSubsystem::GetPlayerBiome() const {
    return EBiome::TemperateDecidiousForest;
}

int32 UWeatherSubsystem::GetLuminosity() const {
    return 0;
}

UWeatherSubsystem* UWeatherSubsystem::GetGameWeather(UObject* WorldContextObject) {
    return NULL;
}

UGothicWeatherSettings* UWeatherSubsystem::GetCurrentWeatherSettings() {
    return NULL;
}

FInGameTime UWeatherSubsystem::GetCurrentSkyDayTime() const {
    return FInGameTime{};
}

bool UWeatherSubsystem::GetAllowScreenDroplets() const {
    return false;
}

void UWeatherSubsystem::FreezeSkyTime(const FInGameTime& SkyTime) {
}

void UWeatherSubsystem::EnsureSubsystemIsInitialized() {
}

void UWeatherSubsystem::DrawWindGUI() {
}

void UWeatherSubsystem::DrawWeatherDebugGUI() {
}

void UWeatherSubsystem::DrawProbabilityGUI() {
}

void UWeatherSubsystem::CallWeatherTransition(const EWeatherEvent OldWeather, const EWeatherEvent NewWeather, float Time) const {
}

void UWeatherSubsystem::CallWeatherChange(const EWeather OldWeather, const EWeather NewWeather) const {
}


