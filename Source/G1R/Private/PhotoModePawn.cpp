#include "PhotoModePawn.h"
#include "Camera/CameraComponent.h"
#include "Components/SphereComponent.h"
#include "PhotoModePawnMovementComponent.h"

APhotoModePawn::APhotoModePawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
    this->bUseControllerRotationPitch = true;
    this->bUseControllerRotationYaw = true;
    this->bUseControllerRotationRoll = true;
    this->m_Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("PhotoModeCameraComponent"));
    this->m_PawnMovement = CreateDefaultSubobject<UPhotoModePawnMovementComponent>(TEXT("PawnMovement"));
    this->m_PhotoModeManager = NULL;
    this->m_Camera->SetupAttachment(RootComponent);
}

void APhotoModePawn::TakePicture() {
}


