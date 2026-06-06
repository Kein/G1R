#pragma once
#include "CoreMinimal.h"
#include "AnimNode_PoseMatchBase.h"
#include "DistanceMatchingNodeData.h"
#include "EDistanceMatchingUseCase.h"
#include "AnimNode_MultiPoseMatching.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FAnimNode_MultiPoseMatching : public FAnimNode_PoseMatchBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UAnimSequence*> Animations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDistanceMatchingUseCase DistanceMatchingUseCase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DesiredDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDistanceMatchingNodeData DistanceMatchData;
    
    FAnimNode_MultiPoseMatching();
};

