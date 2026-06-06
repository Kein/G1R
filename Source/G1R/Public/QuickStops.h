#pragma once
#include "CoreMinimal.h"
#include "DynamicMontage.h"
#include "QuickStops.generated.h"

USTRUCT(BlueprintType)
struct FQuickStops {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDynamicMontage QuickStopL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDynamicMontage QuickStopR;
    
    G1R_API FQuickStops();
};

