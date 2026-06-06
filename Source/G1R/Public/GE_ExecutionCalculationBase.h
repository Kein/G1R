#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "GameplayEffectExecutionCalculation.h"
#include "GameplayTagContainer.h"
#include "EReceiverEventActor.h"
#include "GE_ExecutionCalculationBase.generated.h"

UCLASS()
class G1R_API UGE_ExecutionCalculationBase : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    UGE_ExecutionCalculationBase();

protected:
    UFUNCTION(BlueprintPure)
    void SendGameplayEvent(const EReceiverEventActor& Receiver, const FGameplayTag& EventTag, float Magnitude, const FGameplayEffectCustomExecutionParameters& ExecutionParams) const;
    
};

