#pragma once
#include "CoreMinimal.h"
#include "AlkUserWidget.h"
#include "SettingDescription.h"
#include "SettingsDetailsWidget.generated.h"

UCLASS(EditInlineNew)
class G1R_API USettingsDetailsWidget : public UAlkUserWidget {
    GENERATED_BODY()
public:
    USettingsDetailsWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDetails(const FSettingDescription& _Description);
    
protected:
    UFUNCTION(BlueprintPure)
    static bool IsEmptyOrInvalid(const FText& _Text);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearDetails();
    
};

