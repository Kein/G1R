#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_Base.h"
#include "EDodgeWindowTimeframe.h"
#include "AnimNotifyState_DodgeAndBlockWindow.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_DodgeAndBlockWindow : public UAnimNotifyState_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EDodgeWindowTimeframe Timeframe;
    
public:
    UAnimNotifyState_DodgeAndBlockWindow();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetTimeFrame(EDodgeWindowTimeframe DodgeWindowTimeframe) const;
    
};

