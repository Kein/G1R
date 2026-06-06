#pragma once
#include "CoreMinimal.h"
#include "EInteractionInputKind.generated.h"

UENUM(BlueprintType)
enum class EInteractionInputKind : uint8 {
    None,
    Push,
    Pull,
    Left,
    Right,
    Up,
    Down,
    Interact,
};

