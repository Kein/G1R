#pragma once
#include "CoreMinimal.h"
#include "ClimbingMontages.generated.h"

class UAnimMontage;
class UCurveVector;

USTRUCT(BlueprintType)
struct FClimbingMontages {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_LeftMontage;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_RightMontage;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UCurveVector> m_PositionCorrectionCurve;
    
    G1R_API FClimbingMontages();
};

