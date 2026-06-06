#pragma once
#include "CoreMinimal.h"
#include "EPlayerControllerState.generated.h"

UENUM(BlueprintType)
enum class EPlayerControllerState : uint8 {
    MainGame,
    UI,
};

