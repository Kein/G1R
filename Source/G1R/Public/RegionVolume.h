#pragma once
#include "CoreMinimal.h"
#include "Interfaces/Interface_PostProcessVolume.h"
#include "AI/Navigation/NavRelevantInterface.h"
#include "GameFramework/PhysicsVolume.h"
#include "OwnsRegionTraits.h"
#include "Templates/SubclassOf.h"
#include "RegionVolume.generated.h"

class URegionTrait;

UCLASS()
class G1R_API ARegionVolume : public APhysicsVolume, public INavRelevantInterface, public IInterface_PostProcessVolume, public IOwnsRegionTraits {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    TArray<URegionTrait*> RegionTraits;
    
    ARegionVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    URegionTrait* FindTraitByClass(TSubclassOf<URegionTrait> TraitClass) const;
    

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

