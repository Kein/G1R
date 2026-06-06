#pragma once
#include "CoreMinimal.h"
#include "EOwnershipRelationFlags.generated.h"

UENUM(BlueprintType)
enum class EOwnershipRelationFlags : uint8 {
    None,
    GuildSpecific,
    GuildViaArea,
    PersonalSpecific = 4,
    PersonalViaArea = 8,
    OtherGuild = 16,
    OtherPersonal = 32,
    Personal = 12,
    Guild = 3,
    Myself = 15,
    Other = 48,
    AnyOwnership = 255,
};

