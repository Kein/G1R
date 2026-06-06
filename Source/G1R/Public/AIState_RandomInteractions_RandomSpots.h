#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AIState_DailyRoutine_RandomInteractions.h"
#include "AIState_RandomInteractions_RandomSpots.generated.h"

UCLASS(EditInlineNew)
class G1R_API UAIState_RandomInteractions_RandomSpots : public UAIState_DailyRoutine_RandomInteractions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bPreferSpotsInLookingDirection;
    
    UPROPERTY(EditAnywhere)
    bool bPreferSpotOutsideSpotReachRadius;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer AlwaysStartInteractionOnSpotWithInteractions;
    
    UAIState_RandomInteractions_RandomSpots();

};

