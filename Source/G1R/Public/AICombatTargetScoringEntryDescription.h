#pragma once
#include "CoreMinimal.h"
#include "AICombatTargetScoringEntryDescription.generated.h"

USTRUCT(BlueprintType)
struct FAICombatTargetScoringEntryDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScoreChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bVetoUsage;
    
    G1R_API FAICombatTargetScoringEntryDescription();
};

