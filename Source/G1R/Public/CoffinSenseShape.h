#pragma once
#include "CoreMinimal.h"
#include "CoffinSenseShape.generated.h"

USTRUCT(BlueprintType)
struct FCoffinSenseShape {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float SenseShapeModifier;
    
    UPROPERTY(EditAnywhere)
    float Length;
    
    UPROPERTY(EditAnywhere)
    float GoodVisionLength;
    
    UPROPERTY(EditAnywhere)
    float CloseHalfWidth;
    
    UPROPERTY(EditAnywhere)
    float MiddleHalfWidth;
    
    UPROPERTY(EditAnywhere)
    float FarHalfWidth;
    
    G1R_API FCoffinSenseShape();
};

