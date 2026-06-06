#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PuzzleCountExtraData.generated.h"

UCLASS(Abstract, BlueprintType)
class G1R_API UPuzzleCountExtraData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, int32> m_PuzzleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_FunctionToCall;
    
    UPuzzleCountExtraData();

};

