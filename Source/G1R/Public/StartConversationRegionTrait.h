#pragma once
#include "CoreMinimal.h"
#include "StoryActionRegionTrait.h"
#include "Templates/SubclassOf.h"
#include "StartConversationRegionTrait.generated.h"

class UConversationTopic;

UCLASS(EditInlineNew)
class G1R_API UStartConversationRegionTrait : public UStoryActionRegionTrait {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UConversationTopic>> TopicsToTry;
    
    UPROPERTY(EditAnywhere)
    bool bForceSelfConversation;
    
    UPROPERTY(EditAnywhere)
    bool bReTryEachTick;
    
    UStartConversationRegionTrait();

};

