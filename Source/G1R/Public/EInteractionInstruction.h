#pragma once
#include "CoreMinimal.h"
#include "EInteractionInstruction.generated.h"

UENUM(BlueprintType)
enum class EInteractionInstruction : uint8 {
    Traverse,
    Open,
    Close,
    Wait,
    AlreadyInteracting,
    Error,
    End,
};

