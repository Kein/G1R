#pragma once
#include "CoreMinimal.h"
#include "EMultiStageState.generated.h"

UENUM(BlueprintType)
enum class EMultiStageState : uint8 {
    None,
    WrongStation,
    CorrectStation,
};

