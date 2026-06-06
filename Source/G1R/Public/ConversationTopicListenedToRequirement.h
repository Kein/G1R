#pragma once
#include "CoreMinimal.h"
#include "ConversationTopicDynamicRequirement.h"
#include "ConversationTopicListenedToRequirement.generated.h"

USTRUCT(BlueprintType)
struct FConversationTopicListenedToRequirement : public FConversationTopicDynamicRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Character;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Voiceline;
    
    G1R_API FConversationTopicListenedToRequirement();
};

