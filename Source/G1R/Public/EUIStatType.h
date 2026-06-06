#pragma once
#include "CoreMinimal.h"
#include "EUIStatType.generated.h"

UENUM(BlueprintType)
enum class EUIStatType : uint8 {
    Attribute,
    Protection,
    Fighting,
    SpecialSkills,
};

