#pragma once
#include "CoreMinimal.h"
#include "EUICraftingStates.h"
#include "GothicCommonActivatableWidget.h"
#include "CraftingInProgress.generated.h"

UCLASS(EditInlineNew)
class G1R_API UCraftingInProgress : public UGothicCommonActivatableWidget {
    GENERATED_BODY()
public:
    UCraftingInProgress();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateRecipeName(const FText& RecipeName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateCraftingState(EUICraftingStates UICraftingState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnIntermediateStepAnimationFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Hide();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ConfirmHide();
    
    UFUNCTION(BlueprintCallable)
    void CancelCrafting();
    
};

