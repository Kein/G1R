#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TimerHandle.h"
#include "GameplayTagContainer.h"
#include "EGothicHUDBarVisibility.h"
#include "EInventoryTypes.h"
#include "InteractOpenContainerClickItemDelegateDelegate.h"
#include "InteractOpenContainerDelegateDelegate.h"
#include "ItemPickNotifDelegateDelegate.h"
#include "ItemVirtualData.h"
#include "PlayerKeys.h"
#include "Templates/SubclassOf.h"
#include "PlayerWidget.generated.h"

class UAbilitySystemComponent;
class UCommonActivatableWidget;
class UCommonActivatableWidgetStack;
class UDemoGratitudeWidgetBase;
class UGameOverWidget;
class UGameplayAttributeProgressBarWidget;
class UGothicInputMarvinCheatManager;
class UObject;
class UProgressBar;
class USoundCue;
class UUserWidget;

UCLASS(EditInlineNew, Config=Game)
class G1R_API UPlayerWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInteractOpenContainerClickItemDelegate InteractOpenContainerClickItemDelegateVariable;
    
protected:
    UPROPERTY(Instanced)
    UGameplayAttributeProgressBarWidget* W_HealthBar;
    
    UPROPERTY(Instanced)
    UGameplayAttributeProgressBarWidget* W_ManaBar;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UGameplayAttributeProgressBarWidget* W_OxygenBar;
    
    UPROPERTY(Instanced)
    UProgressBar* SuperArmorBar;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UUserWidget* W_ObjectInteraction;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UUserWidget* W_AmmoLeft;
    
    UPROPERTY(EditAnywhere)
    USoundCue* NewLogEntrySound;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UAbilitySystemComponent* m_AbilitySystemComponent;
    
    UPROPERTY(EditAnywhere)
    TSet<FGameplayTag> m_GameplayTagsToListenTo;
    
    UPROPERTY()
    bool m_Ready;
    
    UPROPERTY()
    float m_CastingMaxTime;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_NumArrows;
    
    UPROPERTY()
    TArray<FPlayerKeys> m_KeysUseQuick;
    
    UPROPERTY()
    TArray<FPlayerKeys> m_KeysUseQuickHold;
    
    UPROPERTY()
    FTimerHandle m_EquipTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_TimeToDrawSecondaryWeapon;
    
    UPROPERTY(BlueprintAssignable)
    FItemPickNotifDelegate ItemPickNotifDelegateVariable;
    
    UPROPERTY(BlueprintAssignable)
    FInteractOpenContainerDelegate InteractOpenContainerDelegateVariable;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FGuid, int32> OldItems;
    
    UPROPERTY()
    TArray<FItemVirtualData> Items;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UUserWidget> ManagementMainBPClass;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UCommonActivatableWidgetStack* Stack_GeneralMenu;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UCommonActivatableWidgetStack* Stack_GeneralPopup;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UCommonActivatableWidgetStack* Stack_PauseMenu;
    
    UPROPERTY(BlueprintReadOnly)
    bool AreBindingsInitialized;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftClassPtr<UDemoGratitudeWidgetBase> m_GratitudeWidgetClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCommonActivatableWidget> m_GameOverWidgetClass;
    
    UPROPERTY(Instanced)
    UGameOverWidget* m_GameOverWidget;
    
private:
    UPROPERTY()
    UGothicInputMarvinCheatManager* MarvinCheatManager;
    
public:
    UPlayerWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateUIMenuController();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateInteractionWidgetPosition(FVector2D NewPos);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateData();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void TogglePauseMenu();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDefaultInputConfig();
    
    UFUNCTION(BlueprintCallable)
    void QuickSave();
    
    UFUNCTION(BlueprintCallable)
    void QuickLoad();
    
    UFUNCTION(BlueprintCallable)
    void OpenMapMenu();
    
    UFUNCTION(BlueprintCallable)
    void OpenManagementPage(FGameplayTag _TabTag, FGameplayTag _FilterTag, const UObject* _Item);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGameSaved();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCannotSaveGame();
    
    UFUNCTION()
    void HUDOxygenBarVisibilityUpdate(EGothicHUDBarVisibility HUDBarVisibility) const;
    
    UFUNCTION()
    void HUDManaBarVisibilityUpdate(EGothicHUDBarVisibility HUDBarVisibility) const;
    
    UFUNCTION()
    void HUDHealthBarVisibilityUpdate(EGothicHUDBarVisibility HUDBarVisibility) const;
    
    UFUNCTION()
    UCommonActivatableWidgetStack* GetStackPauseMenus();
    
    UFUNCTION()
    UCommonActivatableWidgetStack* GetStackGeneralMenus();
    
    UFUNCTION()
    void CloseManagementScreen();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CallInteractOpenContainerClickItem(int32 ItemPos, EInventoryTypes InventorySlot);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Reset();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnGameplayTagCountChanged(FGameplayTag GameplayTag, int32 Count);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnCastSpellEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnCastSpellCancelled();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnCastSpellBegin(float maxCastingTime);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnAbilitySystemComponentBecameAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_MarvinCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_GoBackToMainMenu(bool bRandomBackground);
    
public:
    UFUNCTION(BlueprintPure)
    bool AreAnyPauseMenusOpen() const;
    
    UFUNCTION(BlueprintPure)
    bool AreAnyMenusOpen() const;
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* AddWidgetToPauseMenuStack(TSubclassOf<UCommonActivatableWidget> _WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* AddWidgetToGeneralPopupStack(TSubclassOf<UCommonActivatableWidget> NewWidget);
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* AddWidgetToGeneralMenuStack(TSubclassOf<UCommonActivatableWidget> NewWidget);
    
};

