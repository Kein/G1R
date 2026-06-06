#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ERelationship.h"
#include "ERelationshipHostility.h"
#include "ERelationshipRelativeRank.h"
#include "CrimeVictimGuildHandle.generated.h"

USTRUCT(BlueprintType)
struct FCrimeVictimGuildHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FGameplayTag Guild;
    
    UPROPERTY(BlueprintReadWrite)
    ERelationship RelationshipTowardsGuild;
    
    UPROPERTY(BlueprintReadWrite)
    ERelationshipRelativeRank RelativeRankTowardsGuild;
    
    UPROPERTY(BlueprintReadWrite)
    ERelationshipHostility HostilityTowardsGuild;
    
    G1R_API FCrimeVictimGuildHandle();
};

