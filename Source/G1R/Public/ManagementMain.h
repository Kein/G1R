#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AlkInputAction.h"
#include "CloseManagementMainDelegate.h"
#include "EInventoryOpenedStates.h"
#include "GothicCommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "ManagementMain.generated.h"

class UInventoryMain;
class UObject;
class UPanelWidget;
class UWidget;

UCLASS(EditInlineNew)
class G1R_API UManagementMain : public UGothicCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY()
    FCloseManagementMain CloseManagementMain;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UInventoryMain* W_Inventory_Main;
    
    UPROPERTY()
    EInventoryOpenedStates InventoryOpenedState;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UInventoryMain> InventoryMainClassBP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FAlkInputAction m_ToggleInventoryAction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FAlkInputAction m_ToggleQuestsAction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FAlkInputAction m_ToggleGlossaryAction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FAlkInputAction m_ToggleStatsAction;
    
public:
    UManagementMain();

    UFUNCTION(BlueprintImplementableEvent)
    void ToggleTab(FGameplayTag _TabTag);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUnseenStateChanged(UWidget* _ChildWidget, bool _IsUnseen);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnabledInput();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDisabledInput();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnButtonRelevanceChanged();
    
public:
    UFUNCTION()
    bool Initialization(EInventoryOpenedStates NewInventoryOpenedState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitContentWidgets(const UPanelWidget* _Container);
    
public:
    UFUNCTION()
    UInventoryMain* GetInventoryWidget();
    
    UFUNCTION()
    EInventoryOpenedStates GetInventoryOpenedState();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FlipToTab(FGameplayTag _TabTag, FGameplayTag _FilterTag, const UObject* _Item);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EnableWidgetBP();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DisableWidgetBP();
    
};

