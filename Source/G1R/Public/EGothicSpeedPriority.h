#pragma once
#include "CoreMinimal.h"
#include "EGothicSpeedPriority.generated.h"

UENUM(BlueprintType)
enum class EGothicSpeedPriority : uint8 {
    Default,
    Locomotion,
    MovementSpeed,
    NavigationTask,
    CharacterAIState,
    Aim,
    Combat,
    AlignInteraction,
    Interaction,
    NavLink,
    MovementOverrides,
    MAX_PRIORITY,
};

