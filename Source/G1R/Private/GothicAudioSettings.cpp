#include "GothicAudioSettings.h"

UGothicAudioSettings::UGothicAudioSettings() {
    this->MainMenuMap.AddDefaulted(1);
    this->VolumeFadeDuration = 1.00f;
    this->CombatRadius = 5000.00f;
    this->MusicIntensityMaxHealth = 500.00f;
    this->LocalizationBuses.AddDefaulted(2);
    this->PossessedIntensityParameter = TEXT("VOPossessedIntensity");
    this->PossessedIntensityValue2D = 1.00f;
    this->PossessedIntensityValue3D = 0.20f;
    this->SoundOcclusionParameter = TEXT("occlusionFactor");
    this->SoundOcclusionInstantParameter = TEXT("occlusionFactorInstant");
    this->AudioEnvironmentMuteParameter = TEXT("audioEnvironmentMute");
    this->DefaultOcclusionValue = 0.30f;
}

UGothicAudioSettings* UGothicAudioSettings::GetAudioSettings() {
    return NULL;
}


