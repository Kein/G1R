#pragma once
#include "CoreMinimal.h"
#include "EPuzzleEvent.generated.h"

UENUM(BlueprintType)
enum class EPuzzleEvent : uint8 {
    DeathEvent,
    OpenDoor,
    Teleport,
};

