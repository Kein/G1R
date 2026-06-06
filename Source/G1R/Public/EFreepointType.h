#pragma once
#include "CoreMinimal.h"
#include "EFreepointType.generated.h"

UENUM(BlueprintType)
enum class EFreepointType : uint8 {
    Normal,
    Patrol,
    Lineup,
};

