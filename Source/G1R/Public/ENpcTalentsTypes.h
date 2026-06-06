#pragma once
#include "CoreMinimal.h"
#include "ENpcTalentsTypes.generated.h"

UENUM(BlueprintType)
namespace ENpcTalentsTypes {
    enum Type {
        NPC_TALENT_1H,
        NPC_TALENT_2H,
        NPC_TALENT_BOW,
        NPC_TALENT_CROSSBOW,
        NPC_TALENT_PICKLOCK,
        NPC_TALENT_PICKPOCKET,
        NPC_TALENT_SNEAK,
        NPC_TALENT_MAGE,
        Max,
    };
}

