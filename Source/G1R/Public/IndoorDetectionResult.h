#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IndoorDetectionResult.generated.h"

USTRUCT(BlueprintType)
struct FIndoorDetectionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TotalScore;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsIndoors;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IsIndoorsConfidence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector FreenessNegativeAxis;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector FreenessPositiveAxis;
    
    G1R_API FIndoorDetectionResult();
};

