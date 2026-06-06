#include "GothicUltraDynamicWeather.h"

AGothicUltraDynamicWeather::AGothicUltraDynamicWeather(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClearCacheAtDistanceDifference = 1000.00f;
    this->AllowWeatherChange = true;
}

void AGothicUltraDynamicWeather::LerpBetweenWeatherStates(const UGothicWeatherSettings* A, const UGothicWeatherSettings* B, float Alpha, UGothicWeatherSettings* Target, bool SetMaterialEffects, bool UseBiasForMaterialState) const {
}

void AGothicUltraDynamicWeather::LerpBetweenInteriorStates(const UGothicWeatherSettings* A, const UGothicWeatherSettings* B, float Alpha, UGothicWeatherSettings* Target) {
}

bool AGothicUltraDynamicWeather::IsSameOverrideVolumeActor(TScriptInterface<IGothicUltraDynamicOverrideVolume> A, TScriptInterface<IGothicUltraDynamicOverrideVolume> B) const {
    return false;
}

TArray<TScriptInterface<IGothicUltraDynamicOverrideVolume>> AGothicUltraDynamicWeather::GetVolumesFromCache(FOverrideVolumeCache Cache) const {
    return TArray<TScriptInterface<IGothicUltraDynamicOverrideVolume>>();
}


FOverrideVolumeCache AGothicUltraDynamicWeather::GetOverrideVolumeCacheAtLocation(FVector Location) {
    return FOverrideVolumeCache{};
}

TScriptInterface<IGothicUltraDynamicOverrideFog> AGothicUltraDynamicWeather::GetOverrideFogsFromCache(FFogVolumeSettings Cache) const {
    return NULL;
}


FOverrideFogCache AGothicUltraDynamicWeather::GetOverrideFogCacheAtLocation(FVector Location) {
    return FOverrideFogCache{};
}


void AGothicUltraDynamicWeather::EvaluatePositionRequest(FVector Location) {
}

void AGothicUltraDynamicWeather::CopyWeatherSettings(const UGothicWeatherSettings* From, UGothicWeatherSettings* To, bool SetMaterialEffects) const {
}

void AGothicUltraDynamicWeather::CopyFogSettingsToWeatherSettings(const UGothicWeatherFogSettings* From, UGothicWeatherSettings* To) const {
}

float AGothicUltraDynamicWeather::CompareWeatherStates(const UGothicWeatherSettings* A, const UGothicWeatherSettings* B) const {
    return 0.0f;
}


