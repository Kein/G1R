#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "RollConfig.generated.h"

UCLASS(Abstract, Const, EditInlineNew)
class URollConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_MaxFallingRollHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxFallingFallHeight;
    
    UPROPERTY(EditAnywhere)
    float m_RollPlayRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BreakFallPlayRate;
    
public:
    URollConfig();

};

