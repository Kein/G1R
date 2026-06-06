#pragma once
#include "CoreMinimal.h"
#include "EAlkimiaLightweightStaticMeshComponentVersion.generated.h"

UENUM(BlueprintType)
enum class EAlkimiaLightweightStaticMeshComponentVersion : uint8 {
    Initial,
    AddedBodyInstance,
    AddedGuid,
    AddedHash,
    AddedUseDefaultCollision,
    Latest = AddedUseDefaultCollision,
};

