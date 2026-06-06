#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskGeneric.h"
#include "EGenericTaskResult.h"
#include "Templates/SubclassOf.h"
#include "AbilityTask_HandleSubdialog.generated.h"

class UAbilityTask_ActConversationTopic;
class UAbilityTask_HandleSubdialog;
class UConversationTopic;
class UConversationTopicSet;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_HandleSubdialog : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool bReturnToThis;
    
    UPROPERTY()
    UAbilityTask_ActConversationTopic* ActTask;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UConversationTopicSet* TopicSet;
    
    UAbilityTask_HandleSubdialog();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_HandleSubdialog* TaskHandleSubdialog(UGameplayAbility* OwningAbility, const TArray<TSubclassOf<UConversationTopic>>& Topics, UConversationTopic* FromTopic);
    
protected:
    UFUNCTION()
    void OnSubtopicActEnded(UAbilityTaskGeneric* Task, EGenericTaskResult Result);
    
    UFUNCTION()
    void HandleTopicSelected(UConversationTopic* Topic);
    
};

