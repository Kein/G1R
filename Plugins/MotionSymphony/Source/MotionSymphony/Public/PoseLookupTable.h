#pragma once
#include "CoreMinimal.h"
#include "PoseCandidateSet.h"
#include "PoseLookupTable.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FPoseLookupTable {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPoseCandidateSet> CandidateSets;
    
    FPoseLookupTable();
};

