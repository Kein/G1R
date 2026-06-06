#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayEffectAttributeCaptureDefinition.h"
#include "GE_ModMagnitudeCalculationBase.h"
#include "GE_ModMagnitudeCalculation_BaseRecoverBySleeping.generated.h"

UCLASS(Abstract)
class UGE_ModMagnitudeCalculation_BaseRecoverBySleeping : public UGE_ModMagnitudeCalculationBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FGameplayEffectAttributeCaptureDefinition m_MaxAttributeDef;
    
    UPROPERTY(Transient)
    FGameplayEffectAttributeCaptureDefinition m_RecoveryRatePerHourOfSleepAttributeDef;
    
public:
    UGE_ModMagnitudeCalculation_BaseRecoverBySleeping();

protected:
    UFUNCTION(BlueprintCallable)
    void InitRecoveryRatePerHourOfSleepAttributeToCapture(const FGameplayAttribute& Attribute);
    
    UFUNCTION(BlueprintCallable)
    void InitMaxValueAttributeToCapture(const FGameplayAttribute& Attribute);
    
};

