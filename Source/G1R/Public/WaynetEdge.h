#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "WaynetPath.h"
#include "WaynetEdge.generated.h"

USTRUCT()
struct G1R_API FWaynetEdge {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint64 SourceNodeId;
    
    UPROPERTY()
    uint64 DestinationNodeId;
    
    UPROPERTY()
    FWaynetPath Path;
    
    UPROPERTY()
    FGameplayTagContainer NavLinkAllowedSpecies;
    
    UPROPERTY()
    bool bBelongsToConnectiveActor;
    
    FWaynetEdge();
};

