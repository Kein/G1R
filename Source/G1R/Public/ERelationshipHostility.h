#pragma once
#include "CoreMinimal.h"
#include "ERelationshipHostility.generated.h"

UENUM(BlueprintType)
enum class ERelationshipHostility : uint8 {
    Unknown,
    None,
    Help,
    FleeOnSight,
    ReportToGuardsWithinReason,
    ReportToGuardsOnSight,
    DemandPaymentForCrimes,
    AttackWithinReason,
    ProtectFromNonFriendly,
    ProtectFromCreature,
    ProtectFromDifferentGuild,
    ProtectFromDifferentGuild_Jurisdiction,
    ProtectFromDifferentGuild_Premium,
    AttackOnSight,
    AttackWithFistsOnSight,
    AttackWithFistsWithinReason,
    TrainingFight,
    Predator,
    Prey,
    LowThreatMagicTarget,
    FollowOnSight,
    CloseFriend,
    MagicFear,
    Loot,
    Execute,
    Count,
};

