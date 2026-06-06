#pragma once
#include "CoreMinimal.h"
#include "ConversationTopicDynamicRequirement.h"
#include "Templates/SubclassOf.h"
#include "ConversationTopicQuestRequirement.generated.h"

class UQuest;

USTRUCT(BlueprintType)
struct FConversationTopicQuestRequirement : public FConversationTopicDynamicRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UQuest> QuestClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAllowWhenAvailable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAllowWhenRunning;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAllowWhenSucceeded;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAllowWhenFailed;
    
    G1R_API FConversationTopicQuestRequirement();
};

