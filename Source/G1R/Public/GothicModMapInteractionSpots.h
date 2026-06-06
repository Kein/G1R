#pragma once
#include "CoreMinimal.h"
#include "InteractionSpot.h"
#include "GothicModMapInteractionSpots.generated.h"

USTRUCT()
struct FGothicModMapInteractionSpots {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FInteractionSpot> SpotsToAdd;
    
    G1R_API FGothicModMapInteractionSpots();
};

