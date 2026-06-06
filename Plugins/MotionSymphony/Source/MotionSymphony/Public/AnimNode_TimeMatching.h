#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNode_SequencePlayer.h"
#include "AnimNode_TimeMatching.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FAnimNode_TimeMatching : public FAnimNode_SequencePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DesiredTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MarkerTime;
    
    FAnimNode_TimeMatching();
};

