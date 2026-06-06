#pragma once
#include "CoreMinimal.h"
#include "AICombatTargetScoringEntryDescription.h"
#include "ScoredCombatTarget.generated.h"

class AGothicCharacter;

USTRUCT(BlueprintType)
struct FScoredCombatTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Score;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SuspendUpdatesUntilWorldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AGothicCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAICombatTargetScoringEntryDescription> EntryDescriptions;
    
    G1R_API FScoredCombatTarget();
};

