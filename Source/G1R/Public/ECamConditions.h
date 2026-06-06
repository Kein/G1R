#pragma once
#include "CoreMinimal.h"
#include "ECamConditions.generated.h"

UENUM(BlueprintType)
enum class ECamConditions : uint8 {
    None,
    Menu,
    Idle,
    Running,
    Sprinting,
    Crouch,
    RangedWeapon,
    RangedWeaponCrouch,
    Aim,
    AimCrouch,
    AimRanged,
    AimCrouchRanged,
    AimRangedCrossbow,
    AimCrouchRangedCrossbow,
    Swim,
    Dive,
    Combat,
    CombatOneTwo,
    CombatThreePlus,
    CombatFly,
    CombatBig,
    AimSpell,
    AimCrouchSpell,
    Spell,
    WallClimbing,
    WallWalking,
    MountingOrUnmounting,
    FrontArea,
    Cinematic,
    SpellCombatTargeting,
};

