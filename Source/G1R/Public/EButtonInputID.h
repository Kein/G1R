#pragma once
#include "CoreMinimal.h"
#include "EButtonInputID.generated.h"

UENUM(BlueprintType)
enum class EButtonInputID : uint8 {
    None,
    Confirm,
    Cancel,
    SprintAction,
    JumpAction,
    StanceAction,
    WalkAction,
    AimAction,
    RollAction,
    Possess,
    RagdollAction,
    Interact,
    TargetEnemyAction,
    TargetPOIAction,
    Attack,
    Block,
    Reload,
    SelectNextTargetLeft,
    SelectNextTargetRight,
    Ride,
    IncreaseCameraDistance,
    DecreaseCameraDistance,
    KickAttack,
    QuickItem,
};

