#pragma once
#include "CoreMinimal.h"
#include "QuickSlotBase.h"
#include "QuickSlotCrossbar.generated.h"

UCLASS(EditInlineNew)
class G1R_API UQuickSlotCrossbar : public UQuickSlotBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool m_BCrossOnFront;
    
public:
    UQuickSlotCrossbar();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectSlot(int32 SlotId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreSelectSlot();
    
private:
    UFUNCTION()
    void EndingTimerDoubletap();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableInput();
    
    UFUNCTION(BlueprintCallable)
    void DisableInput();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ChangeBCrossOnFrontBP();
    
};

