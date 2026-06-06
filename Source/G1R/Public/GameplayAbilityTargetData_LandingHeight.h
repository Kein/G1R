#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilityTargetData_LandingHeight.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FGameplayAbilityTargetData_LandingHeight : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Height;
    
    FGameplayAbilityTargetData_LandingHeight();
};

