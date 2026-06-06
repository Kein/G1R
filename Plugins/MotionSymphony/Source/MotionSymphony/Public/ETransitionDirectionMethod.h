#pragma once
#include "CoreMinimal.h"
#include "ETransitionDirectionMethod.generated.h"

UENUM(BlueprintType)
enum class ETransitionDirectionMethod : uint8 {
    Manual,
    RootMotion,
};

