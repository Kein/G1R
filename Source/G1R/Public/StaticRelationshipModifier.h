#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ERelationship.h"
#include "ERelationshipHostility.h"
#include "ERelationshipRelativeRank.h"
#include "IgnoredCrimeSetup.h"
#include "PursuedCrimeSetup.h"
#include "RelationshipModifier.h"
#include "StaticRelationshipModifier.generated.h"

class UWorld;

UCLASS(Abstract, Blueprintable)
class G1R_API UStaticRelationshipModifier : public URelationshipModifier {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer ForGuild;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer ForSpecies;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, ERelationship> FriendlinessTowardsGuild;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, ERelationshipHostility> HostilityTowardsGuild;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, ERelationshipRelativeRank> RankOfGuild;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, ERelationship> FriendlinessTowardsSpecies;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, ERelationshipHostility> HostilityTowardsSpecies;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, ERelationshipRelativeRank> RankOfSpecies;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FPursuedCrimeSetup> PursuedCrimes;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FIgnoredCrimeSetup> IgnoredCrimes;
    
    UPROPERTY(EditDefaultsOnly)
    float Weight;
    
    UStaticRelationshipModifier();

    UFUNCTION(BlueprintNativeEvent)
    bool IsApplicableForWorld(UWorld* ThisWorld) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag FindBestMatchingSpeciesRankTag(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag FindBestMatchingSpeciesHostilityTag(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag FindBestMatchingSpeciesFriendlinessTag(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag FindBestMatchingGuildRankTag(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag FindBestMatchingGuildHostilityTag(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag FindBestMatchingGuildFriendlinessTag(const FGameplayTag& Tag) const;
    
};

