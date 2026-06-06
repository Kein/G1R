#include "RegionVolume.h"
#include "Templates/SubclassOf.h"

ARegionVolume::ARegionVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->bSolidWhenSelected = true;
}

URegionTrait* ARegionVolume::FindTraitByClass(TSubclassOf<URegionTrait> TraitClass) const {
    return NULL;
}


