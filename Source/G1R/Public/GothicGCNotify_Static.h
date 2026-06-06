#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_Static.h"
#include "GothicGCNotify_Static.generated.h"

class AActor;
class UCueVisualConfig;

UCLASS()
class G1R_API UGothicGCNotify_Static : public UGameplayCueNotify_Static {
    GENERATED_BODY()
public:
    UGothicGCNotify_Static();

protected:
    UFUNCTION(BlueprintPure)
    UCueVisualConfig* GetCueVisualConfig(AActor* MyTarget) const;
    
};

