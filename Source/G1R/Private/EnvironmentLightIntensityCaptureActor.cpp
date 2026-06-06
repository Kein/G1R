#include "EnvironmentLightIntensityCaptureActor.h"
#include "EnvironmentLightIntensityCaptureComponent.h"

AEnvironmentLightIntensityCaptureActor::AEnvironmentLightIntensityCaptureActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UEnvironmentLightIntensityCaptureComponent>(TEXT("EnvironmentLightIntensityCaptureComponent"));
    this->EnvironmentLightIntensityComponent = (UEnvironmentLightIntensityCaptureComponent*)RootComponent;
}

UEnvironmentLightIntensityCaptureComponent* AEnvironmentLightIntensityCaptureActor::GetCaptureComponent() const {
    return NULL;
}


