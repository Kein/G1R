#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "LocomotionSpeedModifierSettings_InWater.generated.h"

UCLASS(Abstract, Const, EditInlineNew)
class ULocomotionSpeedModifierSettings_InWater : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    float m_SpeedModifier;
    
    UPROPERTY()
    float m_InWaterDepthThreshold;
    
public:
    ULocomotionSpeedModifierSettings_InWater();

};

