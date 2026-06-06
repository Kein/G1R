#include "SimulatedCharacterLightContainer.h"
#include "Components/SceneComponent.h"

ASimulatedCharacterLightContainer::ASimulatedCharacterLightContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}


