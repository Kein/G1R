#include "GothicCameraSpringArmComponent.h"

UGothicCameraSpringArmComponent::UGothicCameraSpringArmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUsePawnControlRotation = true;
    this->bEnableCameraLag = true;
    this->bEnableCameraRotationLag = true;
    this->m_BaseTargetArmLength = 300.00f;
    this->CameraRotationLagSpeedPitch = 5.00f;
}


