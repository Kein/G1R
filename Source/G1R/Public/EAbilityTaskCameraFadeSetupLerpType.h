#pragma once
#include "CoreMinimal.h"
#include "EAbilityTaskCameraFadeSetupLerpType.generated.h"

UENUM(BlueprintType)
enum class EAbilityTaskCameraFadeSetupLerpType : uint8 {
    Lerp,
    InterpEaseInOut,
};

