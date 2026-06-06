#pragma once
#include "CoreMinimal.h"
#include "ScreenshotData.generated.h"

USTRUCT(BlueprintType)
struct FScreenshotData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint8> Data;
    
    G1R_API FScreenshotData();
};

