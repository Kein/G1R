#include "BFGLightweightSceneCaptureComponent.h"

UBFGLightweightSceneCaptureComponent::UBFGLightweightSceneCaptureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_OverrideMaterial = NULL;
    this->m_NaniteFallbackEvictionTime = 1.00f;
    this->m_MaterialUsage.AddDefaulted(2);
}


