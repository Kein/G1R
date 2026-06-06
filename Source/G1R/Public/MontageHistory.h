#pragma once
#include "CoreMinimal.h"
#include "MontageHistory.generated.h"

USTRUCT()
struct FMontageHistory {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    FString Slot;
    
    UPROPERTY()
    FString Section;
    
    UPROPERTY()
    FString SequenceName;
    
    G1R_API FMontageHistory();
};

