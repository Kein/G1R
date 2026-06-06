#pragma once
#include "CoreMinimal.h"
#include "ETeleportCharacterState.generated.h"

UENUM(BlueprintType)
enum class ETeleportCharacterState : uint8 {
    Idle,
    EnableStreamingSource,
    DisableStreamingSource,
    Start,
    Stop,
};

