#pragma once
#include "CoreMinimal.h"
#include "ERelationship.generated.h"

UENUM(BlueprintType)
enum class ERelationship : uint8 {
    Unknown,
    Enemy,
    Hostile,
    Angry,
    Neutral,
    Friend,
    Count,
};

