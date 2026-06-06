#pragma once
#include "CoreMinimal.h"
#include "EGothicLockPieceType.generated.h"

UENUM(BlueprintType)
enum class EGothicLockPieceType : uint8 {
    None,
    Plate,
    Bar,
    Latch,
    Count,
};

