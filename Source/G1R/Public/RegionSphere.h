#pragma once
#include "CoreMinimal.h"
#include "RegionShape.h"
#include "RegionSphere.generated.h"

UCLASS()
class G1R_API ARegionSphere : public ARegionShape {
    GENERATED_BODY()
public:
    ARegionSphere(const FObjectInitializer& ObjectInitializer);

};

