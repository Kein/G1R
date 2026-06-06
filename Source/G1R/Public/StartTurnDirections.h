#pragma once
#include "CoreMinimal.h"
#include "DynamicMontage.h"
#include "StartTurnDirections.generated.h"

USTRUCT(BlueprintType)
struct FStartTurnDirections {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDynamicMontage Pivot180L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDynamicMontage Pivot180R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDynamicMontage Pivot135L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDynamicMontage Pivot135R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDynamicMontage Pivot90L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDynamicMontage Pivot90R;
    
    G1R_API FStartTurnDirections();
};

