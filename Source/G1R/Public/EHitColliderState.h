#pragma once
#include "CoreMinimal.h"
#include "EHitColliderState.generated.h"

UENUM(BlueprintType)
enum class EHitColliderState : uint8 {
    None,
    Damage,
};

