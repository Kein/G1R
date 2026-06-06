#pragma once
#include "CoreMinimal.h"
#include "IslandGroupWrapper.h"
#include "WaynetEdge.h"
#include "WaynetNode.h"
#include "Waynet.generated.h"

class AGlobalNavigationData;

USTRUCT(BlueprintType)
struct G1R_API FWaynet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FWaynetNode> WaynetNodesByID;
    
    UPROPERTY()
    TMap<uint32, FWaynetEdge> EdgesByHash;
    
    UPROPERTY()
    bool bHasBeenBuilt;
    
    UPROPERTY()
    TArray<FIslandGroupWrapper> IslandGroups;
    
    UPROPERTY()
    TArray<FWaynetNode> ProjectionFailedNodes;
    
    UPROPERTY()
    AGlobalNavigationData* GND;
    
public:
    FWaynet();
};

