#pragma once
#include "CoreMinimal.h"
#include "GothicSmartLinkComponentWallClimbing.h"
#include "GothicSmartLinkComponentJumpToWallClimbing.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicSmartLinkComponentJumpToWallClimbing : public UGothicSmartLinkComponentWallClimbing {
    GENERATED_BODY()
public:
    UGothicSmartLinkComponentJumpToWallClimbing(const FObjectInitializer& ObjectInitializer);

};

