#pragma once
#include "CoreMinimal.h"
#include "EWalkSpeed.generated.h"

UENUM(BlueprintType)
enum class EWalkSpeed : uint8 {
    Walking,
    Running,
    Sprinting,
    Count,
};

