#pragma once
#include "CoreMinimal.h"
#include "Sound/ReverbSettings.h"
#include "AudioSnapshotRegion.h"
#include "EReactionType.h"
#include "RegionTrait.h"
#include "AudioRegionTrait.generated.h"

UCLASS(EditInlineNew)
class G1R_API UAudioRegionTrait : public URegionTrait, public IAudioSnapshotRegion {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EReactionType ReactionType;
    
    UPROPERTY(EditAnywhere)
    FReverbSettings ReverbSettings;
    
    UPROPERTY(EditAnywhere)
    float SnapshotPriority;
    
    UAudioRegionTrait();


    // Fix for true pure virtual functions not being implemented
};

