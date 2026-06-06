#pragma once
#include "CoreMinimal.h"
#include "EWalkSpeed.h"
#include "GothicBaseConfig.h"
#include "LocomotionSpeedSettings_WalkSpeed.generated.h"

UCLASS(Abstract, Const, EditInlineNew)
class ULocomotionSpeedSettings_WalkSpeed : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<EWalkSpeed, float> m_Speeds;
    
public:
    ULocomotionSpeedSettings_WalkSpeed();

};

