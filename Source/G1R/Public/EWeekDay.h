#pragma once
#include "CoreMinimal.h"
#include "EWeekDay.generated.h"

UENUM(BlueprintType)
enum class EWeekDay : uint8 {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday,
    Count,
};

