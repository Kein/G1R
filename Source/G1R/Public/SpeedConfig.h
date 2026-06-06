#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "Templates/SubclassOf.h"
#include "SpeedConfig.generated.h"

class ULocomotionSpeedSettings;

UCLASS(Abstract, BlueprintType, Const, EditInlineNew)
class USpeedConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<ULocomotionSpeedSettings> m_VelocityDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<ULocomotionSpeedSettings> m_LookingDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<ULocomotionSpeedSettings> m_Aiming;
    
    USpeedConfig();

};

