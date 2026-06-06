#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EConversationForceRangeType.h"
#include "EConversationForceWalk.h"
#include "ConversationTopicForceSettings.generated.h"

USTRUCT(BlueprintType)
struct FConversationTopicForceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EConversationForceWalk ApproachBy;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EConversationForceRangeType RangeType;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag ReactionVoiceline;
    
    UPROPERTY(EditAnywhere)
    bool bDoAmbientDuringCombat;
    
    G1R_API FConversationTopicForceSettings();
};

