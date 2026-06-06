#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveBase.h"
#include "Curves/RichCurve.h"
#include "CurveRootMotion.generated.h"

class UAnimSequence;

UCLASS()
class G1R_API UCurveRootMotion : public UCurveBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FRichCurve FloatCurves[4];
    
public:
    UCurveRootMotion();

    UFUNCTION(BlueprintCallable)
    void PopulateCurves(const UAnimSequence* Anim);
    
    UFUNCTION(BlueprintPure)
    FVector4 GetRootMotionValue(float InTime) const;
    
};

