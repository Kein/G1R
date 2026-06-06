#pragma once
#include "CoreMinimal.h"
#include "InGameTime.h"
#include "InteractionSpotRequirements.h"
#include "TimeSinceLastUseRequirements.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FTimeSinceLastUseRequirements : public FInteractionSpotRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInGameTime TimeRequiredToPass;
    
    FTimeSinceLastUseRequirements();
};

