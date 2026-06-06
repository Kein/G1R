#pragma once
#include "CoreMinimal.h"
#include "EActivityActions.generated.h"

UENUM(BlueprintType)
enum class EActivityActions : uint8 {
    ActivateActivity,
    StartActivity,
    EndActivity,
    ActivateChapter,
    StartChapter,
    EndChapter,
};

