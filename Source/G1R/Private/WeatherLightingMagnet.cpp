#include "WeatherLightingMagnet.h"
#include "Components/SceneComponent.h"

AWeatherLightingMagnet::AWeatherLightingMagnet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SpriteComponent = NULL;
}




