#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "GameplayTagContainer.h"
#include "GothicCommonActivatableWidget.generated.h"

class UPlayerWidget;

UCLASS(EditInlineNew)
class G1R_API UGothicCommonActivatableWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UGothicCommonActivatableWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void RemoveTag(FGameplayTag Tag);
    
public:
    UFUNCTION(BlueprintCallable)
    UPlayerWidget* GetPlayerWidget();
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddTag(FGameplayTag Tag);
    
};

