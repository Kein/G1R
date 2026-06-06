#pragma once
#include "CoreMinimal.h"
#include "AIItemActionScoringEntryGroup.generated.h"

class UAIItemActionScoringEntry;

USTRUCT(BlueprintType)
struct FAIItemActionScoringEntryGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSet<UAIItemActionScoringEntry*> ItemScoringEntries;
    
    G1R_API FAIItemActionScoringEntryGroup();
};

