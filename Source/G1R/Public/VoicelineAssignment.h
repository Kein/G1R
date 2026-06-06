#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "VoicelineAssignment.generated.h"

USTRUCT(BlueprintType)
struct FVoicelineAssignment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Text;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Weight;
    
    G1R_API FVoicelineAssignment();
};

