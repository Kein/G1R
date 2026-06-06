#pragma once
#include "CoreMinimal.h"
#include "GothicZDivergePathfollowingComponent.h"
#include "GothicFlyPathfollowingComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicFlyPathfollowingComponent : public UGothicZDivergePathfollowingComponent {
    GENERATED_BODY()
public:
    UGothicFlyPathfollowingComponent(const FObjectInitializer& ObjectInitializer);

};

