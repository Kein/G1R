#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WeightedRandomChoiceLibrary.generated.h"

UCLASS(BlueprintType)
class G1R_API UWeightedRandomChoiceLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWeightedRandomChoiceLibrary();

    UFUNCTION(BlueprintCallable)
    static int32 WeightedRandomIndex(const TArray<float>& Weights);
    
};

