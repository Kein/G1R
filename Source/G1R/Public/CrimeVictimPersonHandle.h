#pragma once
#include "CoreMinimal.h"
#include "ERelationship.h"
#include "ERelationshipHostility.h"
#include "ERelationshipRelativeRank.h"
#include "CrimeVictimPersonHandle.generated.h"

USTRUCT(BlueprintType)
struct FCrimeVictimPersonHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FName VictimGlobalID;
    
    UPROPERTY(BlueprintReadWrite)
    ERelationship RelationshipTowardsPerson;
    
    UPROPERTY(BlueprintReadWrite)
    ERelationshipRelativeRank RelativeRankTowardsPerson;
    
    UPROPERTY(BlueprintReadWrite)
    ERelationshipHostility HostilityTowardsPerson;
    
    G1R_API FCrimeVictimPersonHandle();
};

