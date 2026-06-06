#pragma once
#include "CoreMinimal.h"
#include "ConversationTopicDynamicRequirement.h"
#include "ConversationTopicLocationRequirement.generated.h"

USTRUCT(BlueprintType)
struct FConversationTopicLocationRequirement : public FConversationTopicDynamicRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Character;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Waypoint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxDistance;
    
    G1R_API FConversationTopicLocationRequirement();
};

