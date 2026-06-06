#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskCoroutine.h"
#include "AbilityTask_ActConversationTopic.generated.h"

class UAbilityTask_ActConversationTopic;
class UConversationTopic;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_ActConversationTopic : public UAbilityTaskCoroutine {
    GENERATED_BODY()
public:
    UPROPERTY()
    UConversationTopic* TopicToAct;
    
    UAbilityTask_ActConversationTopic();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_ActConversationTopic* TaskActConversationTopic(UGameplayAbility* OwningAbility, UConversationTopic* NewTopicToAct);
    
};

