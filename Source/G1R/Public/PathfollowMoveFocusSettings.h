#pragma once
#include "CoreMinimal.h"
#include "PathfollowMoveFocusSettings.generated.h"

USTRUCT(BlueprintType)
struct FPathfollowMoveFocusSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FocalPointDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FocalPointHeightMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FocalPointHigherRankedCharacterHeightMultiplier;
    
    G1R_API FPathfollowMoveFocusSettings();
};

