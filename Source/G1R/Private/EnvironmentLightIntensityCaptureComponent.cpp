#include "EnvironmentLightIntensityCaptureComponent.h"
#include "Components/SceneCaptureComponent.h"

UEnvironmentLightIntensityCaptureComponent::UEnvironmentLightIntensityCaptureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PrimitiveRenderMode = ESceneCapturePrimitiveRenderMode::PRM_RenderScenePrimitives;
    this->bCaptureEveryFrame = false;
    this->bCaptureOnMovement = false;
    this->bAlwaysPersistRenderingState = true;
    this->LightRenderTarget = NULL;
    this->MipLevelToCache = 4;
}


