#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputSet.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FInputSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D InputRemapRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveResponseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TurnResponseMultiplier;
    
    FInputSet();
};

