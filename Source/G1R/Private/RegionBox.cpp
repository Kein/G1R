#include "RegionBox.h"
#include "Components/BoxComponent.h"

ARegionBox::ARegionBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("RegionShape"));
    this->RegionShapeComponent = (UShapeComponent*)RootComponent;
}


