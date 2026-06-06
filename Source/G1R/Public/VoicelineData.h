#pragma once
#include "CoreMinimal.h"
#include "VoicelineData.generated.h"

USTRUCT(BlueprintType)
struct FVoicelineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FText TalkingCharacterName;
    
    UPROPERTY(BlueprintReadOnly)
    FText Text;
    
    UPROPERTY(BlueprintReadOnly)
    float Duration;
    
    G1R_API FVoicelineData();
};

