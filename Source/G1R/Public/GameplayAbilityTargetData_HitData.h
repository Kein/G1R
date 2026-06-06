#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityTargetData_HitData.generated.h"

class UWeaponDefinition;

USTRUCT(BlueprintType)
struct G1R_API FGameplayAbilityTargetData_HitData : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Impact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanBeParried;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanBeDeflected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag ImpactDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag SourceAttackDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UWeaponDefinition> WeaponUsed;
    
    FGameplayAbilityTargetData_HitData();
};

