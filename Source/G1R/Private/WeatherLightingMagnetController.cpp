#include "WeatherLightingMagnetController.h"

UWeatherLightingMagnetController::UWeatherLightingMagnetController() {
    this->MinSpawnTime = 5.00f;
    this->MaxSpawnTime = 10.00f;
    this->ThunderBias = 7.00f;
}

void UWeatherLightingMagnetController::Unregister(AWeatherLightingMagnet* LightingMagnet) {
}

void UWeatherLightingMagnetController::Tick(float DeltaTime, const UGothicWeatherSettings* WeatherSettings) {
}

void UWeatherLightingMagnetController::SpawnLight(ESelectionType NextSelectionType) {
}

void UWeatherLightingMagnetController::SetNextLightingMagnet(ESelectionType SelectionType) {
}

void UWeatherLightingMagnetController::Register(AWeatherLightingMagnet* LightingMagnet) {
}

AWeatherLightingMagnet* UWeatherLightingMagnetController::GetThunderActor(int32 DesiredIndex) {
    return NULL;
}


