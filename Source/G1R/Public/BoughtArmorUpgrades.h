#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BoughtArmorUpgrades.generated.h"

class UArmorDefinition;
class UArmorUpgradeDefinition;

USTRUCT(BlueprintType)
struct FBoughtArmorUpgrades {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<UArmorDefinition> Armor;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<TSubclassOf<UArmorUpgradeDefinition>> AvailableUpgrades;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<TSubclassOf<UArmorUpgradeDefinition>> BoughtUpgrades;
    
    G1R_API FBoughtArmorUpgrades();
};

