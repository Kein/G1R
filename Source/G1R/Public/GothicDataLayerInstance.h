#pragma once
#include "CoreMinimal.h"
#include "WorldPartition/DataLayer/DataLayerInstanceWithAsset.h"
#include "GothicDataLayerInstance.generated.h"

UCLASS()
class G1R_API UGothicDataLayerInstance : public UDataLayerInstanceWithAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bIsGameplayRelevant;
    
    UGothicDataLayerInstance();

};

