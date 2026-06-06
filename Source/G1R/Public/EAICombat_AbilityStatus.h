#pragma once
#include "CoreMinimal.h"
#include "EAICombat_AbilityStatus.generated.h"

UENUM(BlueprintType)
enum class EAICombat_AbilityStatus : uint8 {
    None,
    Running,
    Finishing,
};

