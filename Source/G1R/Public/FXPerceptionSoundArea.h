#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EPerceptionNoiseLoudness.h"
#include "EPerceptionSoundLengthType.h"
#include "FXPerceptionSoundArea.generated.h"

USTRUCT(BlueprintType)
struct FFXPerceptionSoundArea {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag PerceptionSoundTag;
    
    UPROPERTY(BlueprintReadWrite)
    EPerceptionNoiseLoudness PerceptionLoudness;
    
    UPROPERTY(EditDefaultsOnly)
    EPerceptionSoundLengthType PerceptionSoundLength;
    
    G1R_API FFXPerceptionSoundArea();
};

