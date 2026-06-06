#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DifficultySlotInfo.generated.h"

UCLASS(BlueprintType)
class G1R_API UDifficultySlotInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FText DifficultyName;
    
    UPROPERTY(BlueprintReadWrite)
    FText DifficultyDescription;
    
    UDifficultySlotInfo();

};

