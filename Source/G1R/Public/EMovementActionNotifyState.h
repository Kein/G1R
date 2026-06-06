#pragma once
#include "CoreMinimal.h"
#include "EMovementActionNotifyState.generated.h"

UENUM(BlueprintType)
enum class EMovementActionNotifyState : uint8 {
    None,
    Begin,
    End,
    Count,
};

