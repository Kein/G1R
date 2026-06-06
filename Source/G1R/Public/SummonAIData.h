#pragma once
#include "CoreMinimal.h"
#include "SummonAIData.generated.h"

class AGothicCharacter;

USTRUCT()
struct G1R_API FSummonAIData {
    GENERATED_BODY()
public:
    UPROPERTY()
    AGothicCharacter* Character;
    
    UPROPERTY()
    int32 RequestID;
    
    FSummonAIData();
};

