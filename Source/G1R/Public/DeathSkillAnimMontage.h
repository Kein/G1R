#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DeathSkillAnimMontage.generated.h"

USTRUCT(BlueprintType)
struct FDeathSkillAnimMontage {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameplayTag m_ItemType;
    
    G1R_API FDeathSkillAnimMontage();
};

