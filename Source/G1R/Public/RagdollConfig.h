#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "Templates/SubclassOf.h"
#include "RagdollConfig.generated.h"

class UAnimMontage;
class UCurveVector;
class UGameplayAbility;

UCLASS(Abstract, BlueprintType, Const, EditInlineNew)
class URagdollConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UCurveVector> m_FloatRagdollCurve;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> m_GetUpBackAnimMontage;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> m_GetUpFrontAnimMontage;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GetUpPlayRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RagdollStartBlendOutTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_StopBonesMovementOnStart;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GravityZFactorUnderwater;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Ragdoll_Maxtime_Active;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Ragdoll_Minvelocity_Active;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Ragdoll_Seconds_At_Minvelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WaterResistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BuySimStrength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UGameplayAbility> m_FallingRagdollAbility;
    
public:
    URagdollConfig();

};

