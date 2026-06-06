#pragma once
#include "CoreMinimal.h"
#include "Components/Button.h"
#include "ELockPickUIHint.h"
#include "GothicCommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "LockPickUIWidget.generated.h"

class UInventorySlotData;
class UItemDefinition;

UCLASS(EditInlineNew)
class ULockPickUIWidget : public UGothicCommonActivatableWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFadedOut);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnButtonPressedEvent m_OnUpPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnButtonPressedEvent m_OnDownPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnButtonPressedEvent m_OnLeftPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnButtonPressedEvent m_OnRightPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnButtonPressedEvent m_OnBackPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnButtonPressedEvent m_OnResetPressed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ELockPickUIHint m_LockPickUIHint;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnFadedOut m_OnFadedOut;
    
public:
    ULockPickUIWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInventoryItemConsumed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutAndRemoveFromParent();
    
    UFUNCTION(BlueprintPure)
    UInventorySlotData* CreateSlotDataForItemDefinition(TSubclassOf<UItemDefinition> ItemDefinitionClass) const;
    
    UFUNCTION(BlueprintPure)
    bool CheckHasAnyLockpickingSkills() const;
    
};

