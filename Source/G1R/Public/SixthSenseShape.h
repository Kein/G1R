#pragma once
#include "CoreMinimal.h"
#include "SixthSenseShape.generated.h"

USTRUCT(BlueprintType)
struct FSixthSenseShape {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float SenseShapeModifier;
    
    UPROPERTY(EditAnywhere)
    float VerticalOffset;
    
    UPROPERTY(EditAnywhere)
    float HalfLength;
    
    UPROPERTY(EditAnywhere)
    float HalfWidth;
    
    UPROPERTY(EditAnywhere)
    float BlindSpotHalfAngle;
    
    G1R_API FSixthSenseShape();
};

