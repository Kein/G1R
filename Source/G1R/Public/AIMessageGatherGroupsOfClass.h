#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIMessageGatherGroupsOfClass.generated.h"

class UGothicAIGroup;

USTRUCT()
struct G1R_API FAIMessageGatherGroupsOfClass {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UGothicAIGroup> Group;
    
    UPROPERTY()
    TSet<UGothicAIGroup*> Found;
    
    FAIMessageGatherGroupsOfClass();
};

