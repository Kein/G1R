#include "PhotoModeManager.h"

UPhotoModeManager::UPhotoModeManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_PhotoModeConfig = NULL;
    this->m_PreviousOwner = NULL;
    this->m_PlayerController = NULL;
    this->m_PreviousCameraModifier = NULL;
    this->m_PhotoModePawn = NULL;
    this->m_PhotoModeCameraModifier = NULL;
    this->m_Emitter = NULL;
    this->m_FullScreenTest = NULL;
    this->m_WorldDefinition = NULL;
}

void UPhotoModeManager::OnScreenshotCaptured(int32 inSizeX, int32 inSizeY, const TArray<FColor>& rawPixels) {
}

void UPhotoModeManager::OnDrawHud(AHUD* HUD, UCanvas* Canvas) {
}


