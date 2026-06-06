#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "AirConfig.generated.h"

UCLASS(Abstract, BlueprintType, Const, EditInlineNew)
class UAirConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_InAirRotationSpeedLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MaxFallingSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MinFallingSpeed;
    
public:
    UAirConfig();

};

