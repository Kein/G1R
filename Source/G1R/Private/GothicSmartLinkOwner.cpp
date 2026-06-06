#include "GothicSmartLinkOwner.h"
#include "Components/SceneComponent.h"

AGothicSmartLinkOwner::AGothicSmartLinkOwner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SpriteComponent = NULL;
}

void AGothicSmartLinkOwner::ToggleLinksEnabled() {
}


