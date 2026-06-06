#include "GothicWeatherSettings.h"

UGothicWeatherSettings::UGothicWeatherSettings() {
    this->WeatherType = EWeather::Sunny;
    this->CloudCoverage = 0.00f;
    this->Rain = 0.00f;
    this->Snow = 0.00f;
    this->ThunderLightning = 0.00f;
    this->WindIntensity = 0.00f;
    this->GothicWindIntensity = 0.00f;
    this->Fog = 0.00f;
    this->BaseFogDensity = 0.00f;
    this->LightsVolumetricFogMultiplier = 0.00f;
    this->ExponentialFogStartingDistance = 0.00f;
    this->VolumetricFogStartingDistance = 0.00f;
    this->Dust = 0.00f;
    this->SunVolumetricScatteringIntensity = 0.00f;
    this->MaterialWetness = 0.00f;
    this->MaterialSnowCoverage = 0.00f;
    this->MaterialDustCoverage = 0.00f;
}


