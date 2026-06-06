#include "WeatherSubsystemConfig.h"

UWeatherSubsystemConfig::UWeatherSubsystemConfig() {
    this->WindForceVariability = 0.00f;
    this->WindForceChangeProbability = 0.00f;
    this->MaxCharacterWetnessWhenSunny = 0.75f;
    this->MaxCharacterWetnessWhenRain = 1.00f;
    this->WetnessIncreaseFactor = 0.10f;
    this->WetnessDecreaseFactor = 0.05f;
    this->MinLightingSpawnTime = 5.00f;
    this->MaxLightingSpawnTime = 10.00f;
    this->InitialThunderBias = 7.00f;
}


