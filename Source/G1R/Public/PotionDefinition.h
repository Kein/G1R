#pragma once
#include "CoreMinimal.h"
#include "ItemDefinition.h"
#include "PotionDefinition.generated.h"

UCLASS(Abstract, EditInlineNew)
class G1R_API UPotionDefinition : public UItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_BonusHp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_BonusMana;
    
    UPotionDefinition();

    UFUNCTION(BlueprintNativeEvent)
    void ConsumePotion() const;
    
};

