#pragma once
#include "CoreMinimal.h"
#include "EDeflectMethod.generated.h"

UENUM(BlueprintType)
enum class EDeflectMethod : uint8 {
    WorldUp,
    BladeDirection,
    AnimationDirection,
    HitNormals,
};

