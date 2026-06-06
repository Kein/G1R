#pragma once
#include "CoreMinimal.h"
#include "EPerceptionActivationType.generated.h"

UENUM(BlueprintType)
enum EPerceptionActivationType {
    Disabled,
    Enabled,
    EnableOnThrow,
};

