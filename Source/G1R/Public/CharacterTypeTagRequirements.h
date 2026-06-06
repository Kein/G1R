#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InteractionSpotRequirements.h"
#include "CharacterTypeTagRequirements.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FCharacterTypeTagRequirements : public FInteractionSpotRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer AllowedCharacterTypes;
    
    FCharacterTypeTagRequirements();
};

