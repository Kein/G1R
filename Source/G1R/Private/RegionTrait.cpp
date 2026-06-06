#include "RegionTrait.h"

URegionTrait::URegionTrait() {
    this->bServerOnly = false;
    this->bRequireLocalPlayer = false;
    this->bRequireNetworkAuthority = true;
    this->bHandlePlayerCharacters = true;
    this->bHandleNonPlayerCharacters = true;
}

float URegionTrait::GetDistanceToCollisionFromPoint(const FVector& Point) const {
    return 0.0f;
}






