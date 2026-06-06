#pragma once
#include "CoreMinimal.h"
#include "EStance.h"
#include "GothicBaseConfig.h"
#include "Templates/SubclassOf.h"
#include "LocomotionSpeedSettings_Stance.generated.h"

class ULocomotionSpeedSettings_WalkSpeed;

UCLASS(Abstract, Const, EditInlineNew)
class ULocomotionSpeedSettings_Stance : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<EStance, TSubclassOf<ULocomotionSpeedSettings_WalkSpeed>> m_Speeds;
    
public:
    ULocomotionSpeedSettings_Stance();

};

