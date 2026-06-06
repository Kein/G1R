#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityTargetData_EquipItem.generated.h"

class UItemDefinition;

USTRUCT(BlueprintType)
struct G1R_API FGameplayAbilityTargetData_EquipItem : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UItemDefinition> NextItem;
    
    FGameplayAbilityTargetData_EquipItem();
};

