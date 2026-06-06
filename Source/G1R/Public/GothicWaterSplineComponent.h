#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "GothicWaterSplineComponent.generated.h"

class UGothicWaterSplineMetadata;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGothicWaterSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UGothicWaterSplineMetadata* m_WaterSplineMetadata;
    
public:
    UGothicWaterSplineComponent(const FObjectInitializer& ObjectInitializer);

};

