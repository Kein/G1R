#pragma once
#include "CoreMinimal.h"
#include "RegionTrait.h"
#include "PostProcessingBooleanRegionTrait.generated.h"

class ARegionVolume;

UCLASS(EditInlineNew)
class G1R_API UPostProcessingBooleanRegionTrait : public URegionTrait {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    ARegionVolume* RegionVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BlendWeight;
    
    UPostProcessingBooleanRegionTrait();

};

