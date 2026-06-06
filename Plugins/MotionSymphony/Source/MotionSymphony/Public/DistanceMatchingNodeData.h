#pragma once
#include "CoreMinimal.h"
#include "EDistanceMatchType.h"
#include "DistanceMatchingNodeData.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FDistanceMatchingNodeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName DistanceCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bNegateDistanceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDistanceMatchType MovementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DestinationReachedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SmoothRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SmoothTimeThreshold;
    
    FDistanceMatchingNodeData();
};

