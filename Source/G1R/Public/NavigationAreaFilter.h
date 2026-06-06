#pragma once
#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "Templates/SubclassOf.h"
#include "NavigationAreaFilter.generated.h"

class UNavArea;

UCLASS(Abstract, BlueprintType)
class G1R_API UNavigationAreaFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UNavigationAreaFilter();

    UFUNCTION(BlueprintCallable)
    void SetTravelCostWater(float travelCost);
    
    UFUNCTION(BlueprintCallable)
    void SetTravelCostOnNavArea(TSubclassOf<UNavArea> NavArea, float travelCost);
    
    UFUNCTION(BlueprintCallable)
    void SetEnteringCostWater(float enteringCost);
    
    UFUNCTION(BlueprintCallable)
    void SetEnteringCostOnNavArea(TSubclassOf<UNavArea> NavArea, float enteringCost);
    
    UFUNCTION(BlueprintCallable)
    void OverrideMaxSearchNodes(float maxSearchNode);
    
    UFUNCTION(BlueprintCallable)
    void OverrideDefaultNavAreaCost(float Cost);
    
    UFUNCTION(BlueprintCallable)
    void IncludeNavArea(TSubclassOf<UNavArea> NavArea);
    
    UFUNCTION(BlueprintCallable)
    void ExcludeWaterArea();
    
    UFUNCTION(BlueprintCallable)
    void ExcludeShallowWaterArea();
    
    UFUNCTION(BlueprintCallable)
    void ExcludeNormalWaterArea();
    
    UFUNCTION(BlueprintCallable)
    void ExcludeNavLinks();
    
    UFUNCTION(BlueprintCallable)
    void ExcludeNavArea(TSubclassOf<UNavArea> NavArea);
    
    UFUNCTION(BlueprintCallable)
    void ExcludeDeepWaterArea();
    
};

