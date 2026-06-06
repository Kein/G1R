#pragma once
#include "CoreMinimal.h"
#include "EGenericTaskResult.generated.h"

UENUM(BlueprintType)
enum class EGenericTaskResult : uint8 {
    Success,
    Cancelled,
    Failed,
};

