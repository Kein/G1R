#include "AudioEnvironmentRegionTrait.h"

UAudioEnvironmentRegionTrait::UAudioEnvironmentRegionTrait() {
    this->bRequireLocalPlayer = true;
    this->bHandleNonPlayerCharacters = false;
    this->Priority = 0.00f;
    this->MinWeatherIntensity = 0.00f;
    this->MaxWeatherIntensity = 0.00f;
    this->ThunderIntensity = 0.00f;
}

FGameplayTag UAudioEnvironmentRegionTrait::FindAudioEnvironmentTagAtLocation(const UObject* WorldContextObject, const FVector& Location) {
    return FGameplayTag{};
}


