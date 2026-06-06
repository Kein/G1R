#pragma once
#include "CoreMinimal.h"
#include "InputTriggers.h"
#include "InputCoreTypes.h"
#include "TriggerModifierKey.generated.h"

UCLASS(CollapseCategories, EditInlineNew, Config=Engine)
class G1R_API UTriggerModifierKey : public UInputTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FKey ModifierKey;
    
    UTriggerModifierKey();

};

