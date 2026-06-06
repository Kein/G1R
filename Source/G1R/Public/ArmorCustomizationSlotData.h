#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "ArmorCustomizationSlotData.generated.h"

class UArmorUpgradeDefinition;

UCLASS(BlueprintType)
class G1R_API UArmorCustomizationSlotData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<UArmorUpgradeDefinition> m_UpgradeDefinition;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_IsEmpty;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_IsEquipped;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_IsBought;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsLocked;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_IsNew;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_CanAfford;
    
    UArmorCustomizationSlotData();

    UFUNCTION(BlueprintPure)
    UArmorUpgradeDefinition* GetDefaultUpgradeDefinition() const;
    
};

