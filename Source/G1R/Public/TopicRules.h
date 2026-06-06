#pragma once
#include "CoreMinimal.h"
#include "InstancedStruct.h"
#include "KnowledgeSet.h"
#include "TopicRules.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FTopicRules {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FKnowledgeSet> RequiredKnowledge;
    
    UPROPERTY()
    TArray<FKnowledgeSet> KnowledgeThatHides;
    
    UPROPERTY()
    TArray<FInstancedStruct> DynamicRequirements;
    
    FTopicRules();
};

