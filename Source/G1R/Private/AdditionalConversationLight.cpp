#include "AdditionalConversationLight.h"
#include "Components/RectLightComponent.h"

AAdditionalConversationLight::AAdditionalConversationLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<URectLightComponent>(TEXT("RectLight"));
    this->bIsForSpeaker = true;
    this->RectLightComponent = (URectLightComponent*)RootComponent;
}


