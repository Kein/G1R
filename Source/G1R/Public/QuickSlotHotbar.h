#pragma once
#include "CoreMinimal.h"
#include "QuickSlotBase.h"
#include "QuickSlotHotbar.generated.h"

class UAbilitySystemComponent;

UCLASS(EditInlineNew)
class G1R_API UQuickSlotHotbar : public UQuickSlotBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UAbilitySystemComponent* m_AbilitySystemComponent;
    
    UQuickSlotHotbar();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEquipInSlot(int32 _Slot);
    
};

