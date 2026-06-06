#pragma once
#include "CoreMinimal.h"
#include "EGothicLogVerbosity.generated.h"

UENUM(BlueprintType)
enum class EGothicLogVerbosity : uint8 {
    Log,
    Warning,
    Error,
    Count,
};

