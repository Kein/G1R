#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "GothicWaterSplineInstanceData.generated.h"

class UGothicWaterSplineMetadata;

USTRUCT()
struct FGothicWaterSplineInstanceData : public FSplineInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGothicWaterSplineMetadata* m_WaterSplineMetadata;
    
    G1R_API FGothicWaterSplineInstanceData();
};

