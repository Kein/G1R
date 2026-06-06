#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayModMagnitudeCalculation.h"
#include "Templates/SubclassOf.h"
#include "GE_ModMagnitudeCalculationBase.generated.h"

class UAttributeSet;

UCLASS(Abstract)
class G1R_API UGE_ModMagnitudeCalculationBase : public UGameplayModMagnitudeCalculation {
    GENERATED_BODY()
public:
    UGE_ModMagnitudeCalculationBase();

    UFUNCTION(BlueprintCallable)
    FGameplayAttribute GetAttribute(TSubclassOf<UAttributeSet> AttributeSetClass, FName AttributeName);
    
};

