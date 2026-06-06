#include "AlkimiaLightweightDecorationActor.h"
#include "AlkimiaLightweightDecorationComponent.h"

AAlkimiaLightweightDecorationActor::AAlkimiaLightweightDecorationActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAlkimiaLightweightDecorationComponent>(TEXT("AlkimiaLightweightDecoration"));
    this->LightweightDecorationComponent = (UAlkimiaLightweightDecorationComponent*)RootComponent;
}


