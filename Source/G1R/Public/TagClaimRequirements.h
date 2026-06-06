#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InteractionSpotRequirements.h"
#include "TagClaimRequirements.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FTagClaimRequirements : public FInteractionSpotRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer MustHaveAnyOf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer MustNotHaveAnyOf;
    
    FTagClaimRequirements();
};

