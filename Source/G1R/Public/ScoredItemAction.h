#pragma once
#include "CoreMinimal.h"
#include "AIItemActionScoringEntryDescription.h"
#include "ItemActionHandler.h"
#include "ScoredItemAction.generated.h"

USTRUCT(BlueprintType)
struct FScoredItemAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FItemActionHandler ItemActionHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAIItemActionScoringEntryDescription> EntryDescriptions;
    
    G1R_API FScoredItemAction();
};

