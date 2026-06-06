#pragma once
#include "CoreMinimal.h"
#include "EWorldItemState.generated.h"

UENUM(BlueprintType)
enum class EWorldItemState : uint8 {
    Default,
    Waiting,
    Dropped,
    FinalDestination,
};

