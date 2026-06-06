#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AlkFilterCategory.h"
#include "InventoryFilter.generated.h"

UCLASS(Abstract)
class G1R_API UInventoryFilter : public UAlkFilterCategory {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_ItemTags;
    
public:
    UInventoryFilter();

    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetFilterTags() const;
    
};

