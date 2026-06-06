#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNode_SequencePlayer.h"
#include "EDistanceMatchType.h"
#include "AnimNode_MSDistanceMatching.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FAnimNode_MSDistanceMatching : public FAnimNode_SequencePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DesiredDistance;
    
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
    
private:
    UPROPERTY(Transient)
    UAnimSequenceBase* LastAnimSequenceUsed;
    
public:
    FAnimNode_MSDistanceMatching();
};

