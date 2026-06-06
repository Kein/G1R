#pragma once
#include "CoreMinimal.h"
#include "EWaynetRelevantFailReason.generated.h"

UENUM(BlueprintType)
enum EWaynetRelevantFailReason {
    NoEnabledEntryPoints,
    HasNoWaynetNodeEntry,
    ShouldHaveAtLeast2Nodes,
    BelongsToAnIsland,
};

