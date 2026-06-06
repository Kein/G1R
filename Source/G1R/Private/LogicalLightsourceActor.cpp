#include "LogicalLightsourceActor.h"
#include "LogicalLightsourceComponent.h"

ALogicalLightsourceActor::ALogicalLightsourceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<ULogicalLightsourceComponent>(TEXT("LogicalLightSource"));
    this->LogicalLightsourceComponent = (ULogicalLightsourceComponent*)RootComponent;
}


