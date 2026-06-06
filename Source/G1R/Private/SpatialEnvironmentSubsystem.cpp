#include "SpatialEnvironmentSubsystem.h"

USpatialEnvironmentSubsystem::USpatialEnvironmentSubsystem() {
}

bool USpatialEnvironmentSubsystem::IsLocationRoofed(const FVector& Location) {
    return false;
}

bool USpatialEnvironmentSubsystem::IsActorRoofed(const AActor* Actor) {
    return false;
}

FGameplayTag USpatialEnvironmentSubsystem::GetAreaAtLocation(const FVector& Location) const {
    return FGameplayTag{};
}


