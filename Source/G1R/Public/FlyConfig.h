#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "FlyConfig.generated.h"

UCLASS(Abstract, Const, EditInlineNew)
class UFlyConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_PlayStartFlyingAnimation;
    
    UPROPERTY(EditAnywhere)
    float m_StartFlyingAnimationImpulse;
    
    UPROPERTY(EditAnywhere)
    float m_LandHeight;
    
    UPROPERTY(EditAnywhere)
    float m_MaximumHeight;
    
    UPROPERTY(EditAnywhere)
    float m_MinimunHeight;
    
    UPROPERTY(EditAnywhere)
    float m_FallGravity;
    
    UPROPERTY(EditAnywhere)
    float m_UpSpeedWhenMin;
    
    UPROPERTY(EditAnywhere)
    float m_ReturnToHeightSpeed;
    
    UPROPERTY(EditAnywhere)
    bool m_UseOnlyControllerYaw;
    
    UPROPERTY(EditAnywhere)
    bool m_CanStrafe;
    
    UPROPERTY(EditAnywhere)
    bool m_FlyNotFall;
    
    UPROPERTY(EditAnywhere)
    bool m_FallFloating;
    
    UPROPERTY(EditAnywhere)
    bool m_LimitHeightFlying;
    
public:
    UFlyConfig();

};

