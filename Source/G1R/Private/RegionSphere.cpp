#include "RegionSphere.h"
#include "Components/SphereComponent.h"

ARegionSphere::ARegionSphere(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RegionShape"));
    this->RegionShapeComponent = (UShapeComponent*)RootComponent;
}


