#pragma once
#include "CoreMinimal.h"
#include "EInteractiveCameraTarget.generated.h"

UENUM(BlueprintType)
enum class EInteractiveCameraTarget : uint8 {
    Default,
    Yes,
    No,
    Teleport,
};

