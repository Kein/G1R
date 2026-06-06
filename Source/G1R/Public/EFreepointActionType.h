#pragma once
#include "CoreMinimal.h"
#include "EFreepointActionType.generated.h"

UENUM(BlueprintType)
enum class EFreepointActionType : uint8 {
    None,
    Goto,
    Interact,
    Count,
};

