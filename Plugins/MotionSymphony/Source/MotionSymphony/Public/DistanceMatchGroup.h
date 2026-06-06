#pragma once
#include "CoreMinimal.h"
#include "DistanceMatchSection.h"
#include "DistanceMatchGroup.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FDistanceMatchGroup {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FDistanceMatchSection> DistanceMatchSections;
    
    FDistanceMatchGroup();
};

