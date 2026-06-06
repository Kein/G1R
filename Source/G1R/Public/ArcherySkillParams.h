#pragma once
#include "CoreMinimal.h"
#include "ArcherySkillParams.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FArcherySkillParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DrawAnimationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ReleaseAndNotchArrowOntoBowAnimationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DeviationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DeviationMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaximumResistanceTimeWhileDrawing;
    
    FArcherySkillParams();
};

