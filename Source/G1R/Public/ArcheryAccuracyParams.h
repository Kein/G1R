#pragma once
#include "CoreMinimal.h"
#include "ArcherySkillParams.h"
#include "ArcheryAccuracyParams.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FArcheryAccuracyParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxBowStringStretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MinBowStringStretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SpeedWhenMinStretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SpeedWhenMaxStretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FArcherySkillParams m_UntrainedSkillPerformance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FArcherySkillParams m_TrainedSkillPerformance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FArcherySkillParams m_MasterSkillPerformance;
    
    FArcheryAccuracyParams();
};

