#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveVector.h"
#include "VectorCurveMixins.generated.h"

UCLASS(BlueprintType)
class G1R_API UVectorCurveMixins : public UObject {
    GENERATED_BODY()
public:
    UVectorCurveMixins();

    UFUNCTION(BlueprintCallable)
    static FRotator GetRotatorAt(const FRuntimeVectorCurve& OutputCurve, float TimeKey);
    
    UFUNCTION(BlueprintCallable)
    static void AddVectorAt(FRuntimeVectorCurve& OutputCurve, float TimeKey, const FVector& InputVector);
    
    UFUNCTION(BlueprintCallable)
    static void AddRotatorAt(FRuntimeVectorCurve& OutputCurve, float TimeKey, const FRotator& InputRotator);
    
};

