#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "EWalkSpeed.h"
#include "GameplayAbilityTargetData_WalkSpeed.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FGameplayAbilityTargetData_WalkSpeed : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EWalkSpeed m_WalkSpeed;
    
    FGameplayAbilityTargetData_WalkSpeed();
};

