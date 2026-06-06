#pragma once
#include "CoreMinimal.h"
#include "AimingAssistance.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FAimingAssistance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_enableAimingAssistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxTurnAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DetectionRadius;
    
    FAimingAssistance();
};

