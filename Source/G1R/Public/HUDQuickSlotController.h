#pragma once
#include "CoreMinimal.h"
#include "CommonInputTypeEnum.h"
#include "EInventoryTypes.h"
#include "EQuickSlotType.h"
#include "HUDControllerBase.h"
#include "Templates/SubclassOf.h"
#include "HUDQuickSlotController.generated.h"

class APawn;
class UHUDManagementController;
class UQuickSlotBase;
class UQuickSlotControlledHotbar;
class UUserWidget;

UCLASS(Blueprintable)
class G1R_API UHUDQuickSlotController : public UHUDControllerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    EQuickSlotType m_SlotType;
    
private:
    UPROPERTY()
    TSubclassOf<UUserWidget> m_CrossbarWidgetClass;
    
    UPROPERTY()
    TSubclassOf<UUserWidget> m_HotbarWidgetClass;
    
    UPROPERTY()
    TSubclassOf<UUserWidget> m_TransformedHotbarWidgetClass;
    
    UPROPERTY()
    TSubclassOf<UUserWidget> m_WheelWidgetClass;
    
    UPROPERTY()
    TSubclassOf<UUserWidget> m_ControlledHotbarWidgetClass;
    
    UPROPERTY(Instanced)
    UQuickSlotBase* m_QuickSlot;
    
    UPROPERTY(Instanced)
    UQuickSlotControlledHotbar* m_ControlledQuickSlot;
    
    UPROPERTY()
    UHUDManagementController* m_HUDManagementController;
    
public:
    UHUDQuickSlotController();

private:
    UFUNCTION()
    void QuickSlotBindingRelease();
    
    UFUNCTION()
    void QuickSlotBindingPress();
    
    UFUNCTION()
    void OnQuickSlotItemClickedBind(int32 ItemId, EInventoryTypes InventoryType);
    
    UFUNCTION()
    void OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn);
    
    UFUNCTION()
    void OnInventoryItemClickedBind(int32 ItemId, EInventoryTypes InventoryType);
    
    UFUNCTION()
    void HandleInputTypeChanged(ECommonInputType _InputType);
    
    UFUNCTION(BlueprintCallable)
    static FString GetWheelBlueprintName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetTransformedHotbarBlueprintName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetHotbarBlueprintName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetCrossbarBlueprintName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetControlledHotbarBlueprintName();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnPlayerUntransformChanged(bool canUntransform);
    
};

