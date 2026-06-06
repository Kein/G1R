#pragma once
#include "CoreMinimal.h"
#include "EDivergeState.h"
#include "ENavigationType.h"
#include "GothicPathFollowingComponent.h"
#include "GothicZDivergePathfollowingComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicZDivergePathfollowingComponent : public UGothicPathFollowingComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ENavigationType ZDivergeNavigationType;
    
    UPROPERTY()
    EDivergeState ZDivergeState;
    
public:
    UGothicZDivergePathfollowingComponent(const FObjectInitializer& ObjectInitializer);

};

