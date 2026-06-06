#pragma once
#include "CoreMinimal.h"
#include "EMovementState.h"
#include "GothicBaseConfig.h"
#include "Templates/SubclassOf.h"
#include "LocomotionSpeedSettings.generated.h"

class ULocomotionSpeedModifierSettings_InWater;
class ULocomotionSpeedSettings_Stance;

UCLASS(Abstract, Const, EditInlineNew)
class ULocomotionSpeedSettings : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<EMovementState, TSubclassOf<ULocomotionSpeedSettings_Stance>> m_Speeds;
    
    UPROPERTY()
    TMap<EMovementState, TSubclassOf<ULocomotionSpeedModifierSettings_InWater>> m_WaterSpeedModifiers;
    
public:
    ULocomotionSpeedSettings();

};

