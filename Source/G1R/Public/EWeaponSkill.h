#pragma once
#include "CoreMinimal.h"
#include "EWeaponSkill.generated.h"

UENUM(BlueprintType)
enum class EWeaponSkill : uint8 {
    None,
    Untrained,
    Trained,
    Master,
};

