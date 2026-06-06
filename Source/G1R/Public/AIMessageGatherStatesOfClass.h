#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIMessageGatherStatesOfClass.generated.h"

class UCharacterAIState;

USTRUCT()
struct G1R_API FAIMessageGatherStatesOfClass {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UCharacterAIState> State;
    
    UPROPERTY()
    TArray<UCharacterAIState*> Found;
    
    FAIMessageGatherStatesOfClass();
};

