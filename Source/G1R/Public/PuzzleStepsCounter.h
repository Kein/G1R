#pragma once
#include "CoreMinimal.h"
#include "PuzzleStepsCounter.generated.h"

USTRUCT(BlueprintType)
struct FPuzzleStepsCounter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, int32> m_PuzzleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_FunctionToCall;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName m_SaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, int32> m_PuzzleDone;
    
    G1R_API FPuzzleStepsCounter();
};

