#pragma once
#include "CoreMinimal.h"
#include "ELockPickUIHint.generated.h"

UENUM(BlueprintType)
enum class ELockPickUIHint : uint8 {
    None,
    Chest,
    Door,
};

