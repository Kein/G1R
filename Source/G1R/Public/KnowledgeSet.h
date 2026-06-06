#pragma once
#include "CoreMinimal.h"
#include "KnowledgeSet.generated.h"

USTRUCT(BlueprintType)
struct FKnowledgeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TSet<FName> Knowledge;
    
    G1R_API FKnowledgeSet();
};

