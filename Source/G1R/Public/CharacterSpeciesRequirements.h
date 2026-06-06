#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InteractionSpotRequirements.h"
#include "CharacterSpeciesRequirements.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FCharacterSpeciesRequirements : public FInteractionSpotRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer AllowedSpecies;
    
    FCharacterSpeciesRequirements();
};

