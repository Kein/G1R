#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EWeaponSkill.h"
#include "SkillAnimMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSkillAnimMontage {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameplayTag m_ItemType;
    
    UPROPERTY()
    TMap<EWeaponSkill, TSoftObjectPtr<UAnimMontage>> m_AnimConfigs;
    
    G1R_API FSkillAnimMontage();
};

