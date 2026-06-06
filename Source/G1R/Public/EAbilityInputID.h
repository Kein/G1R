#pragma once
#include "CoreMinimal.h"
#include "EAbilityInputID.generated.h"

UENUM(BlueprintType)
enum class EAbilityInputID : uint8 {
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
    Parry,
    ThrowQuickItem,
    SprintActionToggle,
    TopAttack,
    RightAttack,
    BottomAttack,
    LeftAttack,
    Dodge,
    WinchLeft,
    WinchRight,
    CheatLeave,
};

