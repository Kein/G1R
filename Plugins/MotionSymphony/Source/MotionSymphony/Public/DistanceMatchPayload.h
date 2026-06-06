#pragma once
#include "CoreMinimal.h"
#include "EDistanceMatchBasis.h"
#include "EDistanceMatchType.h"
#include "DistanceMatchPayload.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FDistanceMatchPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDistanceMatchType MatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDistanceMatchBasis MatchBasis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MarkerDistance;
    
    FDistanceMatchPayload();
};

