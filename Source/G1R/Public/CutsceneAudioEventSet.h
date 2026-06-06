#pragma once
#include "CoreMinimal.h"
#include "CutsceneAudioEventSet.generated.h"

class UFMODEvent;

USTRUCT(BlueprintType)
struct FCutsceneAudioEventSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, TSoftObjectPtr<UFMODEvent>> AudioEvents;
    
    G1R_API FCutsceneAudioEventSet();
};

