#pragma once
#include "CoreMinimal.h"
#include "ENavLinkState.generated.h"

UENUM(BlueprintType)
enum class ENavLinkState : uint8 {
    NotSetUp,
    Open,
    Closed,
};

