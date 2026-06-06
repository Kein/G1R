#pragma once
#include "CoreMinimal.h"
#include "SettingsPageWidget.h"
#include "Templates/SubclassOf.h"
#include "SettingsPageWidget_DifficultySettings.generated.h"

class UDifficultyPreset;

UCLASS(EditInlineNew)
class G1R_API USettingsPageWidget_DifficultySettings : public USettingsPageWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UDifficultyPreset> m_WidgetDefaultPreset;
    
public:
    USettingsPageWidget_DifficultySettings();

protected:
    UFUNCTION(BlueprintCallable)
    void ApplyWidgetDefaultPreset();
    
};

