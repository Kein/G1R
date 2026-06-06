#pragma once
#include "CoreMinimal.h"
#include "ConversationTopicDynamicRequirement.generated.h"

USTRUCT(BlueprintType)
struct FConversationTopicDynamicRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int64 DebugId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bExpectedResult;
    
    G1R_API FConversationTopicDynamicRequirement();
};

