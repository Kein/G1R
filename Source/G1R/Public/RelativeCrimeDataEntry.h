#pragma once
#include "CoreMinimal.h"
#include "CrimeVictimGuildHandle.h"
#include "CrimeVictimPersonHandle.h"
#include "ECrimeDirectness.h"
#include "ERelationship.h"
#include "ERelationshipHostility.h"
#include "ERelationshipRelativeRank.h"
#include "ERelativeCrimeOrigin.h"
#include "RelativeCrimeDataEntry.generated.h"

USTRUCT(BlueprintType)
struct FRelativeCrimeDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite)
    FName WitnessGlobalID;
    
    UPROPERTY(BlueprintReadWrite)
    float BaseSeverity;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsSuppressed;
    
    UPROPERTY(BlueprintReadWrite)
    ERelationship RelationshipTowardsCriminal;
    
    UPROPERTY(BlueprintReadWrite)
    ERelationshipRelativeRank RelativeRankTowardsCriminal;
    
    UPROPERTY(BlueprintReadWrite)
    ERelationshipHostility HostilityTowardsCriminal;
    
    UPROPERTY(BlueprintReadWrite)
    bool bInPartyWithCriminal;
    
    UPROPERTY(BlueprintReadWrite)
    ECrimeDirectness Directness;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FCrimeVictimGuildHandle> VictimGuildHandles;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FCrimeVictimPersonHandle> VictimCharacterHandles;
    
    UPROPERTY(BlueprintReadWrite)
    ERelativeCrimeOrigin OriginSource;
    
    G1R_API FRelativeCrimeDataEntry();
};

