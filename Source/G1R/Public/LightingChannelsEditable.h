#pragma once
#include "CoreMinimal.h"
#include "LightingChannelsEditable.generated.h"

USTRUCT(BlueprintType)
struct FLightingChannelsEditable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bChannel0: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bChannel1: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bChannel2: 1;
    
    G1R_API FLightingChannelsEditable();
};

