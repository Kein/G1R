#pragma once
#include "CoreMinimal.h"
#include "ECraftingState.generated.h"

UENUM(BlueprintType)
enum class ECraftingState : uint8 {
    None,
    EnterStation,
    SelectingRecipe,
    WaitForCraft,
    CraftingItem,
    GoToRecipe,
    ExitCraft,
    ExitIntermediate,
    ExitNothing,
};

