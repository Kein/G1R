#pragma once
#include "CoreMinimal.h"
#include "EFreepointUsage.generated.h"

UENUM(BlueprintType)
enum class EFreepointUsage : uint8 {
    None,
    Use,
    Reserve,
    ReadyToUse,
};

