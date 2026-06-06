#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StatsTooltipDialogueWidget.generated.h"

UCLASS(EditInlineNew)
class G1R_API UStatsTooltipDialogueWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    float m_PlayerLP;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_PlayerOre;
    
public:
    UStatsTooltipDialogueWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerOwnedLPAndOre();
    
};

