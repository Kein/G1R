#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SplineComponent.h"
#include "GothicWaterSplineMetadata.generated.h"

UCLASS()
class G1R_API UGothicWaterSplineMetadata : public USplineMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FInterpCurveFloat m_WaterSpeed;
    
    UPROPERTY(EditAnywhere)
    FInterpCurveFloat m_WaterSpeedInfluenceRadius;
    
    UGothicWaterSplineMetadata();

};

