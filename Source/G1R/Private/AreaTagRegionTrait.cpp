#include "AreaTagRegionTrait.h"

UAreaTagRegionTrait::UAreaTagRegionTrait() {
    this->Priority = 100;
}

FGameplayTag UAreaTagRegionTrait::FindAreaTagAtLocation(const UObject* WorldContextObject, const FVector& Location) {
    return FGameplayTag{};
}

UAreaTagRegionTrait* UAreaTagRegionTrait::FindAreaAtLocation(const UObject* WorldContextObject, const FVector& Location) {
    return NULL;
}

FGameplayTagContainer UAreaTagRegionTrait::FindAllAreaTagsAtLocation(const UObject* WorldContextObject, const FVector& Location) {
    return FGameplayTagContainer{};
}

TArray<UAreaTagRegionTrait*> UAreaTagRegionTrait::FindAllAreasAtLocation(const UObject* WorldContextObject, const FVector& Location) {
    return TArray<UAreaTagRegionTrait*>();
}


