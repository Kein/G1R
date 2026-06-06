#pragma once
#include "CoreMinimal.h"
#include "Interfaces/Interface_PostProcessVolume.h"
#include "Engine/Scene.h"
#include "RegionTrait.h"
#include "PostProcessingRegionTrait.generated.h"

UCLASS(EditInlineNew)
class G1R_API UPostProcessingRegionTrait : public URegionTrait, public IInterface_PostProcessVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPostProcessSettings PostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BlendRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BlendWeight;
    
    UPROPERTY(EditAnywhere)
    bool bDisableWhenOverlappingOtherPostProcessVolumes;
    
    UPROPERTY(EditAnywhere)
    bool bDisableOverlappingPostProcessingRegions;
    
    UPostProcessingRegionTrait();

    //~ Begin IInterface_PostProcessVolume Interface
    virtual bool EncompassesPoint(FVector Point, float SphereRadius, float* OutDistanceToPoint) override { return false; };
    virtual FPostProcessVolumeProperties GetProperties() const override
    {
        FPostProcessVolumeProperties Ret;
        return Ret;
    }
    #if DEBUG_POST_PROCESS_VOLUME_ENABLE
        virtual FString GetDebugName() const override { return ""; }
    #endif
    //~ End IInterface_PostProcessVolume Interface
};

