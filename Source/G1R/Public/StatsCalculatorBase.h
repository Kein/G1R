#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StatCalculator.h"
#include "StatsCalculatorBase.generated.h"

class UItemStatsDefinitionContainer;

UCLASS(Blueprintable)
class G1R_API UStatsCalculatorBase : public UObject, public IStatCalculator {
    GENERATED_BODY()
public:
    UStatsCalculatorBase();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void Initialize_Scriptable(const TArray<FName>& args);
    
    UFUNCTION(BlueprintImplementableEvent)
    float Calculate_Scriptable(const UItemStatsDefinitionContainer* ActorStats, float currentStatValue);
    

    // Fix for true pure virtual functions not being implemented
};

