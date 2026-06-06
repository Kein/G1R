#pragma once
#include "CoreMinimal.h"
#include "PickpocketTargetCharacterModifierSettings.generated.h"

USTRUCT(BlueprintType)
struct FPickpocketTargetCharacterModifierSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_Modifier;
    
    G1R_API FPickpocketTargetCharacterModifierSettings();
};

