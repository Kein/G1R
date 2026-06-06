#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ScoredCombatTarget.h"
#include "AICombatTargetScoringEntryManager.generated.h"

class AGothicCharacter;
class UAICombatTargetScoringEntry;

UCLASS(BlueprintType, Within=GameplayAbility_AI)
class UAICombatTargetScoringEntryManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<UAICombatTargetScoringEntry*> TargetScoringEntryGroups;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<AGothicCharacter*, FScoredCombatTarget> LastTargetScores;
    
    UPROPERTY(BlueprintReadOnly)
    TSet<AGothicCharacter*> ValidAvailableTargets;
    
    UAICombatTargetScoringEntryManager();

    UFUNCTION(BlueprintCallable)
    void UpdateAvailableTargets(const TArray<AGothicCharacter*>& AvailableTargets);
    
    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetHighestScoredTargetCharacter() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FScoredCombatTarget> GetAvailableScoredCombatTargets() const;
    
    UFUNCTION(BlueprintPure)
    void CalculateScoreOfCombatTarget(FScoredCombatTarget& ScoredCombatTarget) const;
    
    UFUNCTION(BlueprintCallable)
    void Add(UAICombatTargetScoringEntry* Entry);
    
};

