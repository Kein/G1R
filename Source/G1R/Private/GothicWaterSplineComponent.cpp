#include "GothicWaterSplineComponent.h"
#include "GothicWaterSplineMetadata.h"

UGothicWaterSplineComponent::UGothicWaterSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_WaterSplineMetadata = CreateDefaultSubobject<UGothicWaterSplineMetadata>(TEXT("GothicWaterSplineMetadata"));
}


