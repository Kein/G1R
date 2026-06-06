#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "ProfileSelectionPageWidget.generated.h"

class UDiscreteItemViewWidget;
class UProfileSlotInfo;

UCLASS(EditInlineNew)
class G1R_API UProfileSelectionPageWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<UProfileSlotInfo*> m_ProfileInfos;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UDiscreteItemViewWidget* List_Profiles;
    
public:
    UProfileSelectionPageWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateProfileInfo_BP();
    
    UFUNCTION(BlueprintCallable)
    bool OnDeleteClicked(int32 ProfileSlot);
    
    UFUNCTION(BlueprintCallable)
    bool OnClicked(int32 ProfileSlot);
    
};

