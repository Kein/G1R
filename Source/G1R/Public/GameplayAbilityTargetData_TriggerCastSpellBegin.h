#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "EAbilityInputID.h"
#include "GameplayAbilityTargetData_TriggerCastSpellBegin.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FGameplayAbilityTargetData_TriggerCastSpellBegin : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAbilityInputID m_InputID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_InputPressed;
    
    FGameplayAbilityTargetData_TriggerCastSpellBegin();
};

