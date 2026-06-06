#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "LocomotionCurveConfig.generated.h"

class UCurveFloat;

UCLASS(Abstract, BlueprintType, Const, EditInlineNew)
class ULocomotionCurveConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_BuoyancyCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_AirFrictionCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_GroundFrictionCurveStanding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_GroundFrictionCurveStandingStrafe;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_GroundFrictionCurveCrouching;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_DecelerationCurveStanding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_DecelerationCurveStandingStrafe;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_DecelerationCurveCrouching;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_DecelerationCurveSwimming;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_DecelerationCurveFlying;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_AccelerationCurveStanding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_AccelerationCurveStandingStrafe;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_AccelerationCurveCrouching;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_AccelerationCurveSwimming;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_AccelerationCurveFlying;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_RotationRateCurveStandingVelocityDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_RotationRateCurveStandingLookingDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_RotationRateCurveCrouching;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_RotationRateCurveSwimming;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> m_RotationRateCurveFlying;
    
public:
    ULocomotionCurveConfig();

};

