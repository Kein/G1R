#pragma once
#include "CoreMinimal.h"
#include "SpawnLocationQueryParams.generated.h"

USTRUCT(BlueprintType)
struct FSpawnLocationQueryParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_InitialRangeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RangeStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxAngleStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MinAngleStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AngleStepOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxSlope;
    
    G1R_API FSpawnLocationQueryParams();
};

