#pragma once
#include "CoreMinimal.h"
#include "EDistanceMatchBasis.h"
#include "EDistanceMatchType.h"
#include "DistanceMatchIdentifier.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FDistanceMatchIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY()
    EDistanceMatchType MatchType;
    
    UPROPERTY()
    EDistanceMatchBasis MatchBasis;
    
    FDistanceMatchIdentifier();
};
FORCEINLINE uint32 GetTypeHash(const FDistanceMatchIdentifier) { return 0; }

