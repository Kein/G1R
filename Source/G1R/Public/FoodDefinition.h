#pragma once
#include "CoreMinimal.h"
#include "ItemDefinition.h"
#include "FoodDefinition.generated.h"

UCLASS(Abstract, EditInlineNew)
class G1R_API UFoodDefinition : public UItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_BonusHp;
    
    UFoodDefinition();

};

