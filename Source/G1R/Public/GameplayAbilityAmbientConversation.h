#pragma once
#include "CoreMinimal.h"
#include "GameplayAbility_AI.h"
#include "GameplayAbilityAmbientConversation.generated.h"

class UAbilityTask_ActConversationTopic;
class UConversationTopic;

UCLASS()
class G1R_API UGameplayAbilityAmbientConversation : public UGameplayAbility_AI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UConversationTopic* TopicToAct;
    
    UPROPERTY()
    UAbilityTask_ActConversationTopic* ActConversationTopic;
    
public:
    UGameplayAbilityAmbientConversation();

};

