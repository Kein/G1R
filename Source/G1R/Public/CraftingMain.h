#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EUICraftingStates.h"
#include "GothicCommonActivatableWidget.h"
#include "CraftingMain.generated.h"

class UCraftingMenu;

UCLASS(EditInlineNew)
class G1R_API UCraftingMain : public UGothicCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UCraftingMenu* W_CraftingMenu;
    
    UPROPERTY(BlueprintReadOnly)
    EUICraftingStates m_UICraftingState;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag m_TagStationType;
    
public:
    UCraftingMain();

    UFUNCTION(BlueprintCallable)
    void StartCraftingCurrentRecipe();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSimpleCraftingActionCompleted();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCurrentRecipeCraftableChanged(bool IsItemCraftable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CraftingStateChangedBP(EUICraftingStates UICraftingState);
    
};

