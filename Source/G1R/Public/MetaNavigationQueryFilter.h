#pragma once
#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "Templates/SubclassOf.h"
#include "MetaNavigationQueryFilter.generated.h"

class UObject;

UCLASS(Blueprintable)
class G1R_API UMetaNavigationQueryFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UMetaNavigationQueryFilter();

    UFUNCTION(BlueprintImplementableEvent)
    TSubclassOf<UNavigationQueryFilter> BP_GetSimpleFilterForAgent(const UObject* Querier) const;
    
};

