#pragma once
#include "CoreMinimal.h"
#include "GothicZDivergePathfollowingComponent.h"
#include "GothicDivePathfollowingComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicDivePathfollowingComponent : public UGothicZDivergePathfollowingComponent {
    GENERATED_BODY()
public:
    UGothicDivePathfollowingComponent(const FObjectInitializer& ObjectInitializer);

};

