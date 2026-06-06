#pragma once
#include "CoreMinimal.h"
#include "ECustomKeyBinding.generated.h"

UENUM(BlueprintType)
enum class ECustomKeyBinding : uint8 {
    QA_0,
    QA_1,
    QA_2,
    QA_3,
    QA_4,
    QA_5,
    QA_6,
    QA_7,
    QA_8,
    QA_END,
    Q_MELEE,
    Q_RANGE,
    OTHER = 255,
};

