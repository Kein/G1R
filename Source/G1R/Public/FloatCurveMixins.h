#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Curves/CurveFloat.h"
#include "FloatCurveMixins.generated.h"

UCLASS(BlueprintType)
class G1R_API UFloatCurveMixins : public UObject {
    GENERATED_BODY()
public:
    UFloatCurveMixins();

    UFUNCTION(BlueprintCallable)
    static void AddValueAt(FRuntimeFloatCurve& OutputCurve, float TimeKey, float InputFloat);
    
};

