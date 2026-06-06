#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "GothicMountComponentData.generated.h"

class AGothicCharacter;

USTRUCT(BlueprintType)
struct FGothicMountComponentData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<AGothicCharacter> m_Character;
    
    UPROPERTY()
    FActiveGameplayEffectHandle m_EffectHandle;
    
    G1R_API FGothicMountComponentData();
};

