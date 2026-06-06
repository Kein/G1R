#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EInventoryOpenedStates.h"
#include "EInventoryTypes.h"
#include "HUDControllerBase.h"
#include "Templates/SubclassOf.h"
#include "HUDManagementController.generated.h"

class AGothicPlayerControllerBase;
class APlayerController;
class UCommonActivatableWidget;
class UHUDManagementController;
class UHUDQuickSlotController;
class UInventoryMain;
class UManagementMain;
class UObject;

UCLASS(BlueprintType)
class G1R_API UHUDManagementController : public UHUDControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TSubclassOf<UCommonActivatableWidget> m_WidgetClass;
    
    UPROPERTY()
    AGothicPlayerControllerBase* m_GothicPlayerController;
    
    UPROPERTY(Instanced)
    UManagementMain* m_ManagementMain;
    
    UPROPERTY()
    EInventoryOpenedStates m_OpenedState;
    
    UPROPERTY()
    UHUDQuickSlotController* m_HUDQuickSlotController;
    
    UPROPERTY()
    FGameplayTag OpeningTabTag;
    
    UPROPERTY()
    FGameplayTag OpeningFilterTag;
    
    UPROPERTY()
    UObject* OpeningItem;
    
public:
    UHUDManagementController();

private:
    UFUNCTION()
    void QuickSlotToggle();
    
    UFUNCTION()
    void QuickSlotClose();
    
public:
    UFUNCTION(BlueprintCallable)
    void OpenManagementPage(FGameplayTag _TabTag, FGameplayTag _FilterTag, const UObject* _Item);
    
private:
    UFUNCTION()
    void OnReceivedItemClicked(int32 ItemId, EInventoryTypes InventoryType);
    
    UFUNCTION()
    void OnOpenContainerRefreshInventory();
    
    UFUNCTION()
    void OnOpenContainerClosed();
    
    UFUNCTION()
    void OnItemClickedDFromInventory(int32 ItemId, EInventoryTypes InventoryType, int32 ItemAmount, UInventoryMain* InventoryMain);
    
    UFUNCTION()
    void OnBlockStateTagChange(FGameplayTag InTag, int32 NewCount);
    
public:
    UFUNCTION(BlueprintCallable)
    static UHUDManagementController* GetManagementController(const APlayerController* _PlayerController);
    
private:
    UFUNCTION(BlueprintCallable)
    static FString GetBlueprintName();
    
public:
    UFUNCTION()
    void CloseManagementScreen();
    
};

