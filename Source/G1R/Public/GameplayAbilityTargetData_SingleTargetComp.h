#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilityTargetData_SingleTargetComp.generated.h"

class USceneComponent;

USTRUCT()
struct G1R_API FGameplayAbilityTargetData_SingleTargetComp : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<USceneComponent> TargetComp;
    
    FGameplayAbilityTargetData_SingleTargetComp();
};

