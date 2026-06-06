#pragma once
#include "CoreMinimal.h"
#include "BudgetSystemWorkloadConfig.generated.h"

USTRUCT()
struct FBudgetSystemWorkloadConfig {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    FName WorkloadName;
    
    UPROPERTY(Config)
    double SecondsPerFrame;
    
    G1R_API FBudgetSystemWorkloadConfig();
};

