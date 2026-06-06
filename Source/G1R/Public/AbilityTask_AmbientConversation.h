#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_StateBasedAction.h"
#include "Templates/SubclassOf.h"
#include "AbilityTask_AmbientConversation.generated.h"

class AGothicCharacterState;
class UAbilityTask_AmbientConversation;
class UConversationTopic;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_AmbientConversation : public UAbilityTask_StateBasedAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AGothicCharacterState* OtherCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UConversationTopic> TopicToAct;
    
    UAbilityTask_AmbientConversation();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_AmbientConversation* TaskAmbientConversation(UGameplayAbility* OwningAbility, AGothicCharacterState* NewOtherCharacter, TSubclassOf<UConversationTopic> NewTopicToAct);
    
};

