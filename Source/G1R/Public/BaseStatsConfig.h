#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BaseStatsConfig.generated.h"

UCLASS(Abstract, Const)
class G1R_API UBaseStatsConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UBaseStatsConfig();

};

