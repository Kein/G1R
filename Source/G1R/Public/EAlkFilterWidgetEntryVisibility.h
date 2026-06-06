#pragma once
#include "CoreMinimal.h"
#include "EAlkFilterWidgetEntryVisibility.generated.h"

UENUM(BlueprintType)
enum class EAlkFilterWidgetEntryVisibility : uint8 {
    InitiallyHidden,
    InitiallyVisible,
    AlwaysVisible,
};

