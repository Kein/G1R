#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "DifficultySelectionPageWidget.generated.h"

class UDifficultySlotInfo;

UCLASS(EditInlineNew)
class G1R_API UDifficultySelectionPageWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<UDifficultySlotInfo*> SlotsInfo;
    
public:
    UDifficultySelectionPageWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateDifficultyList_BP();
    
    UFUNCTION(BlueprintCallable)
    bool StartNewGame(const FString& ProfileName);
    
};

