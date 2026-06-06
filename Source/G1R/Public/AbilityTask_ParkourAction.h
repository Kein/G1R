#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityTaskGeneric.h"
#include "AbilityTask_ParkourAction.generated.h"

UCLASS(Abstract)
class G1R_API UAbilityTask_ParkourAction : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FGameplayTag ActionTag;
    
    UPROPERTY()
    UAbilityTaskGeneric* AlignTask;
    
public:
    UAbilityTask_ParkourAction();

};

