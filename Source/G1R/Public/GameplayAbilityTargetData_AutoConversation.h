#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityTargetData_AutoConversation.generated.h"

class UConversationTopic;

USTRUCT(BlueprintType)
struct G1R_API FGameplayAbilityTargetData_AutoConversation : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UConversationTopic>> TopicsToChoose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEndConversationAfterGivenTopicSetIsEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreTopicConditions;
    
    FGameplayAbilityTargetData_AutoConversation();
};

