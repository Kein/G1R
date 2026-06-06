#pragma once
#include "CoreMinimal.h"
#include "EItemState.generated.h"

UENUM(BlueprintType)
enum class EItemState : uint8 {
    Draw,
    InHand,
    Shelve,
};

