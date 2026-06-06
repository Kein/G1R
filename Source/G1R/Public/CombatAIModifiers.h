#pragma once
#include "CoreMinimal.h"
#include "CombatAIModifiers.generated.h"

USTRUCT(BlueprintType)
struct FCombatAIModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    TMap<FString, float> m_AttributeModifiers;
    
    G1R_API FCombatAIModifiers();
};

