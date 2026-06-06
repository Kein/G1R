#include "RoadActor.h"
#include "SplineNavAreaModifierComponent.h"

ARoadActor::ARoadActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineNavAreaModifierComponent>(TEXT("SplineComponent"));
    this->SplineComponent = (USplineNavAreaModifierComponent*)RootComponent;
}


