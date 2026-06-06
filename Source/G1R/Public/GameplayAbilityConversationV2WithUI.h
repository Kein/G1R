#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityConversationV2.h"
#include "TopicSelectedDelegateDelegate.h"
#include "GameplayAbilityConversationV2WithUI.generated.h"

class AGothicPlayerControllerBase;
class UConversationTopic;
class UConversationWidget;

UCLASS()
class G1R_API UGameplayAbilityConversationV2WithUI : public UGameplayAbilityConversationV2 {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTopicSelectedDelegate OnSubTopicSelected;
    
protected:
    UPROPERTY(Instanced)
    UConversationWidget* PlayerConversationWidget;
    
    UPROPERTY()
    AGothicPlayerControllerBase* PlayerController;
    
public:
    UGameplayAbilityConversationV2WithUI();

    UFUNCTION(Reliable, Server)
    void ServerUserRequestedSkip();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequestStartActingTopic(UConversationTopic* Topic);
    
    UFUNCTION(Reliable, Server)
    void ServerRequestStartActingSubTopic(UConversationTopic* Topic);
    
    UFUNCTION(Client, Reliable)
    void ClientShowSubChoiceUI(const TArray<UConversationTopic*>& AvailableTopics);
    
    UFUNCTION(Client, Reliable)
    void ClientShowConversationUI();
    
    UFUNCTION(Client, Reliable)
    void ClientShowChoiceUI(const TArray<UConversationTopic*>& AvailableTopics);
    
};

