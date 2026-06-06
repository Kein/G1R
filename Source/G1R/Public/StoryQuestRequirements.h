#pragma once
#include "CoreMinimal.h"
#include "InteractionSpotRequirements.h"
#include "Templates/SubclassOf.h"
#include "StoryQuestRequirements.generated.h"

class UQuest;

USTRUCT(BlueprintType)
struct G1R_API FStoryQuestRequirements : public FInteractionSpotRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UQuest> QuestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowWhenAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowWhenRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowWhenSucceeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowWhenFailed;
    
    FStoryQuestRequirements();
};

