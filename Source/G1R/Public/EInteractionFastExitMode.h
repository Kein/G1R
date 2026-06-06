#pragma once
#include "CoreMinimal.h"
#include "EInteractionFastExitMode.generated.h"

UENUM(BlueprintType)
enum class EInteractionFastExitMode : uint8 {
    PlayExitAnimation,
    PlayFastExitIfAvailableOtherwiseBlendOut,
    AlwaysBlendOut,
};

