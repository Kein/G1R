#pragma once
#include "CoreMinimal.h"
#include "InGameTime.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FInGameTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    double TotalSeconds;
    
    FInGameTime();
};

