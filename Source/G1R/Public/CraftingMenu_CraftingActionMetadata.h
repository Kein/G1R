#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CraftingMenu_CraftingActionMetadata.generated.h"

USTRUCT(BlueprintType)
struct FCraftingMenu_CraftingActionMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag m_GameplayTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_WindowTitle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_CanCraftMultipleItems;
    
    G1R_API FCraftingMenu_CraftingActionMetadata();
};

