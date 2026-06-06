#pragma once
#include "CoreMinimal.h"
#include "InteractionSpot.h"
#include "InteractionSpotDefinitionList.generated.h"

USTRUCT()
struct G1R_API FInteractionSpotDefinitionList {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FInteractionSpot> InteractionSpots;
    
    FInteractionSpotDefinitionList();
};

