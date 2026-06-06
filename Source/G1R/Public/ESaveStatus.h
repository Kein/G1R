#pragma once
#include "CoreMinimal.h"
#include "ESaveStatus.generated.h"

UENUM(BlueprintType)
enum class ESaveStatus : uint8 {
    None,
    WaitingGameSave,
    WaitingCreateProfile,
    SavingGame,
    LoadingGame,
    SavingOnlyProfile,
};

