#pragma once
#include "CoreMinimal.h"
#include "CharacterAIState.h"
#include "Templates/SubclassOf.h"
#include "AIState_SelfConversation.generated.h"

class UAbilityTask_ActConversationTopic;
class UConversationTopic;

UCLASS(EditInlineNew)
class G1R_API UAIState_SelfConversation : public UCharacterAIState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_ActConversationTopic* ActConversationTopic;
    
public:
    UPROPERTY()
    TSubclassOf<UConversationTopic> TopicClassToAct;
    
    UAIState_SelfConversation();

};

