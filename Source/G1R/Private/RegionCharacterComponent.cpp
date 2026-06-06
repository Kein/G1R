#include "RegionCharacterComponent.h"
#include "Templates/SubclassOf.h"

URegionCharacterComponent::URegionCharacterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void URegionCharacterComponent::UpdateTraits() {
}

int32 URegionCharacterComponent::RemoveTraits(const TArray<URegionTrait*>& TraitsToAdd) {
    return 0;
}

bool URegionCharacterComponent::HasTraitOfClass(TSubclassOf<URegionTrait> TraitClass) const {
    return false;
}

bool URegionCharacterComponent::HasPotentiallyApplicableTraitOfClassAtLocation(const FVector& QueryLocation, TSubclassOf<URegionTrait> TraitClass) const {
    return false;
}

FBox URegionCharacterComponent::GetTraitBoundsOfClass(TSubclassOf<URegionTrait> TraitClass) const {
    return FBox{};
}

int32 URegionCharacterComponent::AddNewPotentialTraits(const TArray<URegionTrait*>& TraitsToAdd) {
    return 0;
}


