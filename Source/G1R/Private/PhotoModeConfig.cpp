#include "PhotoModeConfig.h"

UPhotoModeConfig::UPhotoModeConfig() {
    this->m_MaxPlayerDistance = 100.00f;
    this->m_MaxCameraSpeed = 100.00f;
}

void UPhotoModeConfig::AddSticker(FName StickerAsset) {
}

void UPhotoModeConfig::AddParticle(const FString& ParticleName, FName ParticleAsset) {
}

void UPhotoModeConfig::AddLut(const FString& LutName, FName LutAsset) {
}


