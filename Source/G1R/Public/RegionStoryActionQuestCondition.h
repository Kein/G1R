#pragma once
#include "CoreMinimal.h"
#include "RegionStoryActionQuestCondition.generated.h"

USTRUCT(BlueprintType)
struct FRegionStoryActionQuestCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bSucceeded;
    
    UPROPERTY(EditAnywhere)
    bool bFailed;
    
    UPROPERTY(EditAnywhere)
    bool bRunning;
    
    UPROPERTY(EditAnywhere)
    bool bAvailable;
    
    G1R_API FRegionStoryActionQuestCondition();
};

