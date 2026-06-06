#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "LocoBlendCurvesConfig.generated.h"

class UCurveFloat;
class UCurveVector;

UCLASS(Abstract, BlueprintType, Const, EditInlineNew)
class ULocoBlendCurvesConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_DiagonalScaleAmountCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_StrideBlendNWalk;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_StrideBlendNRun;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_StrideBlendCWalk;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_StrideBlendSwimmingWalk;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_StrideBlendSwimmingRun;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_StrideBlendDiveWalk;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_LandPredictionCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_LeanInAirCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveVector> m_YawOffsetFB;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveVector> m_YawOffsetLR;
    
public:
    ULocoBlendCurvesConfig();

};

