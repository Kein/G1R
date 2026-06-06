#pragma once
#include "CoreMinimal.h"
#include "InputTriggers.h"
#include "GameplayTagContainer.h"
#include "TriggerConsumeByAbility.generated.h"

UCLASS(CollapseCategories, EditInlineNew, Config=Engine)
class G1R_API UTriggerConsumeByAbility : public UInputTrigger {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config, EditAnywhere)
    FGameplayTag AbilityTag;
    
public:
    UTriggerConsumeByAbility();

};

