#pragma once
#include "CoreMinimal.h"
#include "EDoorType.generated.h"

UENUM(BlueprintType)
enum class EDoorType : uint8 {
    Triggered,
    Interactable,
    TriggeredAndInteractable,
    Impact,
    JustMove,
    JustMoveTriggered,
};

