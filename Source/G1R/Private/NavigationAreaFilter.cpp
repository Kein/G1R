#include "NavigationAreaFilter.h"
#include "Templates/SubclassOf.h"

UNavigationAreaFilter::UNavigationAreaFilter() {
}

void UNavigationAreaFilter::SetTravelCostWater(float travelCost) {
}

void UNavigationAreaFilter::SetTravelCostOnNavArea(TSubclassOf<UNavArea> NavArea, float travelCost) {
}

void UNavigationAreaFilter::SetEnteringCostWater(float enteringCost) {
}

void UNavigationAreaFilter::SetEnteringCostOnNavArea(TSubclassOf<UNavArea> NavArea, float enteringCost) {
}

void UNavigationAreaFilter::OverrideMaxSearchNodes(float maxSearchNode) {
}

void UNavigationAreaFilter::OverrideDefaultNavAreaCost(float Cost) {
}

void UNavigationAreaFilter::IncludeNavArea(TSubclassOf<UNavArea> NavArea) {
}

void UNavigationAreaFilter::ExcludeWaterArea() {
}

void UNavigationAreaFilter::ExcludeShallowWaterArea() {
}

void UNavigationAreaFilter::ExcludeNormalWaterArea() {
}

void UNavigationAreaFilter::ExcludeNavLinks() {
}

void UNavigationAreaFilter::ExcludeNavArea(TSubclassOf<UNavArea> NavArea) {
}

void UNavigationAreaFilter::ExcludeDeepWaterArea() {
}


