#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "QuestWidgetBucket.generated.h"

class UQuest;
class UQuestline;

USTRUCT(BlueprintType)
struct FQuestWidgetBucket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FGameplayTag m_FilterTag;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSubclassOf<UQuestline> m_QuestlineClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<UQuest*> m_Quests;
    
    G1R_API FQuestWidgetBucket();
};

