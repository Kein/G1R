#pragma once
#include "CoreMinimal.h"
#include "GothicModMapInteractionSpots.h"
#include "GothicModMapLevelInstances.h"
#include "GothicModMapWorldPoints.h"
#include "GothicModMapModifications.generated.h"

USTRUCT(BlueprintType)
struct FGothicModMapModifications {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGothicModMapLevelInstances LevelInstances;
    
    UPROPERTY(EditAnywhere)
    FGothicModMapInteractionSpots InteractionSpots;
    
    UPROPERTY(EditAnywhere)
    FGothicModMapWorldPoints WorldPoints;
    
    G1R_API FGothicModMapModifications();
};

