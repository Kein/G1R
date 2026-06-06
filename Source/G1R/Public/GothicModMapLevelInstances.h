#pragma once
#include "CoreMinimal.h"
#include "GothicModMapLevelInstances.generated.h"

class UWorld;

USTRUCT()
struct FGothicModMapLevelInstances {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UWorld>> LevelsToLoad;
    
    G1R_API FGothicModMapLevelInstances();
};

