#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GothicBaseConfig.h"
#include "LandingMontages.h"
#include "LandingConfig.generated.h"

UCLASS(Abstract, BlueprintType, Const, EditInlineNew)
class ULandingConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_BrakingFrictionFactorStrong;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_BrakingFrictionFactorWeak;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_BrakingFrictionFactorResetTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_StopResetTimeWeak;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_StopResetTimeStrong;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MaxFallingStrongStopHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, FLandingMontages> m_LandingMontages;
    
public:
    ULandingConfig();

};

