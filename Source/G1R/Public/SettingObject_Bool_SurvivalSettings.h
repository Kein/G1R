#pragma once
#include "CoreMinimal.h"
#include "SettingObject_Bool.h"
#include "SettingObject_Bool_SurvivalSettings.generated.h"

UCLASS(Abstract, EditInlineNew)
class G1R_API USettingObject_Bool_SurvivalSettings : public USettingObject_Bool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    bool m_IsShown;
    
public:
    USettingObject_Bool_SurvivalSettings();

};

