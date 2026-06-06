#pragma once
#include "CoreMinimal.h"
#include "EItemType.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8 {
    None,
    Torch,
    HandsTied,
    Rifle,
    Pistol1,
    Pistol2,
    Bow,
    Binoculars,
    Box,
    Barrel,
    Count,
};

