#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "ECustomKeyBinding.h"
#include "PlayerKeys.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FPlayerKeys {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FKey> m_RequiredKeys;
    
    UPROPERTY()
    ECustomKeyBinding m_KeyBind;
    
public:
    FPlayerKeys();
};

