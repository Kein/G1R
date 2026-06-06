#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "TraversalInfo.h"
#include "GameplayAbilityTargetData_ClimbTarget.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FGameplayAbilityTargetData_ClimbTarget : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTraversalInfo m_TraversalInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_CalculateEdgeHeightFromFeetLocation;
    
    FGameplayAbilityTargetData_ClimbTarget();
};

