#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BoneFeetData.h"
#include "BoneTrackedData.h"
#include "FootstepTag.generated.h"

UCLASS()
class UFootstepTag : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneFeetData BoneData;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FBoneTrackedData> BonesToTrack;
    
    UFootstepTag();

};

