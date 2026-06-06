#pragma once
#include "CoreMinimal.h"
#include "EReceiverEventActor.generated.h"

UENUM(BlueprintType)
enum class EReceiverEventActor : uint8 {
    INSTIGATOR,
    TARGET,
};

