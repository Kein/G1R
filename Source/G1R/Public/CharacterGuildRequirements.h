#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InteractionSpotRequirements.h"
#include "CharacterGuildRequirements.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FCharacterGuildRequirements : public FInteractionSpotRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer AllowedGuilds;
    
    FCharacterGuildRequirements();
};

