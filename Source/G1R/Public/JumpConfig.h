#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "JumpConfig.generated.h"

UCLASS(Abstract, Const, EditInlineNew)
class UJumpConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_JumpZVelocity;
    
    UPROPERTY(EditAnywhere)
    float m_JumpGravityScale;
    
    UPROPERTY(EditAnywhere)
    float m_FallGravityScale;
    
    UPROPERTY(EditAnywhere)
    bool m_ShouldUseJumpPrediction;
    
public:
    UJumpConfig();

};

