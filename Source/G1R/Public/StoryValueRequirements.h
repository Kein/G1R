#pragma once
#include "CoreMinimal.h"
#include "EInteractionSpotComparisonOp.h"
#include "InteractionSpotRequirements.h"
#include "Templates/SubclassOf.h"
#include "StoryValueRequirements.generated.h"

class UGameStory;

USTRUCT(BlueprintType)
struct G1R_API FStoryValueRequirements : public FInteractionSpotRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGameStory> StoryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PropertyPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInteractionSpotComparisonOp ComparisonOp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CompareAgainst;
    
    FStoryValueRequirements();
};

