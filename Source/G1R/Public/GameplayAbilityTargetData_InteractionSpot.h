#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "InteractionSpotHandle.h"
#include "GameplayAbilityTargetData_InteractionSpot.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FGameplayAbilityTargetData_InteractionSpot : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInteractionSpotHandle SpotHandle;
    
    FGameplayAbilityTargetData_InteractionSpot();
};

