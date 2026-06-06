#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InteractionSpotHandle.h"
#include "RegionStoryActionCharacterCondition.generated.h"

USTRUCT(BlueprintType)
struct FRegionStoryActionCharacterCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName CharacterName;
    
    UPROPERTY(EditAnywhere)
    FInteractionSpotHandle MustBeCloseToSpot;
    
    UPROPERTY(EditAnywhere)
    FInteractionSpotHandle MustNotBeCloseToSpot;
    
    UPROPERTY(EditAnywhere)
    float WithinRadius;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer WithTheseTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer WithNoneOfTheseTags;
    
    G1R_API FRegionStoryActionCharacterCondition();
};

