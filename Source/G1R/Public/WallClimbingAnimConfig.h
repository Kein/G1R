#pragma once
#include "CoreMinimal.h"
#include "ItemAnimConfig.h"
#include "WallClimbingAnimConfig.generated.h"

UCLASS(Abstract, Const, EditInlineNew)
class G1R_API UWallClimbingAnimConfig : public UItemAnimConfig {
    GENERATED_BODY()
public:
    UWallClimbingAnimConfig();

};

