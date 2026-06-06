#pragma once
#include "CoreMinimal.h"
#include "ESlimeName.generated.h"

UENUM(BlueprintType)
enum class ESlimeName : uint8 {
    All,
    SlimeAgressive,
    SlimeAttack,
    SlimeDeath,
    SlimeHit,
    SlimeLower,
    SlimeRaised,
    SlimeStunned,
};

