#pragma once
#include "CoreMinimal.h"
#include "EQuestSortOrder.generated.h"

UENUM(BlueprintType)
enum class EQuestSortOrder : uint8 {
    None,
    UnlockTime_NewestFirst,
    UnlockTime_NewestLast,
    StartTime_NewestFirst,
    StartTime_NewestLast,
    LastUpdateTime_NewestFirst,
    LastUpdateTime_NewestLast,
    Name,
};

