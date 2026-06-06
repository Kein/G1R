#pragma once
#include "CoreMinimal.h"
#include "EQuestKind.generated.h"

UENUM(BlueprintType)
enum class EQuestKind : uint8 {
    None,
    Main,
    Side,
    Subobjective,
};

