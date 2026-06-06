#pragma once
#include "CoreMinimal.h"
#include "AIState_DailyRoutine_RandomInteractions.h"
#include "AIState_RandomInteractions_ChainedSpots.generated.h"

UCLASS(EditInlineNew)
class G1R_API UAIState_RandomInteractions_ChainedSpots : public UAIState_DailyRoutine_RandomInteractions {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FName> SpotNames;
    
    UPROPERTY(EditAnywhere)
    bool bAllowSkippingToNextWhenInteractionNotPossible;
    
    UPROPERTY(EditAnywhere)
    bool bRestartWithFirstInteraction;
    
public:
    UAIState_RandomInteractions_ChainedSpots();

    UFUNCTION(BlueprintCallable)
    void AddFreepointName(FName FreepointName);
    
};

