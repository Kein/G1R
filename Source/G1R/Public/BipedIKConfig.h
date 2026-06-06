#pragma once
#include "CoreMinimal.h"
#include "IKConfig.h"
#include "BipedIKConfig.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class G1R_API UBipedIKConfig : public UIKConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MaxFootIKStandingTargetDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MaxFootIKCrouchedTargetDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_IKBoneL_Target;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_IKBoneR_Target;
    
    UPROPERTY(EditAnywhere)
    FName m_RightBoneName;
    
    UPROPERTY(EditAnywhere)
    FName m_LeftBoneName;
    
    UPROPERTY(EditAnywhere)
    FName m_PelvisBoneName;
    
public:
    UBipedIKConfig();

};

