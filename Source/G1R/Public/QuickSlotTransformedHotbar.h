#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuickSlotBase.h"
#include "QuickSlotTransformedHotbar.generated.h"

class UAbilitySystemComponent;

UCLASS(EditInlineNew)
class G1R_API UQuickSlotTransformedHotbar : public UQuickSlotBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UAbilitySystemComponent* m_AbilitySystemComponent;
    
protected:
    UPROPERTY(EditAnywhere)
    TSet<FGameplayTag> m_GameplayTagsToListenTo;
    
public:
    UQuickSlotTransformedHotbar();

    UFUNCTION(BlueprintImplementableEvent)
    void IsAttackModeHidden(bool IsHidden);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool HasPlayerTag(FGameplayTag GameplayTag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnGameplayTagCountChanged(FGameplayTag GameplayTag, int32 Count);
    
};

