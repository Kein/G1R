#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EInteractionSpotRequirementsMode.h"
#include "InteractionSpotRequirements.generated.h"

USTRUCT()
struct FInteractionSpotRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAlwaysAllowPlayerUse;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer AffectsActions;
    
    UPROPERTY(EditAnywhere)
    EInteractionSpotRequirementsMode AllowWhenConditionsAre;
    
    G1R_API FInteractionSpotRequirements();
};

