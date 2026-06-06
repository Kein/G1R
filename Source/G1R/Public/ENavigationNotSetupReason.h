#pragma once
#include "CoreMinimal.h"
#include "ENavigationNotSetupReason.generated.h"

UENUM(BlueprintType)
enum ENavigationNotSetupReason {
    NavigationSystemMissing,
    NavigationDataMissing,
    NavBoundsVolumeMissing,
    GothicWorldActorMissing,
};

