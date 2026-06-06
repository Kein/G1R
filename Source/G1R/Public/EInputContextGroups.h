#pragma once
#include "CoreMinimal.h"
#include "EInputContextGroups.generated.h"

UENUM(BlueprintType)
enum class EInputContextGroups : uint8 {
    Default,
    Combat,
    Menu,
};

