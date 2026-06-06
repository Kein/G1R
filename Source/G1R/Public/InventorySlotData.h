#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EInventoryTypes.h"
#include "InventorySlotData.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class G1R_API UInventorySlotData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUnseenStateChangedDelegate, bool, HasUnseenChanges);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSlotClickedDelegate, int32, SlotId);
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_Pos;
    
    UPROPERTY(BlueprintReadOnly)
    FText m_Name;
    
    UPROPERTY(BlueprintReadOnly)
    FText m_Description;
    
    UPROPERTY(BlueprintReadOnly)
    EInventoryTypes m_InventoryType;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_Value;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_PreviousValue;
    
    UPROPERTY(BlueprintReadOnly)
    FString m_Hotkey;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_Amount;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<UTexture2D> m_IconPath;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_IsEmpty;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_TraderItemIndex;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_ShowValue;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_IsActive;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_CanBeClicked;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_CanBeUsedByPlayer;
    
    UPROPERTY(BlueprintAssignable)
    FUnseenStateChangedDelegate m_OnUnseenStateChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_HasUnseenChanges;
    
public:
    UInventorySlotData();

};

