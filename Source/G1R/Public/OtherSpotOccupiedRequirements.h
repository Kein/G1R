#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EInteractionSpotConditions.h"
#include "EInteractionSpotOccupation.h"
#include "InteractionSpotHandle.h"
#include "InteractionSpotRequirements.h"
#include "OtherSpotOccupiedRequirements.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FOtherSpotOccupiedRequirements : public FInteractionSpotRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInteractionSpotHandle OtherSpotHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInteractionSpotOccupation OtherSpotMustBe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer OtherSpotMustUsedByCharacterThatHasAllOf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInteractionSpotConditions OtherSpotConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag OtherSpotConditionAction;
    
    FOtherSpotOccupiedRequirements();
};

