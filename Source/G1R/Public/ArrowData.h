#pragma once
#include "CoreMinimal.h"
#include "ArrowData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FArrowData {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* mArrow;
    
    G1R_API FArrowData();
};

