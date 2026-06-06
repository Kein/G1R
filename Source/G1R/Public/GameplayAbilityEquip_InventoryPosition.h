#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilityEquip_InventoryPosition.generated.h"

USTRUCT()
struct G1R_API FGameplayAbilityEquip_InventoryPosition : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    FGameplayAbilityEquip_InventoryPosition();
};

