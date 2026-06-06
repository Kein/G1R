#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_Actor.h"
#include "GothicGCNotify_Actor.generated.h"

class AActor;
class UCueVisualConfig;

UCLASS()
class G1R_API AGothicGCNotify_Actor : public AGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
    AGothicGCNotify_Actor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool HasExecutedOnRemove();
    
protected:
    UFUNCTION(BlueprintPure)
    UCueVisualConfig* GetCueVisualConfig(AActor* MyTarget) const;
    
};

