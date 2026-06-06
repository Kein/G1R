#pragma once
#include "CoreMinimal.h"
#include "EStatEntryWidget_MasteryLevel.generated.h"

UENUM(BlueprintType)
enum class EStatEntryWidget_MasteryLevel : uint8 {
    Untrained,
    Trained,
    Master,
};

