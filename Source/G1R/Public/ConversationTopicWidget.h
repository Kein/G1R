#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "GameplayTagContainer.h"
#include "ConversationTopicWidget.generated.h"

UCLASS(EditInlineNew)
class G1R_API UConversationTopicWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UConversationTopicWidget();

protected:
    UFUNCTION(BlueprintCallable)
    FText GetLocalizedTextForTagCost(FGameplayTag Tag, int32 lpCost, int32 oreCost);
    
};

