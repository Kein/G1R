#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityBase.h"
#include "GameplayAbilitySelfConversation.generated.h"

class UConversationTopicSet;

UCLASS()
class G1R_API UGameplayAbilitySelfConversation : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UConversationTopicSet* SelfTopicSet;
    
public:
    UGameplayAbilitySelfConversation();

};

