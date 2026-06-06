#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IKConfig.h"
#include "QuadrupedIKConfig.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class G1R_API UQuadrupedIKConfig : public UIKConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName m_BackRightBoneName;
    
    UPROPERTY(EditAnywhere)
    FName m_BackLeftBoneName;
    
    UPROPERTY(EditAnywhere)
    FName m_BackPelvisBoneName;
    
    UPROPERTY(EditAnywhere)
    FName m_FrontRightBoneName;
    
    UPROPERTY(EditAnywhere)
    FName m_FrontLeftBoneName;
    
    UPROPERTY(EditAnywhere)
    FName m_FrontPelvisBoneName;
    
    UPROPERTY(EditAnywhere)
    FName m_SpineBoneReferenceName;
    
    UPROPERTY(EditAnywhere)
    float m_NeckCorrector;
    
    UPROPERTY(EditAnywhere)
    float m_NeckMaxSlope;
    
    UPROPERTY(EditAnywhere)
    FRotator m_MinNeckRotation;
    
    UPROPERTY(EditAnywhere)
    FRotator m_MaxNeckRotation;
    
    UPROPERTY(EditAnywhere)
    float m_HipNTailRayLength;
    
    UPROPERTY(EditAnywhere)
    float m_MaxYawRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_IKBoneFrontL_Target;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_IKBoneFrontR_Target;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MaxFootIKStandingTargetDistance;
    
public:
    UQuadrupedIKConfig();

};

