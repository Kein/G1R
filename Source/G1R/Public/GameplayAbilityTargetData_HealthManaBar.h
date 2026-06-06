#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilityTargetData_HealthManaBar.generated.h"

USTRUCT(BlueprintType)
struct FGameplayAbilityTargetData_HealthManaBar : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Heal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Mana;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Duration;
    
    G1R_API FGameplayAbilityTargetData_HealthManaBar();
};

