#pragma once
#include "CoreMinimal.h"
#include "EResourceLoadPriority.generated.h"

UENUM(BlueprintType)
enum class EResourceLoadPriority : uint8 {
    Normal,
    GeneralConfig,
    Player,
};

