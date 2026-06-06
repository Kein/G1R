#pragma once
#include "CoreMinimal.h"
#include "AIItemActionScoringEntryDescription.generated.h"

USTRUCT(BlueprintType)
struct FAIItemActionScoringEntryDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScoreChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bVetoUsage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMultiplier;
    
    G1R_API FAIItemActionScoringEntryDescription();
};

