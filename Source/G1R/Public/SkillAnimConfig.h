#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EWeaponSkill.h"
#include "Templates/SubclassOf.h"
#include "SkillAnimConfig.generated.h"

class UItemAnimConfig;

USTRUCT(BlueprintType)
struct FSkillAnimConfig {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameplayTag ItemType;
    
    UPROPERTY()
    TMap<EWeaponSkill, TSubclassOf<UItemAnimConfig>> AnimConfigs;
    
    G1R_API FSkillAnimConfig();
};

