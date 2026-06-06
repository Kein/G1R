#pragma once
#include "CoreMinimal.h"
#include "GestureAnimationEvaluation.generated.h"

class UAnimSequence;

USTRUCT()
struct FGestureAnimationEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAnimSequence* AnimSequence;
    
    G1R_API FGestureAnimationEvaluation();
};

