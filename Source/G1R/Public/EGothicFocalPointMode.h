#pragma once
#include "CoreMinimal.h"
#include "EGothicFocalPointMode.generated.h"

UENUM(BlueprintType)
enum class EGothicFocalPointMode : uint8 {
    //FIXME
    None = 0,
    PointOfInterest = 1,
    LookAtWithController,
    NPCTargeting = 4,
    Snap = 8,
    StrafeWithTargetRotationYaw = 16,
};

