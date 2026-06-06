#pragma once
#include "CoreMinimal.h"
#include "GothicModWorldPointMod.h"
#include "ItemSpawnConfig.h"
#include "WorldPointConfig.h"
#include "GothicModMapWorldPoints.generated.h"

USTRUCT()
struct FGothicModMapWorldPoints {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FWorldPointConfig> PointsToAdd;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FItemSpawnConfig> ItemSpawners;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FGothicModWorldPointMod> EventsToModify;
    
    G1R_API FGothicModMapWorldPoints();
};

