#include "PostProcessingRegionTrait.h"

UPostProcessingRegionTrait::UPostProcessingRegionTrait() {
    this->Priority = 0.00f;
    this->BlendRadius = 100.00f;
    this->BlendWeight = 1.00f;
    this->bDisableWhenOverlappingOtherPostProcessVolumes = false;
    this->bDisableOverlappingPostProcessingRegions = false;
}


