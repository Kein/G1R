#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "RegionDefinitionMap.h"
#include "RegionsDefinition.generated.h"

UCLASS(Abstract, BlueprintType)
class G1R_API URegionsDefinition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FName, FRegionDefinitionMap> m_Regions;
    
    URegionsDefinition();

    UFUNCTION(BlueprintCallable)
    void AddRegionConfig(FName region, FGameplayTag objectTag, float Modifier);
    
};

