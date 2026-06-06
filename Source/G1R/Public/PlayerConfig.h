#pragma once
#include "CoreMinimal.h"
#include "CharacterConfig.h"
#include "PlayerConfig.generated.h"

UCLASS(Abstract, EditInlineNew)
class G1R_API UPlayerConfig : public UCharacterConfig {
    GENERATED_BODY()
public:
    UPlayerConfig();

};

