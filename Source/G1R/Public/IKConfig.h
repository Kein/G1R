#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "IKConfig.generated.h"

UCLASS(Abstract, Const, EditInlineNew)
class G1R_API UIKConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_UpPelvisSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_UpSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_DownSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_HeadSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_UpTraceDistance;
    
    UPROPERTY(EditAnywhere)
    float m_DownTraceDistance;
    
    UPROPERTY(EditAnywhere)
    float m_DistanceLookAtPoint;
    
    UPROPERTY(EditAnywhere)
    FName m_HeadBoneName;
    
    UPROPERTY(EditAnywhere)
    FName m_NeckBoneName;
    
    UPROPERTY(EditAnywhere)
    bool m_SwitchLegSolve;
    
    UPROPERTY(EditAnywhere)
    bool m_SwitchLookSolve;
    
public:
    UIKConfig();

};

