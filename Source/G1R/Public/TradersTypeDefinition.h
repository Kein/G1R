#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "TraderDefinitionMap.h"
#include "TradersTypeDefinition.generated.h"

UCLASS(Abstract, BlueprintType)
class G1R_API UTradersTypeDefinition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FName, FTraderDefinitionMap> m_TraderCategory;
    
    UTradersTypeDefinition();

    UFUNCTION(BlueprintCallable)
    void AddTraderCategory(FName traderCategory, FGameplayTag objectTag, float Modifier);
    
};

