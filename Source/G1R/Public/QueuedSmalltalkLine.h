#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QueuedSmalltalkLine.generated.h"

USTRUCT(BlueprintType)
struct FQueuedSmalltalkLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag GenericVoicelineTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText SelectedVoiceline;
    
    G1R_API FQueuedSmalltalkLine();
};

