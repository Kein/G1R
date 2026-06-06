#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ERelationship.h"
#include "ERelationshipHostility.h"
#include "ERelationshipRelativeRank.h"
#include "PursuedCrimeSet.h"
#include "RelationshipEvaluation.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FRelationshipEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    ERelationship Relationship;
    
    UPROPERTY(BlueprintReadOnly)
    float FriendlinessWeight;
    
    UPROPERTY(BlueprintReadOnly)
    ERelationshipHostility Hostility;
    
    UPROPERTY(BlueprintReadOnly)
    float HostilityWeight;
    
    UPROPERTY(BlueprintReadOnly)
    ERelationshipRelativeRank Rank;
    
    UPROPERTY(BlueprintReadOnly)
    float RankWeight;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, FPursuedCrimeSet> PursuedCrimesByArea;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, FGameplayTagContainer> IgnoredCrimesByArea;
    
    UPROPERTY()
    float AtTime;
    
    FRelationshipEvaluation();
};

